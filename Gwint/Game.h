#pragma once
#include <String>
#include <iostream>
#include <random>



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
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(744, 721);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hand1->Image = System::Drawing::Image::FromFile("img\\Card\\sword" + 1 + ".png");
		this->Hand2->Image = System::Drawing::Image::FromFile("img\\Card\\arrow" + 2 + ".png");
		this->Hand3->Image = System::Drawing::Image::FromFile("img\\Card\\catapult" + 3 + ".png");
		
	}
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
