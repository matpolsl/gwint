#include<iostream>
#include <stdlib.h>

#include"pch.h"

using namespace std;

#pragma region Klasy Pola Bitwy
class Card //Karta- To bedzie Klasa abstrakcyjna
{
	friend class Battlefield;
public:
	int power = 0;
	int row = 0;//0-Meele , 1-Range, 2-Siege
	bool is_inPlay = 0;
	/*
	string linkToTexture = "res/Card_template.png";

	string getTexture()
	{
		return linkToTexture;
	}
	*/
	int getRow()
	{
		return row;
	}
	int getPower()
	{
		/*
		if efekt pogodowy == true
			{
			return 1;
			}
		
		*/
		return power;
	}
	Card()
	{

	}
	//ten konstruktor bedzie niepotrzebny pozniej
	Card(int a, int b)
	{
		power = a;
		row = b;
	}
	~Card()
	{

	}
};
class Battlefield_Row //Rzad na polu bitwy
{
public:
	Card cards[10];
	int weather_on = 0;//Stan pogody
	int Slot_id = 0;//Ta zmienna bedzie oznaczala miejsce w ktorym mozemy wstawic kolejna karte (zwiekszac tylko przy postawieniu karty)
	Battlefield_Row()
	{

	}
	~Battlefield_Row()
	{

	}
};
class Battlefield //POLE BITWY
{
public:
	Battlefield_Row Row[6];
	/*
	W praktyce wykorzystywanie
	Row[0]-Meele Gracza
	Row[1]-Range Gracza
	Row[2]-Siege Gracza

	AI dostaje podobne nazewnictwo tylko w formie Row[i+3], wtedy:

	Row[3]-Meele AI
	Row[4]-Range AI
	Row[5]-Siege AI
	*/

	friend void Put_Card(Card&, Battlefield&);

	Battlefield()
	{
	}
	virtual ~Battlefield()//virtual ¿eby niszczyl wszystko utworzone w ramach pola bitwy
	{
	}
};
#pragma endregion

#pragma region Karty-Klasy
class Card_Bandit :public Card
{
public:
	Card_Bandit()
	{
		this->power = 6;
		this->row = 0;
		//this->linkToTexture = "res/Card_Bandit.png";
	}
};
class Card_Hunter :public Card
{
public:
	Card_Hunter()
	{
		this->power = 5;
		this->row = 1;
		//this->linkToTexture = "res/Card_Hunter.png";
	}
};
class Card_Catapult :public Card
{
public:
	Card_Catapult()
	{
		this->power = 7;
		this->row = 2;
		//this->linkToTexture = "res/Card_Catapult.png";
	}
};

class Card_Weather_Cold :public Card
{
public:
	Card_Weather_Cold()
	{
		this->power = -1;
		this->row = 0;
		//this->linkToTexture = "";
	}
};
class Card_Weather_Fog :public Card
{
public:
	Card_Weather_Fog()
	{
		this->power = -1;
		this->row = 1;
		//this->linkToTexture = "";
	}
};
class Card_Weather_Rain :public Card
{
public:
	Card_Weather_Rain()
	{
		this->power = -1;
		this->row = 2;
		//this->linkToTexture = "";
	}
};
#pragma endregion

void Put_Card(Card& c, Battlefield& b, int pl)//Ta funkcja musi korzystac z ,,&'' w przeciwnym wypadku operacja zamiany obiektu wykonana bedzie na kopiach
{
	if (c.getPower() == -1)
	{
		b.Row[c.getRow()].weather_on = 1;
		b.Row[c.getRow()+3].weather_on = 1;
	}
	else
	{
		pl = pl * 3;//Ostatnia zmienna oznacza czy karte zagral bot czy czlowiek, jezeli bot to gramy karte na rzedzie+3
		b.Row[c.getRow() + pl].cards[b.Row[c.getRow() + pl].Slot_id] = c;
		b.Row[c.getRow() + pl].cards[b.Row[c.getRow() + pl].Slot_id].is_inPlay = 1;
		b.Row[c.getRow() + pl].Slot_id++;
	}

	//Usuniecie karty realizowane w innych funkcjach
	Card blank(-2, -2);
	c = blank;
}

