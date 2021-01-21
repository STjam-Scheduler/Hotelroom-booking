#pragma once

public ref class element : public System::Windows::Forms::Form {
private:
	int y;
public:

	element(void)
	{
		InitializeComponent();
		//
		//TODO: Konstruktorcode hier hinzufügen.
		//
	}

	element(int py) {
		y = py;
	}
	~element()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::Button^ button;
private: System::Windows::Forms::TextBox^ textBox1;

protected:

private:
	/// <summary>
	/// Erforderliche Designervariable.
	/// </summary>
	System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Erforderliche Methode für die Designerunterstützung.
	/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
	/// </summary>
	void InitializeComponent(void)
	{
		this->button = (gcnew System::Windows::Forms::Button());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->SuspendLayout();
		// 
		// button
		// 
		this->button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->button->Location = System::Drawing::Point(68, 90);
		this->button->Name = L"button";
		this->button->Size = System::Drawing::Size(487, 181);
		this->button->TabIndex = 0;
		this->button->Text = L"Room";
		this->button->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button->UseVisualStyleBackColor = true;
		this->button->Click += gcnew System::EventHandler(this, &element::room);
		// 
		// textBox1
		// 
		this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->textBox1->Location = System::Drawing::Point(322, 104);
		this->textBox1->Multiline = true;
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(210, 150);
		this->textBox1->TabIndex = 1;
		this->textBox1->Text = L"\r\n";
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(804, 433);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->button);
		this->Name = L"Form1";
		this->Text = L"Form1";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
private: System::Void room(System::Object^ sender, System::EventArgs^ e) {
}


};


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
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(292, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(374, 36);
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
			this->checkedListBox1->Location = System::Drawing::Point(53, 54);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(219, 480);
			this->checkedListBox1->TabIndex = 3;
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->search->Location = System::Drawing::Point(184, 540);
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
			this->panel1->Location = System::Drawing::Point(370, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(540, 517);
			this->panel1->TabIndex = 5;
			
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 584);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->search);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search_click(System::Object^ sender, System::EventArgs^ e) {
		element^ elm = gcnew element();
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


};
}
