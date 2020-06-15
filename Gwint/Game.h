#pragma once

#include "Gra.h"
int RandPoint[10];
int RandType[10];
int W[3];
int R[2];
bool UserPass;
AI Gracz;
namespace Gwint {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:

		Game(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Wynik;

	private: System::Windows::Forms::Label^ CW;
	private: System::Windows::Forms::Label^ AW;
	private: System::Windows::Forms::Label^ SW;
	private: System::Windows::Forms::Label^ PS;




	private: System::Windows::Forms::Label^ PA;

	private: System::Windows::Forms::Label^ PC;


	private: System::Windows::Forms::PictureBox^ Hand1;
	private: System::Windows::Forms::PictureBox^ Hand2;
	private: System::Windows::Forms::PictureBox^ Hand3;
	private: System::Windows::Forms::PictureBox^ Hand4;
	private: System::Windows::Forms::PictureBox^ Hand5;
	private: System::Windows::Forms::PictureBox^ Hand6;
	private: System::Windows::Forms::PictureBox^ Hand7;
	private: System::Windows::Forms::PictureBox^ Hand8;
	private: System::Windows::Forms::PictureBox^ Hand9;
	private: System::Windows::Forms::PictureBox^ Hand10;
	private: System::Windows::Forms::Button^ RandButton;
	private: System::Windows::Forms::PictureBox^ C1;
	private: System::Windows::Forms::PictureBox^ C2;
	private: System::Windows::Forms::PictureBox^ C3;
	private: System::Windows::Forms::PictureBox^ C4;
	private: System::Windows::Forms::PictureBox^ C5;
	private: System::Windows::Forms::PictureBox^ C6;
	private: System::Windows::Forms::PictureBox^ C7;
	private: System::Windows::Forms::PictureBox^ C8;
	private: System::Windows::Forms::PictureBox^ C9;
	private: System::Windows::Forms::PictureBox^ C10;
	private: System::Windows::Forms::PictureBox^ A1;
	private: System::Windows::Forms::PictureBox^ A2;
	private: System::Windows::Forms::PictureBox^ A3;
	private: System::Windows::Forms::PictureBox^ A4;
	private: System::Windows::Forms::PictureBox^ A5;
	private: System::Windows::Forms::PictureBox^ A6;
	private: System::Windows::Forms::PictureBox^ A7;
	private: System::Windows::Forms::PictureBox^ A8;
	private: System::Windows::Forms::PictureBox^ A9;
	private: System::Windows::Forms::PictureBox^ A10;
	private: System::Windows::Forms::PictureBox^ S1;
	private: System::Windows::Forms::PictureBox^ S2;
	private: System::Windows::Forms::PictureBox^ S3;
	private: System::Windows::Forms::PictureBox^ S4;
	private: System::Windows::Forms::PictureBox^ S5;
	private: System::Windows::Forms::PictureBox^ S6;
	private: System::Windows::Forms::PictureBox^ S7;
	private: System::Windows::Forms::PictureBox^ S8;
	private: System::Windows::Forms::PictureBox^ S9;
	private: System::Windows::Forms::PictureBox^ S10;
	private: System::Windows::Forms::Label^ TekstM;
	private: System::Windows::Forms::Label^ WM;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ WP;
	private: System::Windows::Forms::PictureBox^ PC10;
	private: System::Windows::Forms::PictureBox^ PC9;
	private: System::Windows::Forms::PictureBox^ PC8;
	private: System::Windows::Forms::PictureBox^ PC7;
	private: System::Windows::Forms::PictureBox^ PC6;
	private: System::Windows::Forms::PictureBox^ PC5;
	private: System::Windows::Forms::PictureBox^ PC4;
	private: System::Windows::Forms::PictureBox^ PC3;
	private: System::Windows::Forms::PictureBox^ PC2;
	private: System::Windows::Forms::PictureBox^ PC1;
	private: System::Windows::Forms::PictureBox^ PA10;
	private: System::Windows::Forms::PictureBox^ PA9;
	private: System::Windows::Forms::PictureBox^ PA8;
	private: System::Windows::Forms::PictureBox^ PA7;
	private: System::Windows::Forms::PictureBox^ PA6;
	private: System::Windows::Forms::PictureBox^ PA5;
	private: System::Windows::Forms::PictureBox^ PA4;
	private: System::Windows::Forms::PictureBox^ PA3;
	private: System::Windows::Forms::PictureBox^ PA2;
	private: System::Windows::Forms::PictureBox^ PA1;
	private: System::Windows::Forms::PictureBox^ PS10;
	private: System::Windows::Forms::PictureBox^ PS9;
	private: System::Windows::Forms::PictureBox^ PS8;
	private: System::Windows::Forms::PictureBox^ PS7;
	private: System::Windows::Forms::PictureBox^ PS6;
	private: System::Windows::Forms::PictureBox^ PS5;
	private: System::Windows::Forms::PictureBox^ PS4;
	private: System::Windows::Forms::PictureBox^ PS3;
	private: System::Windows::Forms::PictureBox^ PS2;
	private: System::Windows::Forms::PictureBox^ PS1;
private: System::Windows::Forms::Label^ PASS;
private: System::Windows::Forms::Button^ NewRound;



	protected:

	protected:

	public:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Wynik = (gcnew System::Windows::Forms::Label());
			this->CW = (gcnew System::Windows::Forms::Label());
			this->AW = (gcnew System::Windows::Forms::Label());
			this->SW = (gcnew System::Windows::Forms::Label());
			this->PS = (gcnew System::Windows::Forms::Label());
			this->PA = (gcnew System::Windows::Forms::Label());
			this->PC = (gcnew System::Windows::Forms::Label());
			this->Hand1 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand2 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand3 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand4 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand5 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand6 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand7 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand8 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand9 = (gcnew System::Windows::Forms::PictureBox());
			this->Hand10 = (gcnew System::Windows::Forms::PictureBox());
			this->RandButton = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->C4 = (gcnew System::Windows::Forms::PictureBox());
			this->C5 = (gcnew System::Windows::Forms::PictureBox());
			this->C6 = (gcnew System::Windows::Forms::PictureBox());
			this->C7 = (gcnew System::Windows::Forms::PictureBox());
			this->C8 = (gcnew System::Windows::Forms::PictureBox());
			this->C9 = (gcnew System::Windows::Forms::PictureBox());
			this->C10 = (gcnew System::Windows::Forms::PictureBox());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->A4 = (gcnew System::Windows::Forms::PictureBox());
			this->A5 = (gcnew System::Windows::Forms::PictureBox());
			this->A6 = (gcnew System::Windows::Forms::PictureBox());
			this->A7 = (gcnew System::Windows::Forms::PictureBox());
			this->A8 = (gcnew System::Windows::Forms::PictureBox());
			this->A9 = (gcnew System::Windows::Forms::PictureBox());
			this->A10 = (gcnew System::Windows::Forms::PictureBox());
			this->S1 = (gcnew System::Windows::Forms::PictureBox());
			this->S2 = (gcnew System::Windows::Forms::PictureBox());
			this->S3 = (gcnew System::Windows::Forms::PictureBox());
			this->S4 = (gcnew System::Windows::Forms::PictureBox());
			this->S5 = (gcnew System::Windows::Forms::PictureBox());
			this->S6 = (gcnew System::Windows::Forms::PictureBox());
			this->S7 = (gcnew System::Windows::Forms::PictureBox());
			this->S8 = (gcnew System::Windows::Forms::PictureBox());
			this->S9 = (gcnew System::Windows::Forms::PictureBox());
			this->S10 = (gcnew System::Windows::Forms::PictureBox());
			this->TekstM = (gcnew System::Windows::Forms::Label());
			this->WM = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->WP = (gcnew System::Windows::Forms::Label());
			this->PC10 = (gcnew System::Windows::Forms::PictureBox());
			this->PC9 = (gcnew System::Windows::Forms::PictureBox());
			this->PC8 = (gcnew System::Windows::Forms::PictureBox());
			this->PC7 = (gcnew System::Windows::Forms::PictureBox());
			this->PC6 = (gcnew System::Windows::Forms::PictureBox());
			this->PC5 = (gcnew System::Windows::Forms::PictureBox());
			this->PC4 = (gcnew System::Windows::Forms::PictureBox());
			this->PC3 = (gcnew System::Windows::Forms::PictureBox());
			this->PC2 = (gcnew System::Windows::Forms::PictureBox());
			this->PC1 = (gcnew System::Windows::Forms::PictureBox());
			this->PA10 = (gcnew System::Windows::Forms::PictureBox());
			this->PA9 = (gcnew System::Windows::Forms::PictureBox());
			this->PA8 = (gcnew System::Windows::Forms::PictureBox());
			this->PA7 = (gcnew System::Windows::Forms::PictureBox());
			this->PA6 = (gcnew System::Windows::Forms::PictureBox());
			this->PA5 = (gcnew System::Windows::Forms::PictureBox());
			this->PA4 = (gcnew System::Windows::Forms::PictureBox());
			this->PA3 = (gcnew System::Windows::Forms::PictureBox());
			this->PA2 = (gcnew System::Windows::Forms::PictureBox());
			this->PA1 = (gcnew System::Windows::Forms::PictureBox());
			this->PS10 = (gcnew System::Windows::Forms::PictureBox());
			this->PS9 = (gcnew System::Windows::Forms::PictureBox());
			this->PS8 = (gcnew System::Windows::Forms::PictureBox());
			this->PS7 = (gcnew System::Windows::Forms::PictureBox());
			this->PS6 = (gcnew System::Windows::Forms::PictureBox());
			this->PS5 = (gcnew System::Windows::Forms::PictureBox());
			this->PS4 = (gcnew System::Windows::Forms::PictureBox());
			this->PS3 = (gcnew System::Windows::Forms::PictureBox());
			this->PS2 = (gcnew System::Windows::Forms::PictureBox());
			this->PS1 = (gcnew System::Windows::Forms::PictureBox());
			this->PASS = (gcnew System::Windows::Forms::Label());
			this->NewRound = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 619);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PASS!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// Wynik
			// 
			this->Wynik->AutoSize = true;
			this->Wynik->BackColor = System::Drawing::Color::Transparent;
			this->Wynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Wynik->Location = System::Drawing::Point(21, 672);
			this->Wynik->Name = L"Wynik";
			this->Wynik->Size = System::Drawing::Size(70, 42);
			this->Wynik->TabIndex = 1;
			this->Wynik->Text = L"0/0";
			// 
			// CW
			// 
			this->CW->AutoSize = true;
			this->CW->BackColor = System::Drawing::Color::Transparent;
			this->CW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->CW->Location = System::Drawing::Point(-5, 505);
			this->CW->Name = L"CW";
			this->CW->Size = System::Drawing::Size(68, 73);
			this->CW->TabIndex = 2;
			this->CW->Text = L"0";
			// 
			// AW
			// 
			this->AW->AutoSize = true;
			this->AW->BackColor = System::Drawing::Color::Transparent;
			this->AW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->AW->Location = System::Drawing::Point(-5, 420);
			this->AW->Name = L"AW";
			this->AW->Size = System::Drawing::Size(68, 73);
			this->AW->TabIndex = 3;
			this->AW->Text = L"0";
			// 
			// SW
			// 
			this->SW->AutoSize = true;
			this->SW->BackColor = System::Drawing::Color::Transparent;
			this->SW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->SW->Location = System::Drawing::Point(-5, 334);
			this->SW->Name = L"SW";
			this->SW->Size = System::Drawing::Size(68, 73);
			this->SW->TabIndex = 4;
			this->SW->Text = L"0";
			// 
			// PS
			// 
			this->PS->AutoSize = true;
			this->PS->BackColor = System::Drawing::Color::Transparent;
			this->PS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PS->Location = System::Drawing::Point(-5, 209);
			this->PS->Name = L"PS";
			this->PS->Size = System::Drawing::Size(68, 73);
			this->PS->TabIndex = 5;
			this->PS->Text = L"0";
			// 
			// PA
			// 
			this->PA->AutoSize = true;
			this->PA->BackColor = System::Drawing::Color::Transparent;
			this->PA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PA->Location = System::Drawing::Point(-5, 120);
			this->PA->Name = L"PA";
			this->PA->Size = System::Drawing::Size(68, 73);
			this->PA->TabIndex = 6;
			this->PA->Text = L"0";
			// 
			// PC
			// 
			this->PC->AutoSize = true;
			this->PC->BackColor = System::Drawing::Color::Transparent;
			this->PC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PC->Location = System::Drawing::Point(-5, 32);
			this->PC->Name = L"PC";
			this->PC->Size = System::Drawing::Size(68, 73);
			this->PC->TabIndex = 7;
			this->PC->Text = L"0";
			// 
			// Hand1
			// 
			this->Hand1->BackColor = System::Drawing::Color::Transparent;
			this->Hand1->Location = System::Drawing::Point(223, 634);
			this->Hand1->Name = L"Hand1";
			this->Hand1->Size = System::Drawing::Size(45, 80);
			this->Hand1->TabIndex = 8;
			this->Hand1->TabStop = false;
			this->Hand1->Click += gcnew System::EventHandler(this, &Game::Hand1_Click);
			// 
			// Hand2
			// 
			this->Hand2->BackColor = System::Drawing::Color::Transparent;
			this->Hand2->Location = System::Drawing::Point(274, 634);
			this->Hand2->Name = L"Hand2";
			this->Hand2->Size = System::Drawing::Size(45, 80);
			this->Hand2->TabIndex = 9;
			this->Hand2->TabStop = false;
			this->Hand2->Click += gcnew System::EventHandler(this, &Game::Hand2_Click_1);
			// 
			// Hand3
			// 
			this->Hand3->BackColor = System::Drawing::Color::Transparent;
			this->Hand3->Location = System::Drawing::Point(325, 634);
			this->Hand3->Name = L"Hand3";
			this->Hand3->Size = System::Drawing::Size(45, 80);
			this->Hand3->TabIndex = 10;
			this->Hand3->TabStop = false;
			this->Hand3->Click += gcnew System::EventHandler(this, &Game::Hand3_Click);
			// 
			// Hand4
			// 
			this->Hand4->BackColor = System::Drawing::Color::Transparent;
			this->Hand4->Location = System::Drawing::Point(376, 634);
			this->Hand4->Name = L"Hand4";
			this->Hand4->Size = System::Drawing::Size(45, 80);
			this->Hand4->TabIndex = 11;
			this->Hand4->TabStop = false;
			this->Hand4->Click += gcnew System::EventHandler(this, &Game::Hand4_Click);
			// 
			// Hand5
			// 
			this->Hand5->BackColor = System::Drawing::Color::Transparent;
			this->Hand5->Location = System::Drawing::Point(427, 634);
			this->Hand5->Name = L"Hand5";
			this->Hand5->Size = System::Drawing::Size(45, 80);
			this->Hand5->TabIndex = 12;
			this->Hand5->TabStop = false;
			this->Hand5->Click += gcnew System::EventHandler(this, &Game::Hand5_Click);
			// 
			// Hand6
			// 
			this->Hand6->BackColor = System::Drawing::Color::Transparent;
			this->Hand6->Location = System::Drawing::Point(478, 634);
			this->Hand6->Name = L"Hand6";
			this->Hand6->Size = System::Drawing::Size(45, 80);
			this->Hand6->TabIndex = 13;
			this->Hand6->TabStop = false;
			this->Hand6->Click += gcnew System::EventHandler(this, &Game::Hand6_Click);
			// 
			// Hand7
			// 
			this->Hand7->BackColor = System::Drawing::Color::Transparent;
			this->Hand7->Location = System::Drawing::Point(529, 634);
			this->Hand7->Name = L"Hand7";
			this->Hand7->Size = System::Drawing::Size(45, 80);
			this->Hand7->TabIndex = 14;
			this->Hand7->TabStop = false;
			this->Hand7->Click += gcnew System::EventHandler(this, &Game::Hand7_Click);
			// 
			// Hand8
			// 
			this->Hand8->BackColor = System::Drawing::Color::Transparent;
			this->Hand8->Location = System::Drawing::Point(580, 634);
			this->Hand8->Name = L"Hand8";
			this->Hand8->Size = System::Drawing::Size(45, 80);
			this->Hand8->TabIndex = 15;
			this->Hand8->TabStop = false;
			this->Hand8->Click += gcnew System::EventHandler(this, &Game::Hand8_Click);
			// 
			// Hand9
			// 
			this->Hand9->BackColor = System::Drawing::Color::Transparent;
			this->Hand9->Location = System::Drawing::Point(631, 634);
			this->Hand9->Name = L"Hand9";
			this->Hand9->Size = System::Drawing::Size(45, 80);
			this->Hand9->TabIndex = 16;
			this->Hand9->TabStop = false;
			this->Hand9->Click += gcnew System::EventHandler(this, &Game::Hand9_Click);
			// 
			// Hand10
			// 
			this->Hand10->BackColor = System::Drawing::Color::Transparent;
			this->Hand10->Location = System::Drawing::Point(687, 634);
			this->Hand10->Name = L"Hand10";
			this->Hand10->Size = System::Drawing::Size(45, 80);
			this->Hand10->TabIndex = 17;
			this->Hand10->TabStop = false;
			this->Hand10->Click += gcnew System::EventHandler(this, &Game::Hand10_Click);
			// 
			// RandButton
			// 
			this->RandButton->Location = System::Drawing::Point(122, 648);
			this->RandButton->Name = L"RandButton";
			this->RandButton->Size = System::Drawing::Size(75, 23);
			this->RandButton->TabIndex = 18;
			this->RandButton->Text = L"Losowanie";
			this->RandButton->UseVisualStyleBackColor = true;
			this->RandButton->Click += gcnew System::EventHandler(this, &Game::RandButton_Click);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::Transparent;
			this->C1->Location = System::Drawing::Point(223, 505);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(45, 80);
			this->C1->TabIndex = 19;
			this->C1->TabStop = false;
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::Transparent;
			this->C2->Location = System::Drawing::Point(274, 505);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(45, 80);
			this->C2->TabIndex = 20;
			this->C2->TabStop = false;
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::Color::Transparent;
			this->C3->Location = System::Drawing::Point(325, 505);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(45, 80);
			this->C3->TabIndex = 21;
			this->C3->TabStop = false;
			// 
			// C4
			// 
			this->C4->BackColor = System::Drawing::Color::Transparent;
			this->C4->Location = System::Drawing::Point(376, 505);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(45, 80);
			this->C4->TabIndex = 22;
			this->C4->TabStop = false;
			// 
			// C5
			// 
			this->C5->BackColor = System::Drawing::Color::Transparent;
			this->C5->Location = System::Drawing::Point(427, 505);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(45, 80);
			this->C5->TabIndex = 23;
			this->C5->TabStop = false;
			// 
			// C6
			// 
			this->C6->BackColor = System::Drawing::Color::Transparent;
			this->C6->Location = System::Drawing::Point(478, 505);
			this->C6->Name = L"C6";
			this->C6->Size = System::Drawing::Size(45, 80);
			this->C6->TabIndex = 24;
			this->C6->TabStop = false;
			// 
			// C7
			// 
			this->C7->BackColor = System::Drawing::Color::Transparent;
			this->C7->Location = System::Drawing::Point(529, 505);
			this->C7->Name = L"C7";
			this->C7->Size = System::Drawing::Size(45, 80);
			this->C7->TabIndex = 25;
			this->C7->TabStop = false;
			// 
			// C8
			// 
			this->C8->BackColor = System::Drawing::Color::Transparent;
			this->C8->Location = System::Drawing::Point(580, 505);
			this->C8->Name = L"C8";
			this->C8->Size = System::Drawing::Size(45, 80);
			this->C8->TabIndex = 26;
			this->C8->TabStop = false;
			// 
			// C9
			// 
			this->C9->BackColor = System::Drawing::Color::Transparent;
			this->C9->Location = System::Drawing::Point(631, 505);
			this->C9->Name = L"C9";
			this->C9->Size = System::Drawing::Size(45, 80);
			this->C9->TabIndex = 27;
			this->C9->TabStop = false;
			// 
			// C10
			// 
			this->C10->BackColor = System::Drawing::Color::Transparent;
			this->C10->Location = System::Drawing::Point(687, 505);
			this->C10->Name = L"C10";
			this->C10->Size = System::Drawing::Size(45, 80);
			this->C10->TabIndex = 28;
			this->C10->TabStop = false;
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::Transparent;
			this->A1->Location = System::Drawing::Point(223, 413);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(45, 80);
			this->A1->TabIndex = 29;
			this->A1->TabStop = false;
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::Transparent;
			this->A2->Location = System::Drawing::Point(274, 413);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(45, 80);
			this->A2->TabIndex = 30;
			this->A2->TabStop = false;
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::Color::Transparent;
			this->A3->Location = System::Drawing::Point(325, 413);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(45, 80);
			this->A3->TabIndex = 31;
			this->A3->TabStop = false;
			// 
			// A4
			// 
			this->A4->BackColor = System::Drawing::Color::Transparent;
			this->A4->Location = System::Drawing::Point(376, 413);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(45, 80);
			this->A4->TabIndex = 32;
			this->A4->TabStop = false;
			// 
			// A5
			// 
			this->A5->BackColor = System::Drawing::Color::Transparent;
			this->A5->Location = System::Drawing::Point(427, 413);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(45, 80);
			this->A5->TabIndex = 33;
			this->A5->TabStop = false;
			// 
			// A6
			// 
			this->A6->BackColor = System::Drawing::Color::Transparent;
			this->A6->Location = System::Drawing::Point(478, 413);
			this->A6->Name = L"A6";
			this->A6->Size = System::Drawing::Size(45, 80);
			this->A6->TabIndex = 34;
			this->A6->TabStop = false;
			// 
			// A7
			// 
			this->A7->BackColor = System::Drawing::Color::Transparent;
			this->A7->Location = System::Drawing::Point(529, 413);
			this->A7->Name = L"A7";
			this->A7->Size = System::Drawing::Size(45, 80);
			this->A7->TabIndex = 35;
			this->A7->TabStop = false;
			// 
			// A8
			// 
			this->A8->BackColor = System::Drawing::Color::Transparent;
			this->A8->Location = System::Drawing::Point(580, 413);
			this->A8->Name = L"A8";
			this->A8->Size = System::Drawing::Size(45, 80);
			this->A8->TabIndex = 36;
			this->A8->TabStop = false;
			// 
			// A9
			// 
			this->A9->BackColor = System::Drawing::Color::Transparent;
			this->A9->Location = System::Drawing::Point(631, 413);
			this->A9->Name = L"A9";
			this->A9->Size = System::Drawing::Size(45, 80);
			this->A9->TabIndex = 37;
			this->A9->TabStop = false;
			// 
			// A10
			// 
			this->A10->BackColor = System::Drawing::Color::Transparent;
			this->A10->Location = System::Drawing::Point(682, 413);
			this->A10->Name = L"A10";
			this->A10->Size = System::Drawing::Size(45, 80);
			this->A10->TabIndex = 38;
			this->A10->TabStop = false;
			// 
			// S1
			// 
			this->S1->BackColor = System::Drawing::Color::Transparent;
			this->S1->Location = System::Drawing::Point(223, 327);
			this->S1->Name = L"S1";
			this->S1->Size = System::Drawing::Size(45, 80);
			this->S1->TabIndex = 39;
			this->S1->TabStop = false;
			// 
			// S2
			// 
			this->S2->BackColor = System::Drawing::Color::Transparent;
			this->S2->Location = System::Drawing::Point(274, 327);
			this->S2->Name = L"S2";
			this->S2->Size = System::Drawing::Size(45, 80);
			this->S2->TabIndex = 40;
			this->S2->TabStop = false;
			// 
			// S3
			// 
			this->S3->BackColor = System::Drawing::Color::Transparent;
			this->S3->Location = System::Drawing::Point(325, 327);
			this->S3->Name = L"S3";
			this->S3->Size = System::Drawing::Size(45, 80);
			this->S3->TabIndex = 41;
			this->S3->TabStop = false;
			// 
			// S4
			// 
			this->S4->BackColor = System::Drawing::Color::Transparent;
			this->S4->Location = System::Drawing::Point(376, 327);
			this->S4->Name = L"S4";
			this->S4->Size = System::Drawing::Size(45, 80);
			this->S4->TabIndex = 42;
			this->S4->TabStop = false;
			// 
			// S5
			// 
			this->S5->BackColor = System::Drawing::Color::Transparent;
			this->S5->Location = System::Drawing::Point(427, 327);
			this->S5->Name = L"S5";
			this->S5->Size = System::Drawing::Size(45, 80);
			this->S5->TabIndex = 43;
			this->S5->TabStop = false;
			// 
			// S6
			// 
			this->S6->BackColor = System::Drawing::Color::Transparent;
			this->S6->Location = System::Drawing::Point(478, 327);
			this->S6->Name = L"S6";
			this->S6->Size = System::Drawing::Size(45, 80);
			this->S6->TabIndex = 44;
			this->S6->TabStop = false;
			// 
			// S7
			// 
			this->S7->BackColor = System::Drawing::Color::Transparent;
			this->S7->Location = System::Drawing::Point(529, 327);
			this->S7->Name = L"S7";
			this->S7->Size = System::Drawing::Size(45, 80);
			this->S7->TabIndex = 45;
			this->S7->TabStop = false;
			// 
			// S8
			// 
			this->S8->BackColor = System::Drawing::Color::Transparent;
			this->S8->Location = System::Drawing::Point(580, 327);
			this->S8->Name = L"S8";
			this->S8->Size = System::Drawing::Size(45, 80);
			this->S8->TabIndex = 46;
			this->S8->TabStop = false;
			// 
			// S9
			// 
			this->S9->BackColor = System::Drawing::Color::Transparent;
			this->S9->Location = System::Drawing::Point(631, 327);
			this->S9->Name = L"S9";
			this->S9->Size = System::Drawing::Size(45, 80);
			this->S9->TabIndex = 47;
			this->S9->TabStop = false;
			// 
			// S10
			// 
			this->S10->BackColor = System::Drawing::Color::Transparent;
			this->S10->Location = System::Drawing::Point(682, 327);
			this->S10->Name = L"S10";
			this->S10->Size = System::Drawing::Size(45, 80);
			this->S10->TabIndex = 48;
			this->S10->TabStop = false;
			// 
			// TekstM
			// 
			this->TekstM->AutoSize = true;
			this->TekstM->BackColor = System::Drawing::Color::Transparent;
			this->TekstM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TekstM->Location = System::Drawing::Point(4, 619);
			this->TekstM->Name = L"TekstM";
			this->TekstM->Size = System::Drawing::Size(76, 15);
			this->TekstM->TabIndex = 49;
			this->TekstM->Text = L"Moje punkty:";
			// 
			// WM
			// 
			this->WM->AutoSize = true;
			this->WM->BackColor = System::Drawing::Color::Transparent;
			this->WM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WM->Location = System::Drawing::Point(86, 619);
			this->WM->Name = L"WM";
			this->WM->Size = System::Drawing::Size(14, 15);
			this->WM->TabIndex = 50;
			this->WM->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(4, 648);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 15);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Punkty AI:";
			// 
			// WP
			// 
			this->WP->AutoSize = true;
			this->WP->BackColor = System::Drawing::Color::Transparent;
			this->WP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WP->Location = System::Drawing::Point(86, 648);
			this->WP->Name = L"WP";
			this->WP->Size = System::Drawing::Size(14, 15);
			this->WP->TabIndex = 52;
			this->WP->Text = L"0";
			// 
			// PC10
			// 
			this->PC10->BackColor = System::Drawing::Color::Transparent;
			this->PC10->Location = System::Drawing::Point(682, 32);
			this->PC10->Name = L"PC10";
			this->PC10->Size = System::Drawing::Size(45, 80);
			this->PC10->TabIndex = 82;
			this->PC10->TabStop = false;
			// 
			// PC9
			// 
			this->PC9->BackColor = System::Drawing::Color::Transparent;
			this->PC9->Location = System::Drawing::Point(631, 32);
			this->PC9->Name = L"PC9";
			this->PC9->Size = System::Drawing::Size(45, 80);
			this->PC9->TabIndex = 81;
			this->PC9->TabStop = false;
			// 
			// PC8
			// 
			this->PC8->BackColor = System::Drawing::Color::Transparent;
			this->PC8->Location = System::Drawing::Point(580, 32);
			this->PC8->Name = L"PC8";
			this->PC8->Size = System::Drawing::Size(45, 80);
			this->PC8->TabIndex = 80;
			this->PC8->TabStop = false;
			// 
			// PC7
			// 
			this->PC7->BackColor = System::Drawing::Color::Transparent;
			this->PC7->Location = System::Drawing::Point(529, 32);
			this->PC7->Name = L"PC7";
			this->PC7->Size = System::Drawing::Size(45, 80);
			this->PC7->TabIndex = 79;
			this->PC7->TabStop = false;
			// 
			// PC6
			// 
			this->PC6->BackColor = System::Drawing::Color::Transparent;
			this->PC6->Location = System::Drawing::Point(478, 32);
			this->PC6->Name = L"PC6";
			this->PC6->Size = System::Drawing::Size(45, 80);
			this->PC6->TabIndex = 78;
			this->PC6->TabStop = false;
			// 
			// PC5
			// 
			this->PC5->BackColor = System::Drawing::Color::Transparent;
			this->PC5->Location = System::Drawing::Point(427, 32);
			this->PC5->Name = L"PC5";
			this->PC5->Size = System::Drawing::Size(45, 80);
			this->PC5->TabIndex = 77;
			this->PC5->TabStop = false;
			// 
			// PC4
			// 
			this->PC4->BackColor = System::Drawing::Color::Transparent;
			this->PC4->Location = System::Drawing::Point(376, 32);
			this->PC4->Name = L"PC4";
			this->PC4->Size = System::Drawing::Size(45, 80);
			this->PC4->TabIndex = 76;
			this->PC4->TabStop = false;
			// 
			// PC3
			// 
			this->PC3->BackColor = System::Drawing::Color::Transparent;
			this->PC3->Location = System::Drawing::Point(325, 32);
			this->PC3->Name = L"PC3";
			this->PC3->Size = System::Drawing::Size(45, 80);
			this->PC3->TabIndex = 75;
			this->PC3->TabStop = false;
			// 
			// PC2
			// 
			this->PC2->BackColor = System::Drawing::Color::Transparent;
			this->PC2->Location = System::Drawing::Point(274, 32);
			this->PC2->Name = L"PC2";
			this->PC2->Size = System::Drawing::Size(45, 80);
			this->PC2->TabIndex = 74;
			this->PC2->TabStop = false;
			// 
			// PC1
			// 
			this->PC1->BackColor = System::Drawing::Color::Transparent;
			this->PC1->Location = System::Drawing::Point(223, 32);
			this->PC1->Name = L"PC1";
			this->PC1->Size = System::Drawing::Size(45, 80);
			this->PC1->TabIndex = 73;
			this->PC1->TabStop = false;
			// 
			// PA10
			// 
			this->PA10->BackColor = System::Drawing::Color::Transparent;
			this->PA10->Location = System::Drawing::Point(682, 118);
			this->PA10->Name = L"PA10";
			this->PA10->Size = System::Drawing::Size(45, 80);
			this->PA10->TabIndex = 72;
			this->PA10->TabStop = false;
			// 
			// PA9
			// 
			this->PA9->BackColor = System::Drawing::Color::Transparent;
			this->PA9->Location = System::Drawing::Point(631, 118);
			this->PA9->Name = L"PA9";
			this->PA9->Size = System::Drawing::Size(45, 80);
			this->PA9->TabIndex = 71;
			this->PA9->TabStop = false;
			// 
			// PA8
			// 
			this->PA8->BackColor = System::Drawing::Color::Transparent;
			this->PA8->Location = System::Drawing::Point(580, 118);
			this->PA8->Name = L"PA8";
			this->PA8->Size = System::Drawing::Size(45, 80);
			this->PA8->TabIndex = 70;
			this->PA8->TabStop = false;
			// 
			// PA7
			// 
			this->PA7->BackColor = System::Drawing::Color::Transparent;
			this->PA7->Location = System::Drawing::Point(529, 118);
			this->PA7->Name = L"PA7";
			this->PA7->Size = System::Drawing::Size(45, 80);
			this->PA7->TabIndex = 69;
			this->PA7->TabStop = false;
			// 
			// PA6
			// 
			this->PA6->BackColor = System::Drawing::Color::Transparent;
			this->PA6->Location = System::Drawing::Point(478, 118);
			this->PA6->Name = L"PA6";
			this->PA6->Size = System::Drawing::Size(45, 80);
			this->PA6->TabIndex = 68;
			this->PA6->TabStop = false;
			// 
			// PA5
			// 
			this->PA5->BackColor = System::Drawing::Color::Transparent;
			this->PA5->Location = System::Drawing::Point(427, 118);
			this->PA5->Name = L"PA5";
			this->PA5->Size = System::Drawing::Size(45, 80);
			this->PA5->TabIndex = 67;
			this->PA5->TabStop = false;
			// 
			// PA4
			// 
			this->PA4->BackColor = System::Drawing::Color::Transparent;
			this->PA4->Location = System::Drawing::Point(376, 118);
			this->PA4->Name = L"PA4";
			this->PA4->Size = System::Drawing::Size(45, 80);
			this->PA4->TabIndex = 66;
			this->PA4->TabStop = false;
			// 
			// PA3
			// 
			this->PA3->BackColor = System::Drawing::Color::Transparent;
			this->PA3->Location = System::Drawing::Point(325, 118);
			this->PA3->Name = L"PA3";
			this->PA3->Size = System::Drawing::Size(45, 80);
			this->PA3->TabIndex = 65;
			this->PA3->TabStop = false;
			// 
			// PA2
			// 
			this->PA2->BackColor = System::Drawing::Color::Transparent;
			this->PA2->Location = System::Drawing::Point(274, 118);
			this->PA2->Name = L"PA2";
			this->PA2->Size = System::Drawing::Size(45, 80);
			this->PA2->TabIndex = 64;
			this->PA2->TabStop = false;
			// 
			// PA1
			// 
			this->PA1->BackColor = System::Drawing::Color::Transparent;
			this->PA1->Location = System::Drawing::Point(223, 118);
			this->PA1->Name = L"PA1";
			this->PA1->Size = System::Drawing::Size(45, 80);
			this->PA1->TabIndex = 63;
			this->PA1->TabStop = false;
			// 
			// PS10
			// 
			this->PS10->BackColor = System::Drawing::Color::Transparent;
			this->PS10->Location = System::Drawing::Point(687, 204);
			this->PS10->Name = L"PS10";
			this->PS10->Size = System::Drawing::Size(45, 80);
			this->PS10->TabIndex = 62;
			this->PS10->TabStop = false;
			// 
			// PS9
			// 
			this->PS9->BackColor = System::Drawing::Color::Transparent;
			this->PS9->Location = System::Drawing::Point(631, 202);
			this->PS9->Name = L"PS9";
			this->PS9->Size = System::Drawing::Size(45, 80);
			this->PS9->TabIndex = 61;
			this->PS9->TabStop = false;
			// 
			// PS8
			// 
			this->PS8->BackColor = System::Drawing::Color::Transparent;
			this->PS8->Location = System::Drawing::Point(580, 202);
			this->PS8->Name = L"PS8";
			this->PS8->Size = System::Drawing::Size(45, 80);
			this->PS8->TabIndex = 60;
			this->PS8->TabStop = false;
			// 
			// PS7
			// 
			this->PS7->BackColor = System::Drawing::Color::Transparent;
			this->PS7->Location = System::Drawing::Point(529, 202);
			this->PS7->Name = L"PS7";
			this->PS7->Size = System::Drawing::Size(45, 80);
			this->PS7->TabIndex = 59;
			this->PS7->TabStop = false;
			// 
			// PS6
			// 
			this->PS6->BackColor = System::Drawing::Color::Transparent;
			this->PS6->Location = System::Drawing::Point(478, 202);
			this->PS6->Name = L"PS6";
			this->PS6->Size = System::Drawing::Size(45, 80);
			this->PS6->TabIndex = 58;
			this->PS6->TabStop = false;
			// 
			// PS5
			// 
			this->PS5->BackColor = System::Drawing::Color::Transparent;
			this->PS5->Location = System::Drawing::Point(427, 202);
			this->PS5->Name = L"PS5";
			this->PS5->Size = System::Drawing::Size(45, 80);
			this->PS5->TabIndex = 57;
			this->PS5->TabStop = false;
			// 
			// PS4
			// 
			this->PS4->BackColor = System::Drawing::Color::Transparent;
			this->PS4->Location = System::Drawing::Point(376, 202);
			this->PS4->Name = L"PS4";
			this->PS4->Size = System::Drawing::Size(45, 80);
			this->PS4->TabIndex = 56;
			this->PS4->TabStop = false;
			// 
			// PS3
			// 
			this->PS3->BackColor = System::Drawing::Color::Transparent;
			this->PS3->Location = System::Drawing::Point(325, 204);
			this->PS3->Name = L"PS3";
			this->PS3->Size = System::Drawing::Size(45, 80);
			this->PS3->TabIndex = 55;
			this->PS3->TabStop = false;
			// 
			// PS2
			// 
			this->PS2->BackColor = System::Drawing::Color::Transparent;
			this->PS2->Location = System::Drawing::Point(274, 204);
			this->PS2->Name = L"PS2";
			this->PS2->Size = System::Drawing::Size(45, 80);
			this->PS2->TabIndex = 54;
			this->PS2->TabStop = false;
			// 
			// PS1
			// 
			this->PS1->BackColor = System::Drawing::Color::Transparent;
			this->PS1->Location = System::Drawing::Point(223, 202);
			this->PS1->Name = L"PS1";
			this->PS1->Size = System::Drawing::Size(45, 80);
			this->PS1->TabIndex = 53;
			this->PS1->TabStop = false;
			// 
			// PASS
			// 
			this->PASS->AutoSize = true;
			this->PASS->BackColor = System::Drawing::Color::Transparent;
			this->PASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PASS->ForeColor = System::Drawing::Color::DarkRed;
			this->PASS->Location = System::Drawing::Point(415, 607);
			this->PASS->Name = L"PASS";
			this->PASS->Size = System::Drawing::Size(0, 18);
			this->PASS->TabIndex = 83;
			// 
			// NewRound
			// 
			this->NewRound->Enabled = false;
			this->NewRound->Location = System::Drawing::Point(122, 677);
			this->NewRound->Name = L"NewRound";
			this->NewRound->Size = System::Drawing::Size(75, 23);
			this->NewRound->TabIndex = 84;
			this->NewRound->Text = L"Nowa runda";
			this->NewRound->UseVisualStyleBackColor = true;
			this->NewRound->Click += gcnew System::EventHandler(this, &Game::NewRound_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(744, 721);
			this->Controls->Add(this->NewRound);
			this->Controls->Add(this->PASS);
			this->Controls->Add(this->PC10);
			this->Controls->Add(this->PC9);
			this->Controls->Add(this->PC8);
			this->Controls->Add(this->PC7);
			this->Controls->Add(this->PC6);
			this->Controls->Add(this->PC5);
			this->Controls->Add(this->PC4);
			this->Controls->Add(this->PC3);
			this->Controls->Add(this->PC2);
			this->Controls->Add(this->PC1);
			this->Controls->Add(this->PA10);
			this->Controls->Add(this->PA9);
			this->Controls->Add(this->PA8);
			this->Controls->Add(this->PA7);
			this->Controls->Add(this->PA6);
			this->Controls->Add(this->PA5);
			this->Controls->Add(this->PA4);
			this->Controls->Add(this->PA3);
			this->Controls->Add(this->PA2);
			this->Controls->Add(this->PA1);
			this->Controls->Add(this->PS10);
			this->Controls->Add(this->PS9);
			this->Controls->Add(this->PS8);
			this->Controls->Add(this->PS7);
			this->Controls->Add(this->PS6);
			this->Controls->Add(this->PS5);
			this->Controls->Add(this->PS4);
			this->Controls->Add(this->PS3);
			this->Controls->Add(this->PS2);
			this->Controls->Add(this->PS1);
			this->Controls->Add(this->WP);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->WM);
			this->Controls->Add(this->TekstM);
			this->Controls->Add(this->S10);
			this->Controls->Add(this->S9);
			this->Controls->Add(this->S8);
			this->Controls->Add(this->S7);
			this->Controls->Add(this->S6);
			this->Controls->Add(this->S5);
			this->Controls->Add(this->S4);
			this->Controls->Add(this->S3);
			this->Controls->Add(this->S2);
			this->Controls->Add(this->S1);
			this->Controls->Add(this->A10);
			this->Controls->Add(this->A9);
			this->Controls->Add(this->A8);
			this->Controls->Add(this->A7);
			this->Controls->Add(this->A6);
			this->Controls->Add(this->A5);
			this->Controls->Add(this->A4);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->C10);
			this->Controls->Add(this->C9);
			this->Controls->Add(this->C8);
			this->Controls->Add(this->C7);
			this->Controls->Add(this->C6);
			this->Controls->Add(this->C5);
			this->Controls->Add(this->C4);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->RandButton);
			this->Controls->Add(this->Hand10);
			this->Controls->Add(this->Hand9);
			this->Controls->Add(this->Hand8);
			this->Controls->Add(this->Hand7);
			this->Controls->Add(this->Hand6);
			this->Controls->Add(this->Hand5);
			this->Controls->Add(this->Hand4);
			this->Controls->Add(this->Hand3);
			this->Controls->Add(this->Hand2);
			this->Controls->Add(this->Hand1);
			this->Controls->Add(this->PC);
			this->Controls->Add(this->PA);
			this->Controls->Add(this->PS);
			this->Controls->Add(this->SW);
			this->Controls->Add(this->AW);
			this->Controls->Add(this->CW);
			this->Controls->Add(this->Wynik);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(760, 760);
			this->MinimumSize = System::Drawing::Size(760, 760);
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hand10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->S10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PC1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UserPass = true;
		AI* wsk = &Gracz;
		if (wsk->pass == false) {
			while (wsk->pass != true) {
				GRA_AI(wsk);
			}
		}
		donepass(wsk);
	}
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   void POINT_AI(AI* Gracz) {
			   this->PA->Text = GetPoint(Gracz->W[1]);
			   this->PC->Text = GetPoint(Gracz->W[2]);
			   this->PS->Text = GetPoint(Gracz->W[0]);
			   SumPointAI(Gracz);
			}

		   void GRA_AI(AI* Gracz) {
			   if (Gracz->W[1] + Gracz->W[0] + Gracz->W[2] > (W[0] + W[2] + W[1]) + 8 && R[1]==0) {
				   Gracz->pass = true;
				   this->PASS->Text = "AI PASS!";
			   }
			   int id = Gracz->Choice();
			   switch (id) {
			   case -1:
				   Gracz->pass = true;
				   this->PASS->Text = "AI PASS!";
				   donepass(Gracz);
				   break;
			   case 0:
				   if (Gracz->RandType[id] == 1) this->PS1->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[0] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA1->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[0] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC1->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[0] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 1:
				   if (Gracz->RandType[id] == 1) this->PS2->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA2->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC2->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 2:
				   if (Gracz->RandType[id] == 1) this->PS3->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA3->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC3->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 3:
				   if (Gracz->RandType[id] == 1) this->PS4->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA4->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC4->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 4:
				   if (Gracz->RandType[id] == 1) this->PS5->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA5->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC5->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 5:
				   if (Gracz->RandType[id] == 1) this->PS6->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA6->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC6->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 6:
				   if (Gracz->RandType[id] == 1) this->PS7->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA7->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC7->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 7:
				   if (Gracz->RandType[id] == 1) this->PS8->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA8->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC8->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 8:
				   if (Gracz->RandType[id] == 1) this->PS9->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA9->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC9->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   case 9:
				   if (Gracz->RandType[id] == 1) this->PS10->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 2) this->PA10->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + Gracz->RandPoint[id] + ".png");
				   if (Gracz->RandType[id] == 3) this->PC10->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + Gracz->RandPoint[id] + ".png");
				   Gracz->Point(id);
				   POINT_AI(Gracz);
				   Gracz->zero(id);
				   donepass(Gracz);
				   break;
			   }





		   }
		   void donepass(AI* Gracz) {
			   if (UserPass == true && Gracz->pass == true)
				   this->NewRound->Enabled = true;
		   }
		   void NewRund(AI* Gracz) {
			   int AI = Gracz->W[1] + Gracz->W[0] + Gracz->W[2];
			   int User = W[0] + W[1] + W[2];
			   if (AI > User) {
				   R[0]++;
			   }
			   else {
				   if (User > AI) {
					   R[1]++;
				   }
				   else {
					   R[0]++;
					   R[1]++;
				   }
			   }
			   this->Wynik->Text = R[0]+"/"+R[1];
			   this->CW->Text = "0";
			   this->AW->Text = "0";
			   this->SW->Text = "0";

			   this->PS->Text = "0";
			   this->PA->Text = "0";
			   this->PC->Text = "0";
			   Gracz->W[0] = 0;
			   Gracz->W[1] = 0;
			   Gracz->W[2] = 0;
			   W[0] = 0;
			   W[1] = 0;
			   W[2] = 0;
			   SumPoint();
			   SumPointAI(Gracz);
			   if (R[0] >= 2 || R[1] >= 2) {
				   this->RandButton->Enabled = true;
				   this->button1->Enabled = false;
				   if (R[0] >= 2) {
					   this->PASS->Text = "AI wygra³o!";
					   if (R[0] == R[1]) this->PASS->Text = "Remis :c";
				   }
				   else {
						this->PASS->Text = "Wygra³eœ!";
				   }
			   }
			   else {
				   UserPass = false;
				   Gracz->pass = false;
				   this->PASS->Text = "";
			   }

		   }




