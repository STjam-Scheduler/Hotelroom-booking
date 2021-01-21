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
	/// Zusammenfassung für Form1
	/// </summary>



	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
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
			this->textBox1->Location = System::Drawing::Point(219, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(282, 30);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"EasyHotelBooking24";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"one bed room", L"two bed room", L"three bed room",
					L"____________________", L"suite:", L"", L"", L"____________________", L"extra:", L"TV", L"pool", L"kitchen", L"safe", L"..."
			});
			this->checkedListBox1->Location = System::Drawing::Point(40, 44);
			this->checkedListBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(165, 379);
			this->checkedListBox1->TabIndex = 3;
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->search->Location = System::Drawing::Point(138, 439);
			this->search->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->search->Name = L"search";
			this->search->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->search->Size = System::Drawing::Size(66, 26);
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
			this->panel1->Location = System::Drawing::Point(285, 44);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(442, 396);
			this->panel1->TabIndex = 5;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(249, 294);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(192, 79);
			this->richTextBox4->TabIndex = 7;
			this->richTextBox4->Text = L"Features: All time fresh air\n               Beautiflul view of the city\n         "
				L"      Waking service\n               Adventure room\n               Just 420$ per "
				L"night!";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(249, 18);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(192, 79);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"Features: 154 beds\n                    Flat Screen TV\n                    Lounge "
				L"Area\n                    Smells like old fries\n                    Just 247$ per"
				L" night!";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(249, 110);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(192, 79);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"Features: 1 bed\n                    Flat Screen TV\n                    Security C"
				L"ams\n                    + = \"Special friend\"\n                    Just 69$ per ni"
				L"ght!\n";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(249, 202);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(192, 79);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"Features:  4 Pullup sofas\n                    many old balls\n                    "
				L"varity of clothes\n                    observation of \n                    the DE"
				L"LUXE+\n                    free";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(0, 289);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(442, 87);
			this->button4->TabIndex = 3;
			this->button4->Text = L"IT-Studentenbude";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::Carton_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 197);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(442, 87);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Valve Headquarters";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::facM_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 106);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(442, 87);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Tokio Experience";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::DeluxeS_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 14);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(442, 87);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Presidents Suite";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::psuite_click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 474);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->search);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search_click(System::Object^ sender, System::EventArgs^ e) {
		
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
};
}


