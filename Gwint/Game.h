#pragma once
#include <String>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Gra.h"
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(21, 634);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0/0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 505);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 73);
			this->label2->TabIndex = 2;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(12, 420);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 73);
			this->label3->TabIndex = 3;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(12, 334);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 73);
			this->label4->TabIndex = 4;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(15, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 73);
			this->label5->TabIndex = 5;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(15, 118);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 73);
			this->label6->TabIndex = 6;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(15, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 73);
			this->label7->TabIndex = 7;
			this->label7->Text = L"0";
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
			// 
			// Hand3
			// 
			this->Hand3->BackColor = System::Drawing::Color::Transparent;
			this->Hand3->Location = System::Drawing::Point(325, 634);
			this->Hand3->Name = L"Hand3";
			this->Hand3->Size = System::Drawing::Size(45, 80);
			this->Hand3->TabIndex = 10;
			this->Hand3->TabStop = false;
			// 
			// Hand4
			// 
			this->Hand4->BackColor = System::Drawing::Color::Transparent;
			this->Hand4->Location = System::Drawing::Point(376, 634);
			this->Hand4->Name = L"Hand4";
			this->Hand4->Size = System::Drawing::Size(45, 80);
			this->Hand4->TabIndex = 11;
			this->Hand4->TabStop = false;
			// 
			// Hand5
			// 
			this->Hand5->BackColor = System::Drawing::Color::Transparent;
			this->Hand5->Location = System::Drawing::Point(427, 634);
			this->Hand5->Name = L"Hand5";
			this->Hand5->Size = System::Drawing::Size(45, 80);
			this->Hand5->TabIndex = 12;
			this->Hand5->TabStop = false;
			// 
			// Hand6
			// 
			this->Hand6->BackColor = System::Drawing::Color::Transparent;
			this->Hand6->Location = System::Drawing::Point(478, 634);
			this->Hand6->Name = L"Hand6";
			this->Hand6->Size = System::Drawing::Size(45, 80);
			this->Hand6->TabIndex = 13;
			this->Hand6->TabStop = false;
			// 
			// Hand7
			// 
			this->Hand7->BackColor = System::Drawing::Color::Transparent;
			this->Hand7->Location = System::Drawing::Point(529, 634);
			this->Hand7->Name = L"Hand7";
			this->Hand7->Size = System::Drawing::Size(45, 80);
			this->Hand7->TabIndex = 14;
			this->Hand7->TabStop = false;
			// 
			// Hand8
			// 
			this->Hand8->BackColor = System::Drawing::Color::Transparent;
			this->Hand8->Location = System::Drawing::Point(580, 634);
			this->Hand8->Name = L"Hand8";
			this->Hand8->Size = System::Drawing::Size(45, 80);
			this->Hand8->TabIndex = 15;
			this->Hand8->TabStop = false;
			// 
			// Hand9
			// 
			this->Hand9->BackColor = System::Drawing::Color::Transparent;
			this->Hand9->Location = System::Drawing::Point(631, 634);
			this->Hand9->Name = L"Hand9";
			this->Hand9->Size = System::Drawing::Size(45, 80);
			this->Hand9->TabIndex = 16;
			this->Hand9->TabStop = false;
			// 
			// Hand10
			// 
			this->Hand10->BackColor = System::Drawing::Color::Transparent;
			this->Hand10->Location = System::Drawing::Point(687, 634);
			this->Hand10->Name = L"Hand10";
			this->Hand10->Size = System::Drawing::Size(45, 80);
			this->Hand10->TabIndex = 17;
			this->Hand10->TabStop = false;
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
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(744, 721);
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
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   
public: System::Void RandButton_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL)); // lososwanie kart, todo optymalizacja
	int RandPoint[10];
	int RandType[10];
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
private: System::Void Hand1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->A1->Image = this->Hand1->Image; // przemieszczenie karty
	this->Hand1->Image = nullptr; // czyszczenie
}
};
}