public: System::Void RandButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Enabled = true;
	Gracz.ini();
	this->PASS->Text = "";
	this->Wynik->Text = "0/0";
	W[0] = 0;
	W[1] = 0;
	W[2] = 0;
	R[0] = 0;
	R[1] = 0;
	UserPass = false;
	for (int i = 0; i < 10; i++) {
		RandPoint[i] = std::rand() % 10 + 1;
		RandType[i] = std::rand() % 3 + 1;
	}
	if (RandType[0] == 1) this->Hand1->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[0] + ".png");
	if (RandType[0] == 2) this->Hand1->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[0] + ".png");
	if (RandType[0] == 3) this->Hand1->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[0] + ".png");

	if (RandType[1] == 1) this->Hand2->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[1] + ".png");
	if (RandType[1] == 2) this->Hand2->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[1] + ".png");
	if (RandType[1] == 3) this->Hand2->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[1] + ".png");

	if (RandType[2] == 1) this->Hand3->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[2] + ".png");
	if (RandType[2] == 2) this->Hand3->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[2] + ".png");
	if (RandType[2] == 3) this->Hand3->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[2] + ".png");

	if (RandType[3] == 1) this->Hand4->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[3] + ".png");
	if (RandType[3] == 2) this->Hand4->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[3] + ".png");
	if (RandType[3] == 3) this->Hand4->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[3] + ".png");

	if (RandType[4] == 1) this->Hand5->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[4] + ".png");
	if (RandType[4] == 2) this->Hand5->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[4] + ".png");
	if (RandType[4] == 3) this->Hand5->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[4] + ".png");

	if (RandType[5] == 1) this->Hand6->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[5] + ".png");
	if (RandType[5] == 2) this->Hand6->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[5] + ".png");
	if (RandType[5] == 3) this->Hand6->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[5] + ".png");

	if (RandType[6] == 1) this->Hand7->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[6] + ".png");
	if (RandType[6] == 2) this->Hand7->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[6] + ".png");
	if (RandType[6] == 3) this->Hand7->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[6] + ".png");

	if (RandType[7] == 1) this->Hand8->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[7] + ".png");
	if (RandType[7] == 2) this->Hand8->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[7] + ".png");
	if (RandType[7] == 3) this->Hand8->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[7] + ".png");

	if (RandType[8] == 1) this->Hand9->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[8] + ".png");
	if (RandType[8] == 2) this->Hand9->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[8] + ".png");
	if (RandType[8] == 3) this->Hand9->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[8] + ".png");

	if (RandType[9] == 1) this->Hand10->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + RandPoint[9] + ".png");
	if (RandType[9] == 2) this->Hand10->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + RandPoint[9] + ".png");
	if (RandType[9] == 3) this->Hand10->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + RandPoint[9] + ".png");
	this->RandButton->Enabled = false;
}
	  String^ GetPoint(int id)
	  {
		  String^ Blah = System::Convert::ToString(id);
		  return Blah;
	  }
	  void SumPointAI(AI* Gracz) {
		  String^ Blah = System::Convert::ToString((Gracz->W[0] + Gracz->W[1] + Gracz->W[2]));
		  this->WP->Text = Blah;
	  }
	  void SumPoint() {
		  String^ Blah = System::Convert::ToString((W[0]+W[1]+W[2]));
		  this->WM->Text = Blah;
	  }
