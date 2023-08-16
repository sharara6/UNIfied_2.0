#pragma once
#include "Finances.h"
#include <CString>
#include <cmath>
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
	using namespace System::IO;

	/// <summary>
	/// Summary for Grades
	/// </summary>
	public ref class Grades : public System::Windows::Forms::Form
	{

		String^ ID;
	private: System::Windows::Forms::Button^ button2;
	public:


		//public:  System::Windows::Forms::Label^ label9;



	public:
		int v4;
		Grades(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Grades(String^ x)
		{
			InitializeComponent();
			ID = x;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Grades()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ GPA;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Grades::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->GPA = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(917, 543);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Grades::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Menu;
			this->label1->Location = System::Drawing::Point(40, 44);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Your Math grade is:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Menu;
			this->label2->Location = System::Drawing::Point(40, 543);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Your GPA is:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Menu;
			this->label3->Location = System::Drawing::Point(40, 208);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(300, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Your English grade is:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Menu;
			this->label4->Location = System::Drawing::Point(40, 377);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(376, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Your Programming grade is:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Menu;
			this->label5->Location = System::Drawing::Point(324, 44);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 31);
			this->label5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Menu;
			this->label6->Location = System::Drawing::Point(324, 44);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 31);
			this->label6->TabIndex = 10;
			this->label6->Text = L"N/A";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Menu;
			this->label7->Location = System::Drawing::Point(360, 208);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 31);
			this->label7->TabIndex = 11;
			this->label7->Text = L"N/A";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Menu;
			this->label8->Location = System::Drawing::Point(443, 377);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 31);
			this->label8->TabIndex = 12;
			this->label8->Text = L"N/A";
			// 
			// GPA
			// 
			this->GPA->AutoSize = true;
			this->GPA->BackColor = System::Drawing::Color::Transparent;
			this->GPA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GPA->ForeColor = System::Drawing::SystemColors::Menu;
			this->GPA->Location = System::Drawing::Point(232, 543);
			this->GPA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->GPA->Name = L"GPA";
			this->GPA->Size = System::Drawing::Size(63, 31);
			this->GPA->TabIndex = 13;
			this->GPA->Text = L"N/A";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 0.1F));
			this->label9->ForeColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(821, 304);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(3, 2);
			this->label9->TabIndex = 14;
			this->label9->Text = L".";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 0.1F));
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(219, 304);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(3, 2);
			this->label10->TabIndex = 15;
			this->label10->Text = L".";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 0.1F));
			this->label11->ForeColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(764, 452);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(3, 2);
			this->label11->TabIndex = 16;
			this->label11->Text = L".";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(739, 546);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 42);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Finances";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Grades::button2_Click);
			// 
			// Grades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1024, 593);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->GPA);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Grades";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Grades";
			this->Load += gcnew System::EventHandler(this, &Grades::Grades_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//The function that gets the line from the file
		std::vector<std::string>parsecommadelimitedstring2(std::string Line)
		{
			std::vector<std::string>Grades;
			std::stringstream s_stream(Line);
			while (s_stream.good())
			{
				std::string substr;
				getline(s_stream, substr, ',');
				Grades.push_back(substr);
			}
			return Grades;
		}
		//Exit Button
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
		   //Getting the line from the files and showing them on the appropriate  
	private: System::Void Grades_Load(System::Object^ sender, System::EventArgs^ e) {
		std::fstream Grades;
		Grades.open("studentGrades.txt", std::ios::in);

		if (Grades.is_open()) {
			std::string line;
			String^ id = ID;

			while (getline(Grades, line)) {
				std::vector<std::string>parsedLine = parsecommadelimitedstring2(line);
				const char* s_ID = parsedLine.at(0).c_str();
				System::String^ ID_edit1 = ID;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit1);

				if (std::strcmp(s_ID, ID_string) == 0) {
					const char* editabsence = parsedLine.at(1).c_str();
					std::string str = editabsence;
					String^ str2 = gcnew String(str.c_str());
					this->label6->Text = str2;

				}
			};
		}
		std::fstream Grades1;
		Grades1.open("studentGrades.txt", std::ios::in);

		if (Grades1.is_open()) {
			std::string line;
			String^ id = ID;

			while (getline(Grades1, line)) {
				std::vector<std::string>parsedLine = parsecommadelimitedstring2(line);
				const char* s_ID = parsedLine.at(0).c_str();
				System::String^ ID_edit1 = ID;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit1);

				if (std::strcmp(s_ID, ID_string) == 0) {
					const char* editabsence = parsedLine.at(2).c_str();
					std::string str = editabsence;
					String^ str2 = gcnew String(str.c_str());
					label7->Text = str2;

				}
			};
		}
		std::fstream Grades2;
		Grades2.open("studentGrades.txt", std::ios::in);

		if (Grades2.is_open()) {
			std::string line;
			String^ id = ID;

			while (getline(Grades2, line)) {
				std::vector<std::string>parsedLine = parsecommadelimitedstring2(line);
				const char* s_ID = parsedLine.at(0).c_str();
				System::String^ ID_edit1 = ID;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit1);

				if (std::strcmp(s_ID, ID_string) == 0) {
					const char* editabsence = parsedLine.at(3).c_str();
					std::string str = editabsence;
					String^ str2 = gcnew String(str.c_str());
					this->label8->Text = str2;

				}
			};
		}
		//Giving the letter grades numeric value
		if (label8->Text == "A") {
			label11->Text = "4";
		}
		else if (label8->Text == "B") {
			label11->Text = "3";
		}
		else if (label8->Text == "C") {
			label11->Text = "2";
		}
		else if (label8->Text == "D") {
			label11->Text = "1";
		}
		else if (label8->Text == "F") {
			label11->Text = "0";
		}
		if (label7->Text == "A") {
			label10->Text = "4";
		}
		else if (label7->Text == "B") {
			label10->Text = "3";
		}
		else if (label7->Text == "C") {
			label10->Text = "2";
		}
		else if (label7->Text == "D") {
			label10->Text = "1";
		}
		else if (label7->Text == "F") {
			label10->Text = "0";
		}
		if (label6->Text == "A") {
			label9->Text = "4";
		}
		else if (label6->Text == "B") {
			label9->Text = "3";
		}
		else if (label6->Text == "C") {
			label9->Text = "2";
		}
		else if (label6->Text == "D") {
			label9->Text = "1";
		}
		else if (label6->Text == "F") {
			label9->Text = "0";
		}
		//calculating the GPA

		Double v1, v2;
		float v3;
		v1 = System::Convert::ToInt32(label9->Text) + System::Convert::ToInt32(label10->Text) + System::Convert::ToInt32(label11->Text);
		v2 = (v1 / 12) * 4;
		v3 = round(v2 * 100.0) / 100.0;
		GPA->Text = System::Convert::ToString(v3);
		if (v3 < 2.2) {
			MessageBox::Show("Please contact your achademic advisor", "You're under achademic probation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	//going to the Finances Form
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Finances^ finances = gcnew Finances(System::Convert::ToDouble(GPA->Text));
		finances->ShowDialog();

	}
	};
}