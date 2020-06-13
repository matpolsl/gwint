#include<iostream>

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
class Hand
{
public:
	Card *cards[10];//Wskazniki na obiekty kart
	
	Hand()
	{

	}
	virtual ~Hand()
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
#pragma endregion

void Put_Card(Card& c, Battlefield& b, int pl)//Ta funkcja musi korzystac z ,,&'' w przeciwnym wypadku operacja zamiany obiektu wykonana bedzie na kopiach
{
	pl = pl * 3;//Ostatnia zmienna oznacza czy karte zagral bot czy czlowiek, jezeli bot to gramy karte na rzedzie+3
	b.Row[c.getRow() + pl].cards[b.Row[c.getRow() + pl].Slot_id] = c;
	b.Row[c.getRow() + pl].cards[b.Row[c.getRow() + pl].Slot_id].is_inPlay = 1;
	b.Row[c.getRow() + pl].Slot_id++;
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
class Zawodnik //klasa abstrakcyjna na ktora odziedziczy typ gracza GRACZ lub BOT // Do obiektow tej klasy bedziemy sie pytac jaki wykonuja ruch
{
public:
	virtual void tura()
	{
		
	}
};
class Gracz :public Zawodnik
{
public:

	void tura()
	{
		
	}
};
class Ai :public Zawodnik
{
public:
	void tura()
	{
		
	}
};
#pragma endregion


void GRA()
{
	Battlefield Pole_Bitwy;
#pragma region StronyKonfliktu
	Ai strona1;
	Gracz strona2;

	Zawodnik* WSK_GRACZ[2];
	WSK_GRACZ[0] = &strona1;
	WSK_GRACZ[1] = &strona2;
	//???delete strona1/strona2???
#pragma endregion

	//Tworzenie obiektow kart
	Card test1(5, 0);//Karta o mocy 5 w rzedzie pierwszym
	Card_Hunter test2;

	//Przyklad zagrania karty:
	Put_Card(test1, Pole_Bitwy, 0);// gdzie 0 to gracz, 1 to bot
	Put_Card(test2, Pole_Bitwy, 0);
	
	
#pragma region GAME LOOP
	int turn_number = 0;
	for (;;)
	{
		game_render(Pole_Bitwy);
		WSK_GRACZ[turn_number%2]->tura();//Reszta z dzielenia przez 2 pozwala na naprzemienne tury

	}
#pragma endregion
}