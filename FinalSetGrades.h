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
	/// Summary for FinalSetGrades
	/// </summary>
	public ref class FinalSetGrades : public System::Windows::Forms::Form
	{
	public:
		FinalSetGrades(void)
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
		~FinalSetGrades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ SetMath;
	protected:
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::ListBox^ MathGrade;
	private: System::Windows::Forms::Button^ SaveAllG;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ BackSetFinalG;
	private: System::Windows::Forms::ListBox^ EnglishGrade;
	private: System::Windows::Forms::Label^ SetEnglish;
	private: System::Windows::Forms::Label^ SetProgramming;
	private: System::Windows::Forms::ListBox^ ProgrammingGrade;
	private: System::Windows::Forms::Button^ SignOutButton;








	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FinalSetGrades::typeid));
			this->SetMath = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MathGrade = (gcnew System::Windows::Forms::ListBox());
			this->SaveAllG = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->BackSetFinalG = (gcnew System::Windows::Forms::Button());
			this->EnglishGrade = (gcnew System::Windows::Forms::ListBox());
			this->SetEnglish = (gcnew System::Windows::Forms::Label());
			this->SetProgramming = (gcnew System::Windows::Forms::Label());
			this->ProgrammingGrade = (gcnew System::Windows::Forms::ListBox());
			this->SignOutButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SetMath))->BeginInit();
			this->SuspendLayout();
			// 
			// SetMath
			// 
			this->SetMath->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SetMath.Image")));
			this->SetMath->Location = System::Drawing::Point(135, 1);
			this->SetMath->Name = L"SetMath";
			this->SetMath->Size = System::Drawing::Size(942, 804);
			this->SetMath->TabIndex = 0;
			this->SetMath->TabStop = false;
			this->SetMath->Click += gcnew System::EventHandler(this, &FinalSetGrades::SetMath_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label1->Location = System::Drawing::Point(328, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Math Grade:";
			this->label1->Click += gcnew System::EventHandler(this, &FinalSetGrades::label1_Click);
			// 
			// MathGrade
			// 
			this->MathGrade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->MathGrade->FormattingEnabled = true;
			this->MathGrade->ItemHeight = 29;
			this->MathGrade->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"N/A", L"A", L"B", L"C", L"D", L"F" });
			this->MathGrade->Location = System::Drawing::Point(724, 71);
			this->MathGrade->Name = L"MathGrade";
			this->MathGrade->Size = System::Drawing::Size(120, 33);
			this->MathGrade->TabIndex = 7;
			// 
			// SaveAllG
			// 
			this->SaveAllG->BackColor = System::Drawing::Color::LightGray;
			this->SaveAllG->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SaveAllG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->SaveAllG->Location = System::Drawing::Point(497, 573);
			this->SaveAllG->Name = L"SaveAllG";
			this->SaveAllG->Size = System::Drawing::Size(192, 101);
			this->SaveAllG->TabIndex = 10;
			this->SaveAllG->Text = L"Save All";
			this->SaveAllG->UseVisualStyleBackColor = false;
			this->SaveAllG->Click += gcnew System::EventHandler(this, &FinalSetGrades::SaveAllG_Click);
			// 
			// Exit
			// 
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->Exit->Location = System::Drawing::Point(922, 699);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(129, 52);
			this->Exit->TabIndex = 11;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			// 
			// BackSetFinalG
			// 
			this->BackSetFinalG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->BackSetFinalG->Location = System::Drawing::Point(177, 699);
			this->BackSetFinalG->Name = L"BackSetFinalG";
			this->BackSetFinalG->Size = System::Drawing::Size(126, 52);
			this->BackSetFinalG->TabIndex = 12;
			this->BackSetFinalG->Text = L"Back";
			this->BackSetFinalG->UseVisualStyleBackColor = true;
			// 
			// EnglishGrade
			// 
			this->EnglishGrade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->EnglishGrade->FormattingEnabled = true;
			this->EnglishGrade->ItemHeight = 29;
			this->EnglishGrade->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"N/A", L"A", L"B", L"C", L"D", L"F" });
			this->EnglishGrade->Location = System::Drawing::Point(724, 245);
			this->EnglishGrade->Name = L"EnglishGrade";
			this->EnglishGrade->Size = System::Drawing::Size(120, 33);
			this->EnglishGrade->TabIndex = 5;
			// 
			// SetEnglish
			// 
			this->SetEnglish->AutoSize = true;
			this->SetEnglish->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SetEnglish->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->SetEnglish->Location = System::Drawing::Point(328, 245);
			this->SetEnglish->Name = L"SetEnglish";
			this->SetEnglish->Size = System::Drawing::Size(265, 31);
			this->SetEnglish->TabIndex = 2;
			this->SetEnglish->Text = L"Enter English Grade:";
			this->SetEnglish->Click += gcnew System::EventHandler(this, &FinalSetGrades::SetEnglish_Click_1);
			// 
			// SetProgramming
			// 
			this->SetProgramming->AutoSize = true;
			this->SetProgramming->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SetProgramming->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->SetProgramming->Location = System::Drawing::Point(328, 410);
			this->SetProgramming->Name = L"SetProgramming";
			this->SetProgramming->Size = System::Drawing::Size(337, 31);
			this->SetProgramming->TabIndex = 3;
			this->SetProgramming->Text = L"Enter Programming Grade:";
			// 
			// ProgrammingGrade
			// 
			this->ProgrammingGrade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->ProgrammingGrade->FormattingEnabled = true;
			this->ProgrammingGrade->ItemHeight = 29;
			this->ProgrammingGrade->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"N/A", L"A", L"B", L"C", L"D", L"F" });
			this->ProgrammingGrade->Location = System::Drawing::Point(724, 410);
			this->ProgrammingGrade->Name = L"ProgrammingGrade";
			this->ProgrammingGrade->Size = System::Drawing::Size(120, 33);
			this->ProgrammingGrade->TabIndex = 6;
			// 
			// SignOutButton
			// 
			this->SignOutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->SignOutButton->Location = System::Drawing::Point(912, 623);
			this->SignOutButton->Margin = System::Windows::Forms::Padding(2);
			this->SignOutButton->Name = L"SignOutButton";
			this->SignOutButton->Size = System::Drawing::Size(129, 51);
			this->SignOutButton->TabIndex = 22;
			this->SignOutButton->Text = L"Sign Out";
			this->SignOutButton->UseVisualStyleBackColor = true;
			this->SignOutButton->Click += gcnew System::EventHandler(this, &FinalSetGrades::SignOutButton_Click);
			// 
			// FinalSetGrades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1155, 687);
			this->Controls->Add(this->SignOutButton);
			this->Controls->Add(this->BackSetFinalG);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->SaveAllG);
			this->Controls->Add(this->MathGrade);
			this->Controls->Add(this->ProgrammingGrade);
			this->Controls->Add(this->EnglishGrade);
			this->Controls->Add(this->SetProgramming);
			this->Controls->Add(this->SetEnglish);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SetMath);
			this->Name = L"FinalSetGrades";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FinalSetGrades";
			this->Load += gcnew System::EventHandler(this, &FinalSetGrades::FinalSetGrades_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SetMath))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FinalSetGrades_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void SaveAllG_Click(System::Object^ sender, System::EventArgs^ e) {


		if (MathGrade->SelectedIndex <= 0 || EnglishGrade->SelectedIndex <= 0 || ProgrammingGrade->SelectedIndex <= 0) {
			MessageBox::Show("Make sure all fields are filled", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else {
			String^ MGrade = MathGrade->Text;
			String^ EGrade = EnglishGrade->Text;
			String^ PGrade = ProgrammingGrade->Text;
			StreamWriter^ line = gcnew StreamWriter("studentGrades.txt", true);
			line->WriteLine(MGrade + "," + EGrade + "," + PGrade);
			line->Close();
			MessageBox::Show("Grades haven been saved.", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			SaveAllG->Enabled = false;

		}



	}
	private: System::Void SetMath_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void SetEnglish_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SetEnglish_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SignOutButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (MathGrade->SelectedIndex <= 0 || EnglishGrade->SelectedIndex <= 0 || ProgrammingGrade->SelectedIndex <= 0 || (SaveAllG->Enabled == true)) {
			MessageBox::Show("Make sure all fields are filled and saved before signing out", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			Application::Exit();
		}

	}
	};
}