private: System::Void Hand1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand1->Image != nullptr) {
		if (RandType[0] == 1) {
			this->S1->Image = this->Hand1->Image; // przemieszczenie karty
			W[0] += RandPoint[0];
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (RandType[0] == 2) {
			this->A1->Image = this->Hand1->Image; // przemieszczenie karty
			W[1] += RandPoint[0];
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (RandType[0] == 3) {
			this->C1->Image = this->Hand1->Image; // przemieszczenie karty
			W[2] += RandPoint[0];
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand1->Image = nullptr; // czyszczenie
	}
}
private: System::Void Hand2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand2->Image != nullptr) {
		if (RandType[1] == 1) {
			this->S2->Image = this->Hand2->Image; // przemieszczenie karty
			W[0] += RandPoint[1];
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (RandType[1] == 2) {
			this->A2->Image = this->Hand2->Image; // przemieszczenie karty
			W[1] += RandPoint[1];
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (RandType[1] == 3) {
			this->C2->Image = this->Hand2->Image; // przemieszczenie karty
			W[2] += RandPoint[1];
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		this->Hand2->Image = nullptr; // czyszczenie
		GRA_AI(&Gracz);
	}
	
}


private: System::Void Hand3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand3->Image != nullptr) {
		int point = RandPoint[2];
		int type = RandType[2];
		if (type == 1) {
			this->S3->Image = this->Hand3->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A3->Image = this->Hand3->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C3->Image = this->Hand3->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		this->Hand3->Image = nullptr; // czyszczenie
		GRA_AI(&Gracz);
	}
}
private: System::Void Hand4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand4->Image != nullptr) {
		int point = RandPoint[3];
		int type = RandType[3];
		if (type == 1) {
			this->S4->Image = this->Hand4->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A4->Image = this->Hand4->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C4->Image = this->Hand4->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand4->Image = nullptr; // czyszczenie
	}
}
private: System::Void Hand5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand5->Image != nullptr) {
		int point = RandPoint[4];
		int type = RandType[4];
		if (type == 1) {
			this->S5->Image = this->Hand5->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A5->Image = this->Hand5->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C5->Image = this->Hand5->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand5->Image = nullptr; // czyszczenie
	}
}
private: System::Void Hand6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand6->Image != nullptr) {
		int point = RandPoint[5];
		int type = RandType[5];
		if (type == 1) {
			this->S6->Image = this->Hand6->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A6->Image = this->Hand6->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C6->Image = this->Hand6->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand6->Image = nullptr; // czyszczenie
	}
}
private: System::Void Hand7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand7->Image != nullptr) {
		int point = RandPoint[6];
		int type = RandType[6];
		if (type == 1) {
			this->S7->Image = this->Hand7->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A7->Image = this->Hand7->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C7->Image = this->Hand7->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand7->Image = nullptr; // czyszczenie
	}
}
private: System::Void Hand8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand8->Image != nullptr) {
		int point = RandPoint[7];
		int type = RandType[7];
		if (type == 1) {
			this->S8->Image = this->Hand8->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A8->Image = this->Hand8->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C8->Image = this->Hand8->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand8->Image = nullptr; // czyszczenie
	}

}
private: System::Void Hand9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand9->Image != nullptr) {
		int point = RandPoint[8];
		int type = RandType[8];
		if (type == 1) {
			this->S9->Image = this->Hand9->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A9->Image = this->Hand9->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C9->Image = this->Hand9->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand9->Image = nullptr; // czyszczenie
	}
}
private: System::Void Hand10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Hand10->Image != nullptr) {
		int point = RandPoint[9];
		int type = RandType[9];
		if (type == 1) {
			this->S10->Image = this->Hand10->Image; // przemieszczenie karty
			W[0] += point;
			this->SW->Text = GetPoint(W[0]);
			SumPoint();
		}
		if (type == 2) {
			this->A10->Image = this->Hand10->Image; // przemieszczenie karty
			W[1] += point;
			this->AW->Text = GetPoint(W[1]);
			SumPoint();
		}
		if (type == 3) {
			this->C10->Image = this->Hand10->Image; // przemieszczenie karty
			W[2] += point;
			this->CW->Text = GetPoint(W[2]);
			SumPoint();
		}
		GRA_AI(&Gracz);
		this->Hand10->Image = nullptr; // czyszczenie
	}
}
	   