void game_render(Battlefield b)
{
	int row_order[6] = { 2,1,0,3,4,5 };
	for (int j = 0;j < 6;j++)
	{

		for (int i = 0;i < 10;i++)
		{
			if (b.Row[row_order[j]].cards[i].is_inPlay != 0)
			{
				//cout << b.Row[row_order[j]].cards[i].getPower();
			}
		}
	}
}

#pragma region Klasy Zawodnikow
class Hand
{
	friend class Zawodnik;
public:

	Hand()
	{

	}
	virtual ~Hand()
	{

	}
};
class Zawodnik //klasa abstrakcyjna na ktora odziedziczy typ gracza GRACZ lub BOT // Do obiektow tej klasy bedziemy sie pytac jaki wykonuja ruch
{
public:
	int Pass = 0;
	int lives = 2;
	Card cardAtHand[10];
	void Fill_Hand_Random()
	{
		int los = 0;
		for (int i = 0;i < 10;i++)
		{
			Card random_card(2, 1);
			//los = rand() % 6 + 1;
			if (los == 1)
			{
				Card_Hunter t;
				random_card = t;
			}
			if (los == 2)
			{
				Card_Bandit t;
				random_card = t;
			}
			if (los == 3)
			{
				Card_Catapult t;
				random_card = t;
			}
			if (los == 4)
			{
				Card_Weather_Cold t;
				random_card = t;
			}
			if (los == 5)
			{
				Card_Weather_Rain t;
				random_card = t;
			}
			if (los == 6)
			{
				Card_Weather_Fog t;
				random_card = t;
			}
			this->cardAtHand[i] = random_card;
		}
	}

	virtual void tura(Battlefield& b)
	{
		
	}
	void do_pass()
	{
		this->Pass = 1;
	}
};
class Gracz :public Zawodnik
{
public:

	void tura(Battlefield& b)
	{
		
	}
};
class Ai :public Zawodnik
{
public:
	void tura(Battlefield& b)
	{
		int flag = 0;
		for (int i = 0;i < 10;i++)
		{
			if (cardAtHand[i].power != -2)
			{
				flag = 1;
			}
		}

		if (flag == 0)
		{
			this->do_pass();
		}
		else
		{
			int los = 1;
			do
			{
				//los = rand() % 10;
			} while (cardAtHand[los].power == -2);//power =-2 wtedy kiedy karty nie ma na rece
			Put_Card(cardAtHand[los], b, 1);
		}
	}
};
#pragma endregion

int zlicz(Battlefield b,int strona)
{
	strona = strona * 3;
	int pow=0;
	for (int j = 0;j < 3;j++)
	{
		for (int i = 0;i < 10;i++)
		{
			if (b.Row[j+strona].cards[i].is_inPlay != 0)
			{
				pow=pow+b.Row[j+strona].cards[i].getPower();
			}
		}
	}
	return pow;
}
void GRA()
{
	Battlefield Pole_Bitwy;
#pragma region StronyKonfliktu
	Ai strona1;
	Gracz strona2;

	strona1.Fill_Hand_Random();
	strona2.Fill_Hand_Random();

	Zawodnik* WSK_GRACZ[2];
	WSK_GRACZ[0] = &strona1;
	WSK_GRACZ[1] = &strona2;
	//???delete strona1/strona2???
#pragma endregion

	
	
#pragma region GAME LOOP
	int turn_number = 0;
	for (;;)
	{
		game_render(Pole_Bitwy);
		if (WSK_GRACZ[0]->Pass == 1 && WSK_GRACZ[1]->Pass == 1)
		{
			if (zlicz(Pole_Bitwy,0) > zlicz(Pole_Bitwy,1))
			{
				strona1.lives--;
			}
			if (zlicz(Pole_Bitwy, 0) < zlicz(Pole_Bitwy, 1))
			{
				strona2.lives--;
			}
			if (zlicz(Pole_Bitwy, 0) == zlicz(Pole_Bitwy, 1))
			{
				strona1.lives--;
				strona2.lives--;
			}
			//koniec tury
		}
		if(WSK_GRACZ[turn_number % 2]->Pass==0)
		{
		WSK_GRACZ[turn_number%2]->tura(Pole_Bitwy);//Reszta z dzielenia przez 2 pozwala na naprzemienne tury
		}
	}
#pragma endregion
}