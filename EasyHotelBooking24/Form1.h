#pragma once
#include "RoomsList.h"
#include "OneBedRoom.h"

namespace Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>



	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;





	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(292, 12);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(375, 36);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"EasyHotelBooking24";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"one bed room", L"two bed room", L"three bed room",
					L"suite", L"", L"TV", L"Pool", L"Kitchen", L"Safe", L"Lounge Area ", L"Under 1000$/night", L"Under 500$/night", L"Under 100$/night"
			});
			this->checkedListBox1->Location = System::Drawing::Point(53, 54);
			this->checkedListBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(219, 463);
			this->checkedListBox1->TabIndex = 3;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::checkedListBox1_SelectedIndexChanged);
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->search->Location = System::Drawing::Point(184, 540);
			this->search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search->Name = L"search";
			this->search->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->search->Size = System::Drawing::Size(88, 32);
			this->search->TabIndex = 4;
			this->search->Text = L"search";
			this->search->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &Form1::search_click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->panel1->Controls->Add(this->richTextBox4);
			this->panel1->Controls->Add(this->richTextBox3);
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(380, 54);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(589, 487);
			this->panel1->TabIndex = 5;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(332, 362);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(255, 96);
			this->richTextBox4->TabIndex = 7;
			this->richTextBox4->Text = L"Features: 3 beds\n               Flatscreen TV\n               Working desk\n       "
				L"        Sleeping couch\n               Just 300$ per night!";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(332, 22);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(255, 96);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"Features: 2 beds\n                    Flat Screen TV\n                    Lounge Ar"
				L"ea\n                    Safe \n                    Seperated Rooms\n               "
				L"    Just 1500$ per night!";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(332, 135);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(255, 96);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"Features: 1 bed\n                    Flat Screen TV\n                    Lounge Are"
				L"a\n                    Safe\n                    Seperated Rooms\n                 "
				L"   Just 120$ per night!\n";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(332, 247);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(255, 96);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"Features:  2 beds\n                    Flat Screen TV\n                    Lounge A"
				L"rea \n                    Working Desk\n                    Just 200$ per night!";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(0, 356);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(589, 107);
			this->button4->TabIndex = 3;
			this->button4->Text = L"IT-Studentenbude";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::Carton_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 242);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(589, 107);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Valve Headquarters";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::facM_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 130);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(589, 107);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Tokio Experience";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::DeluxeS_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->ImageKey = L"(none)";
			this->button1->Location = System::Drawing::Point(0, 17);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(589, 107);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Presidents Suite";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::psuite_click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 583);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->search);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search_click(System::Object^ sender, System::EventArgs^ e) {
		if (checkedListBox1->CheckedItems->Contains("one bed room")) {
			this->button1->Visible = false;
			this->button2->Visible = true;
			this->button3->Visible = false;
			this->button4->Visible = false;
			this->richTextBox3->Visible = false;
			this->richTextBox2->Visible = true;
			this->richTextBox1->Visible = false;
			this->richTextBox4->Visible = false;

		}
		if (checkedListBox1->CheckedItems->Contains("two bed room")) {
			this->button1->Visible = true;
			this->button2->Visible = false;
			this->button3->Visible = true;
			this->button4->Visible = false;
			this->richTextBox3->Visible = true;
			this->richTextBox2->Visible = false;
			this->richTextBox1->Visible = true;
			this->richTextBox4->Visible = false;

		}
		if (checkedListBox1->CheckedItems->Contains("three bed room")) {
			this->button1->Visible = false;
			this->button2->Visible = false;
			this->button3->Visible = false;
			this->button4->Visible = true;
			this->richTextBox3->Visible = false;
			this->richTextBox2->Visible = false;
			this->richTextBox1->Visible = false;
			this->richTextBox4->Visible = true;

		}

	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void psuite_click(System::Object^ sender, System::EventArgs^ e) {
	Window::RoomDetailForm^ frm = gcnew Window::RoomDetailForm;
	RoomsList rList;
	frm->activeRoom = rList.rooms.at(0);
	frm->Location = this->Location;
	frm->Show();
}
private: System::Void DeluxeS_Click(System::Object^ sender, System::EventArgs^ e) {
	Window::RoomDetailForm^ frm = gcnew Window::RoomDetailForm;
	RoomsList rList;
	frm->activeRoom = rList.rooms.at(1);
	frm->Location = this->Location;
	frm->Show();
}
private: System::Void facM_Click(System::Object^ sender, System::EventArgs^ e) {
	Window::RoomDetailForm^ frm = gcnew Window::RoomDetailForm;
	RoomsList rList;
	frm->activeRoom = rList.rooms.at(2);
	frm->Location = this->Location;
	frm->Show();
}
private: System::Void Carton_Click(System::Object^ sender, System::EventArgs^ e) {
	Window::RoomDetailForm^ frm = gcnew Window::RoomDetailForm;
	RoomsList rList;
	frm->activeRoom = rList.rooms.at(3);
	frm->Location = this->Location;
	frm->Show();
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}