private: System::Void NewRound_Click(System::Object^ sender, System::EventArgs^ e) {
	NewRund(&Gracz);
	this->NewRound->Enabled = false;
	/*Przeciwnika*/
	this->PS1->Image = nullptr;
	this->PS2->Image = nullptr;
	this->PS3->Image = nullptr;
	this->PS4->Image = nullptr;
	this->PS5->Image = nullptr;
	this->PS6->Image = nullptr;
	this->PS7->Image = nullptr;
	this->PS8->Image = nullptr;
	this->PS9->Image = nullptr;
	this->PS10->Image = nullptr;
	this->PA1->Image = nullptr;
	this->PA2->Image = nullptr;
	this->PA3->Image = nullptr;
	this->PA4->Image = nullptr;
	this->PA5->Image = nullptr;
	this->PA6->Image = nullptr;
	this->PA7->Image = nullptr;
	this->PA8->Image = nullptr;
	this->PA9->Image = nullptr;
	this->PA10->Image = nullptr;
	this->PC1->Image = nullptr;
	this->PC2->Image = nullptr;
	this->PC3->Image = nullptr;
	this->PC4->Image = nullptr;
	this->PC5->Image = nullptr;
	this->PC6->Image = nullptr;
	this->PC7->Image = nullptr;
	this->PC8->Image = nullptr;
	this->PC9->Image = nullptr;
	this->PC10->Image = nullptr;
	/*Usera*/
	this->S1->Image = nullptr;
	this->S2->Image = nullptr;
	this->S3->Image = nullptr;
	this->S4->Image = nullptr;
	this->S5->Image = nullptr;
	this->S6->Image = nullptr;
	this->S7->Image = nullptr;
	this->S8->Image = nullptr;
	this->S9->Image = nullptr;
	this->S10->Image = nullptr;
	this->A1->Image = nullptr;
	this->A2->Image = nullptr;
	this->A3->Image = nullptr;
	this->A4->Image = nullptr;
	this->A5->Image = nullptr;
	this->A6->Image = nullptr;
	this->A7->Image = nullptr;
	this->A8->Image = nullptr;
	this->A9->Image = nullptr;
	this->A10->Image = nullptr;
	this->C1->Image = nullptr;
	this->C2->Image = nullptr;
	this->C3->Image = nullptr;
	this->C4->Image = nullptr;
	this->C5->Image = nullptr;
	this->C6->Image = nullptr;
	this->C7->Image = nullptr;
	this->C8->Image = nullptr;
	this->C9->Image = nullptr;
	this->C10->Image = nullptr;
}
};
}
