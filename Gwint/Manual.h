#pragma once

namespace Gwint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Manual
	/// </summary>
	public ref class Manual : public System::Windows::Forms::Form
	{
	public:
		Manual(void)
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
		~Manual()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Next;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Back;
	protected:

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Manual::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(740, 720);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(757, 647);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(75, 23);
			this->Next->TabIndex = 1;
			this->Next->Text = L"Dalej";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &Manual::Next_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1125, 571);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Back
			// 
			this->Back->Enabled = false;
			this->Back->Location = System::Drawing::Point(757, 618);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(75, 23);
			this->Back->TabIndex = 3;
			this->Back->Text = L"Wstecz";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Manual::Back_Click);
			// 
			// Manual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(854, 716);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(870, 755);
			this->MinimumSize = System::Drawing::Size(870, 755);
			this->Name = L"Manual";
			this->Text = L"Manual";
			this->Load += gcnew System::EventHandler(this, &Manual::Manual_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		int imgm = 1;
#pragma endregion
	private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
		imgm++;
		this->pictureBox1->Image = System::Drawing::Image::FromFile("img\\manual\\p" + imgm + ".PNG");
		if (imgm == 9) this->Next->Enabled = false; else {
			this->Next->Enabled = true;
			this->Back->Enabled = true;
		}
	}
private: System::Void Manual_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
	imgm--;
	this->pictureBox1->Image = System::Drawing::Image::FromFile("img\\manual\\p" + imgm + ".PNG");
	if (imgm == 1) this->Back->Enabled = false; else {
		this->Next->Enabled = true;
		this->Back->Enabled = true;
	}
}
};
}
