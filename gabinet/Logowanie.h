#pragma once

namespace gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnZaloguj;
	protected:

	private: System::Windows::Forms::Button^  anulujBtn;
	private: System::Windows::Forms::Label^  lblUser;

	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::TextBox^  txtUzytkownik;
	private: System::Windows::Forms::TextBox^  txtHaslo;

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnZaloguj = (gcnew System::Windows::Forms::Button());
			this->anulujBtn = (gcnew System::Windows::Forms::Button());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtUzytkownik = (gcnew System::Windows::Forms::TextBox());
			this->txtHaslo = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnZaloguj
			// 
			this->btnZaloguj->Location = System::Drawing::Point(86, 264);
			this->btnZaloguj->Name = L"btnZaloguj";
			this->btnZaloguj->Size = System::Drawing::Size(82, 28);
			this->btnZaloguj->TabIndex = 0;
			this->btnZaloguj->Text = L"Zaloguj";
			this->btnZaloguj->UseVisualStyleBackColor = true;
			// 
			// anulujBtn
			// 
			this->anulujBtn->Location = System::Drawing::Point(226, 261);
			this->anulujBtn->Name = L"anulujBtn";
			this->anulujBtn->Size = System::Drawing::Size(94, 31);
			this->anulujBtn->TabIndex = 1;
			this->anulujBtn->Text = L"Anuluj";
			this->anulujBtn->UseVisualStyleBackColor = true;
			this->anulujBtn->Click += gcnew System::EventHandler(this, &Logowanie::anulujBtn_Click);
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(39, 75);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(65, 13);
			this->lblUser->TabIndex = 2;
			this->lblUser->Text = L"U�ytkownik:";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(42, 149);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(36, 13);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Has�o";
			// 
			// txtUzytkownik
			// 
			this->txtUzytkownik->Location = System::Drawing::Point(146, 75);
			this->txtUzytkownik->Name = L"txtUzytkownik";
			this->txtUzytkownik->Size = System::Drawing::Size(140, 20);
			this->txtUzytkownik->TabIndex = 4;
			// 
			// txtHaslo
			// 
			this->txtHaslo->Location = System::Drawing::Point(146, 149);
			this->txtHaslo->Name = L"txtHaslo";
			this->txtHaslo->PasswordChar = '*';
			this->txtHaslo->Size = System::Drawing::Size(140, 20);
			this->txtHaslo->TabIndex = 5;
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 336);
			this->Controls->Add(this->txtHaslo);
			this->Controls->Add(this->txtUzytkownik);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->anulujBtn);
			this->Controls->Add(this->btnZaloguj);
			this->Name = L"Logowanie";
			this->Text = L"Logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void anulujBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	
		this->Close();
	
	}
};
}
