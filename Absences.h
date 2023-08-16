#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include<vector>
#include <msclr/marshal_cppstd.h>
namespace UNified1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Absences
	/// </summary>
	public ref class Absences : public System::Windows::Forms::Form
	{
		String^ ID;
	public:
		Absences(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Absences(String^ x)
		{
			InitializeComponent();
			ID = x;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Absences()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Absences::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(911, 543);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Absences::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(16, 112);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Your Math absence is:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Menu;
			this->label2->Location = System::Drawing::Point(16, 527);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(412, 31);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Your Programming absence is:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Menu;
			this->label3->Location = System::Drawing::Point(16, 299);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(351, 31);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Your English absences is:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(340, 112);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 31);
			this->label6->TabIndex = 11;
			this->label6->Text = L"  N/A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(395, 299);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 31);
			this->label4->TabIndex = 12;
			this->label4->Text = L" N/A";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(451, 527);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 31);
			this->label5->TabIndex = 13;
			this->label5->Text = L" N/A";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Absences
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1020, 593);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Absences";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Absences";
			this->Load += gcnew System::EventHandler(this, &Absences::Absences_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//the function that gets the line from the file
		std::vector<std::string>parsecommadelimitedstring2(std::string Line)
		{
			std::vector<std::string>Absence;
			std::stringstream s_stream(Line);
			while (s_stream.good())
			{
				std::string substr;
				getline(s_stream, substr, ',');
				Absence.push_back(substr);
			}
			return Absence;
		}
		//Exit Buttn
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
		   //Getting the Absences from the File
	private: System::Void Absences_Load(System::Object^ sender, System::EventArgs^ e) {
		std::fstream absence1;
		absence1.open("studentAbsences.txt", std::ios::in);

		if (absence1.is_open()) {
			std::string line;
			String^ id = ID;

			while (getline(absence1, line)) {
				std::vector<std::string>parsedLine = parsecommadelimitedstring2(line);
				const char* s_ID = parsedLine.at(0).c_str();
				System::String^ ID_edit1 = ID;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit1);

				if (std::strcmp(s_ID, ID_string) == 0) {
					const char* editabsence = parsedLine.at(1).c_str();
					std::string str = editabsence;
					String^ str2 = gcnew String(str.c_str());
					this->label6->Text = str2;/*(System::Convert::ToString(editabsence));*/

					//Condition to show a Warning if the alloted absence is excedded
					if (int z = int::Parse(str2) > 4) {
						MessageBox::Show("You've exceded the allowed absences in your math course", "Exceded the allowed absences", MessageBoxButtons::OK, MessageBoxIcon::Warning);

					}
				}
			};
		}
		std::fstream absence;
		absence.open("studentAbsences.txt", std::ios::in);

		if (absence.is_open()) {
			std::string line;
			String^ id = ID;

			while (getline(absence, line)) {
				std::vector<std::string>parsedLine = parsecommadelimitedstring2(line);
				const char* s_ID = parsedLine.at(0).c_str();
				System::String^ ID_edit1 = ID;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit1);

				if (std::strcmp(s_ID, ID_string) == 0) {
					const char* editabsence = parsedLine.at(2).c_str();
					std::string str = editabsence;
					String^ str2 = gcnew String(str.c_str());
					this->label4->Text = str2;/*(System::Convert::ToString(editabsence));*/
					//Condition to show a Warning if the alloted absence is excedded

					if (int z = int::Parse(str2) > 4) {
						MessageBox::Show("You've exceded the allowed absences in your English course", "Exceded the allowed absences", MessageBoxButtons::OK, MessageBoxIcon::Warning);

					}
				}
			};
		}
		std::fstream absence2;
		absence2.open("studentAbsences.txt", std::ios::in);

		if (absence2.is_open()) {
			std::string line;
			String^ id = ID;

			while (getline(absence2, line)) {
				std::vector<std::string>parsedLine = parsecommadelimitedstring2(line);
				const char* s_ID = parsedLine.at(0).c_str();
				System::String^ ID_edit1 = ID;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit1);

				if (std::strcmp(s_ID, ID_string) == 0) {
					const char* editabsence = parsedLine.at(3).c_str();
					std::string str = editabsence;
					String^ str2 = gcnew String(str.c_str());
					this->label5->Text = str2;
					//Condition to show a Warning if the alloted absence is excedded
					if (int z = int::Parse(str2) > 4) {
						MessageBox::Show("You've exceded the allowed absences in your Programming course", "Exceded the allowed absences", MessageBoxButtons::OK, MessageBoxIcon::Warning);

					}
				}
			};
		}
	}
	};
}