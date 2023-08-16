#pragma once

namespace UNified1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for FinalSetAbsences
	/// </summary>
	public ref class FinalSetAbsences : public System::Windows::Forms::Form
	{
	public:
		FinalSetAbsences(void)
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
		~FinalSetAbsences()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ SetMath;
	protected:
	private: System::Windows::Forms::Button^ SaveAllA;
	private: System::Windows::Forms::Label^ SetMathA;
	private: System::Windows::Forms::Label^ SetEnglishA;
	private: System::Windows::Forms::Label^ SetProgrammingA;
	private: System::Windows::Forms::ListBox^ EnglishAbsence;
	private: System::Windows::Forms::ListBox^ ProgrammingAbsence;
	private: System::Windows::Forms::ListBox^ MathAbsence;
	private: System::Windows::Forms::Button^ SignOutButton;



	protected:


	protected:

















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FinalSetAbsences::typeid));
			this->SetMath = (gcnew System::Windows::Forms::PictureBox());
			this->SaveAllA = (gcnew System::Windows::Forms::Button());
			this->SetMathA = (gcnew System::Windows::Forms::Label());
			this->SetEnglishA = (gcnew System::Windows::Forms::Label());
			this->SetProgrammingA = (gcnew System::Windows::Forms::Label());
			this->EnglishAbsence = (gcnew System::Windows::Forms::ListBox());
			this->ProgrammingAbsence = (gcnew System::Windows::Forms::ListBox());
			this->MathAbsence = (gcnew System::Windows::Forms::ListBox());
			this->SignOutButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SetMath))->BeginInit();
			this->SuspendLayout();
			// 
			// SetMath
			// 
			this->SetMath->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SetMath.BackgroundImage")));
			this->SetMath->Location = System::Drawing::Point(130, -1);
			this->SetMath->Name = L"SetMath";
			this->SetMath->Size = System::Drawing::Size(942, 804);
			this->SetMath->TabIndex = 12;
			this->SetMath->TabStop = false;
			this->SetMath->Click += gcnew System::EventHandler(this, &FinalSetAbsences::SetMath_Click);
			// 
			// SaveAllA
			// 
			this->SaveAllA->BackColor = System::Drawing::Color::LightGray;
			this->SaveAllA->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SaveAllA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->SaveAllA->Location = System::Drawing::Point(509, 527);
			this->SaveAllA->Name = L"SaveAllA";
			this->SaveAllA->Size = System::Drawing::Size(192, 101);
			this->SaveAllA->TabIndex = 20;
			this->SaveAllA->Text = L"Save All";
			this->SaveAllA->UseVisualStyleBackColor = false;
			this->SaveAllA->Click += gcnew System::EventHandler(this, &FinalSetAbsences::SaveAllA_Click);
			// 
			// SetMathA
			// 
			this->SetMathA->AutoSize = true;
			this->SetMathA->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SetMathA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->SetMathA->Location = System::Drawing::Point(266, 115);
			this->SetMathA->Name = L"SetMathA";
			this->SetMathA->Size = System::Drawing::Size(281, 31);
			this->SetMathA->TabIndex = 14;
			this->SetMathA->Text = L"Enter Math Absences:";
			// 
			// SetEnglishA
			// 
			this->SetEnglishA->AutoSize = true;
			this->SetEnglishA->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SetEnglishA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->SetEnglishA->Location = System::Drawing::Point(266, 246);
			this->SetEnglishA->Name = L"SetEnglishA";
			this->SetEnglishA->Size = System::Drawing::Size(310, 31);
			this->SetEnglishA->TabIndex = 15;
			this->SetEnglishA->Text = L"Enter English Absences:";
			// 
			// SetProgrammingA
			// 
			this->SetProgrammingA->AutoSize = true;
			this->SetProgrammingA->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SetProgrammingA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->SetProgrammingA->Location = System::Drawing::Point(266, 373);
			this->SetProgrammingA->Name = L"SetProgrammingA";
			this->SetProgrammingA->Size = System::Drawing::Size(382, 31);
			this->SetProgrammingA->TabIndex = 16;
			this->SetProgrammingA->Text = L"Enter Programming Absences:";
			// 
			// EnglishAbsence
			// 
			this->EnglishAbsence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->EnglishAbsence->FormattingEnabled = true;
			this->EnglishAbsence->ItemHeight = 29;
			this->EnglishAbsence->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->EnglishAbsence->Location = System::Drawing::Point(755, 246);
			this->EnglishAbsence->Name = L"EnglishAbsence";
			this->EnglishAbsence->Size = System::Drawing::Size(120, 33);
			this->EnglishAbsence->TabIndex = 17;
			// 
			// ProgrammingAbsence
			// 
			this->ProgrammingAbsence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->ProgrammingAbsence->FormattingEnabled = true;
			this->ProgrammingAbsence->ItemHeight = 29;
			this->ProgrammingAbsence->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9"
			});
			this->ProgrammingAbsence->Location = System::Drawing::Point(755, 373);
			this->ProgrammingAbsence->Name = L"ProgrammingAbsence";
			this->ProgrammingAbsence->Size = System::Drawing::Size(120, 33);
			this->ProgrammingAbsence->TabIndex = 18;
			// 
			// MathAbsence
			// 
			this->MathAbsence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->MathAbsence->FormattingEnabled = true;
			this->MathAbsence->ItemHeight = 29;
			this->MathAbsence->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9"
			});
			this->MathAbsence->Location = System::Drawing::Point(755, 115);
			this->MathAbsence->Name = L"MathAbsence";
			this->MathAbsence->Size = System::Drawing::Size(120, 33);
			this->MathAbsence->TabIndex = 19;
			// 
			// SignOutButton
			// 
			this->SignOutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->SignOutButton->Location = System::Drawing::Point(908, 568);
			this->SignOutButton->Margin = System::Windows::Forms::Padding(2);
			this->SignOutButton->Name = L"SignOutButton";
			this->SignOutButton->Size = System::Drawing::Size(129, 51);
			this->SignOutButton->TabIndex = 21;
			this->SignOutButton->Text = L"Sign Out";
			this->SignOutButton->UseVisualStyleBackColor = true;
			this->SignOutButton->Click += gcnew System::EventHandler(this, &FinalSetAbsences::SignOutButton_Click);
			// 
			// FinalSetAbsences
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1155, 687);
			this->Controls->Add(this->SignOutButton);
			this->Controls->Add(this->SaveAllA);
			this->Controls->Add(this->MathAbsence);
			this->Controls->Add(this->ProgrammingAbsence);
			this->Controls->Add(this->EnglishAbsence);
			this->Controls->Add(this->SetProgrammingA);
			this->Controls->Add(this->SetEnglishA);
			this->Controls->Add(this->SetMathA);
			this->Controls->Add(this->SetMath);
			this->Name = L"FinalSetAbsences";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FinalSetAbsences";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SetMath))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void SetMath_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SaveAllA_Click(System::Object^ sender, System::EventArgs^ e) {

		if (MathAbsence->SelectedIndex == -1 || EnglishAbsence->SelectedIndex == -1 || ProgrammingAbsence->SelectedIndex == -1) {
			MessageBox::Show("Make sure all fields are filled", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else {
			String^ MAbsence = MathAbsence->Text;
			String^ EAbsence = EnglishAbsence->Text;
			String^ PAbsence = ProgrammingAbsence->Text;
			StreamWriter^ Line = gcnew StreamWriter("studentAbsences.txt", true);
			Line->WriteLine(MAbsence + "," + EAbsence + "," + PAbsence);
			Line->Close();
			MessageBox::Show("Absence haven been saved.", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			SaveAllA->Enabled = false;
		}
	}
	private: System::Void SignOutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MathAbsence->SelectedIndex == -1 || EnglishAbsence->SelectedIndex == -1 || ProgrammingAbsence->SelectedIndex == -1 || (SaveAllA->Enabled == true)) {
			MessageBox::Show("Make sure all fields are filled and saved before signing out", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			Application::Exit();
		}

	}
	};
}
