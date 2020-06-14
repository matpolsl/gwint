#pragma once
#include "Game.h"
namespace Gwint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyMenu
	/// </summary>
	public ref class MyMenu : public System::Windows::Forms::Form
	{
	public:
		MyMenu(void)
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
		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ Graj;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyMenu::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Graj = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Padding = System::Windows::Forms::Padding(250, 30, 0, 0);
			this->pictureBox1->Size = System::Drawing::Size(984, 711);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyMenu::pictureBox1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Graj
			// 
			this->Graj->Location = System::Drawing::Point(700, 230);
			this->Graj->Name = L"Graj";
			this->Graj->Size = System::Drawing::Size(200, 50);
			this->Graj->TabIndex = 1;
			this->Graj->Text = L"Graj Teraz!";
			this->Graj->UseVisualStyleBackColor = true;
			this->Graj->Click += gcnew System::EventHandler(this, &MyMenu::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(700, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Instrukcja";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(700, 369);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Zakoñcz program";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 711);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Graj);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(1000, 750);
			this->MinimumSize = System::Drawing::Size(1000, 750);
			this->Name = L"MyMenu";
			this->Text = L"Gra: Gwint";
			this->Load += gcnew System::EventHandler(this, &MyMenu::MyMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ Gra = gcnew Game();
		Gra->Show();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
