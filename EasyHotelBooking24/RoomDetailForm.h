#pragma once

namespace Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r RoomDetailForm
	/// </summary>
	public ref class RoomDetailForm : public System::Windows::Forms::Form
	{
	public:
		RoomDetailForm(void)
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
		~RoomDetailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ PictureBox;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ DetailsTextBox;
	private: System::Windows::Forms::Button^ BookBtn;





	private: System::Windows::Forms::Button^ LeftBtn;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ RightBtn;

	private: System::Windows::Forms::CheckedListBox^ FeaturesListBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ BedNumber;

	private: System::Windows::Forms::TextBox^ RoomName;
	private: System::Windows::Forms::Label^ RoomNumber;




	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DetailsTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->BookBtn = (gcnew System::Windows::Forms::Button());
			this->LeftBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RightBtn = (gcnew System::Windows::Forms::Button());
			this->FeaturesListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BedNumber = (gcnew System::Windows::Forms::Label());
			this->RoomName = (gcnew System::Windows::Forms::TextBox());
			this->RoomNumber = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// PictureBox
			// 
			this->PictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox->ImageLocation = L"https://upload.wikimedia.org/wikipedia/de/2/2f/D%C3%B6nerbude.JPG";
			this->PictureBox->Location = System::Drawing::Point(18, 16);
			this->PictureBox->Margin = System::Windows::Forms::Padding(0);
			this->PictureBox->Name = L"PictureBox";
			this->PictureBox->Size = System::Drawing::Size(297, 193);
			this->PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox->TabIndex = 0;
			this->PictureBox->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(5);
			this->label2->Size = System::Drawing::Size(123, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Number of Beds: ";
			// 
			// DetailsTextBox
			// 
			this->DetailsTextBox->Location = System::Drawing::Point(12, 235);
			this->DetailsTextBox->Name = L"DetailsTextBox";
			this->DetailsTextBox->ReadOnly = true;
			this->DetailsTextBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->DetailsTextBox->Size = System::Drawing::Size(429, 96);
			this->DetailsTextBox->TabIndex = 5;
			this->DetailsTextBox->TabStop = false;
			this->DetailsTextBox->Text = L"Nice View";
			// 
			// BookBtn
			// 
			this->BookBtn->BackColor = System::Drawing::Color::Chartreuse;
			this->BookBtn->Cursor = System::Windows::Forms::Cursors::Cross;
			this->BookBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->BookBtn->FlatAppearance->BorderSize = 10;
			this->BookBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->BookBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->BookBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BookBtn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookBtn->Location = System::Drawing::Point(447, 235);
			this->BookBtn->Name = L"BookBtn";
			this->BookBtn->Size = System::Drawing::Size(143, 96);
			this->BookBtn->TabIndex = 7;
			this->BookBtn->Text = L"247$ /night\r\nbook now!";
			this->BookBtn->UseVisualStyleBackColor = false;
			// 
			// LeftBtn
			// 
			this->LeftBtn->BackColor = System::Drawing::Color::Transparent;
			this->LeftBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->LeftBtn->FlatAppearance->BorderSize = 0;
			this->LeftBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->LeftBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->LeftBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LeftBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeftBtn->Location = System::Drawing::Point(3, 16);
			this->LeftBtn->Margin = System::Windows::Forms::Padding(0);
			this->LeftBtn->Name = L"LeftBtn";
			this->LeftBtn->Size = System::Drawing::Size(15, 193);
			this->LeftBtn->TabIndex = 9;
			this->LeftBtn->Text = L"<\r\n";
			this->LeftBtn->UseVisualStyleBackColor = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->RightBtn);
			this->groupBox1->Controls->Add(this->PictureBox);
			this->groupBox1->Controls->Add(this->LeftBtn);
			this->groupBox1->Location = System::Drawing::Point(258, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 217);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Photo Galery";
			// 
			// RightBtn
			// 
			this->RightBtn->BackColor = System::Drawing::Color::Transparent;
			this->RightBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->RightBtn->FlatAppearance->BorderSize = 0;
			this->RightBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->RightBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->RightBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RightBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RightBtn->Location = System::Drawing::Point(315, 16);
			this->RightBtn->Margin = System::Windows::Forms::Padding(0);
			this->RightBtn->Name = L"RightBtn";
			this->RightBtn->Size = System::Drawing::Size(15, 193);
			this->RightBtn->TabIndex = 10;
			this->RightBtn->Text = L">\r\n";
			this->RightBtn->UseVisualStyleBackColor = false;
			// 
			// FeaturesListBox
			// 
			this->FeaturesListBox->FormattingEnabled = true;
			this->FeaturesListBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Falt Screen TV", L"Lounge Area", L"Safe",
					L"Seperated Rooms", L"Working Desk"
			});
			this->FeaturesListBox->Location = System::Drawing::Point(12, 120);
			this->FeaturesListBox->Name = L"FeaturesListBox";
			this->FeaturesListBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->FeaturesListBox->Size = System::Drawing::Size(240, 109);
			this->FeaturesListBox->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Features:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 45);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(5);
			this->label7->Size = System::Drawing::Size(114, 26);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Room number: ";
			// 
			// BedNumber
			// 
			this->BedNumber->AutoSize = true;
			this->BedNumber->Location = System::Drawing::Point(141, 71);
			this->BedNumber->MinimumSize = System::Drawing::Size(100, 26);
			this->BedNumber->Name = L"BedNumber";
			this->BedNumber->Size = System::Drawing::Size(100, 26);
			this->BedNumber->TabIndex = 18;
			this->BedNumber->Text = L"154";
			this->BedNumber->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// RoomName
			// 
			this->RoomName->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->RoomName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RoomName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomName->Location = System::Drawing::Point(12, 19);
			this->RoomName->MinimumSize = System::Drawing::Size(240, 20);
			this->RoomName->Name = L"RoomName";
			this->RoomName->ReadOnly = true;
			this->RoomName->Size = System::Drawing::Size(240, 23);
			this->RoomName->TabIndex = 19;
			this->RoomName->Text = L"President Suite";
			this->RoomName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RoomNumber
			// 
			this->RoomNumber->AutoSize = true;
			this->RoomNumber->Location = System::Drawing::Point(141, 45);
			this->RoomNumber->MinimumSize = System::Drawing::Size(100, 26);
			this->RoomNumber->Name = L"RoomNumber";
			this->RoomNumber->Size = System::Drawing::Size(100, 26);
			this->RoomNumber->TabIndex = 20;
			this->RoomNumber->Text = L"154";
			this->RoomNumber->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// RoomDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 343);
			this->Controls->Add(this->RoomNumber);
			this->Controls->Add(this->RoomName);
			this->Controls->Add(this->BedNumber);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->FeaturesListBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->BookBtn);
			this->Controls->Add(this->DetailsTextBox);
			this->Controls->Add(this->label2);
			this->MinimumSize = System::Drawing::Size(618, 382);
			this->Name = L"RoomDetailForm";
			this->Text = L"Room Detail Showcase";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}