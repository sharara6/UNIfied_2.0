#pragma once
#include "FinalSetGrades.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
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
	/// Summary for SetGrades
	/// </summary>
	public ref class SetGrades : public System::Windows::Forms::Form
	{
	public:
		SetGrades(void)
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
		~SetGrades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OKButtonG;
	protected:

	private: System::Windows::Forms::TextBox^ GradesID;
	private: System::Windows::Forms::Label^ EnterSIDG;
	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SetGrades::typeid));
			this->OKButtonG = (gcnew System::Windows::Forms::Button());
			this->GradesID = (gcnew System::Windows::Forms::TextBox());
			this->EnterSIDG = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// OKButtonG
			// 
			this->OKButtonG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->OKButtonG->Location = System::Drawing::Point(505, 452);
			this->OKButtonG->Name = L"OKButtonG";
			this->OKButtonG->Size = System::Drawing::Size(146, 82);
			this->OKButtonG->TabIndex = 14;
			this->OKButtonG->Text = L"OK";
			this->OKButtonG->UseVisualStyleBackColor = true;
			this->OKButtonG->Click += gcnew System::EventHandler(this, &SetGrades::OKButton_Click);
			// 
			// GradesID
			// 
			this->GradesID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->GradesID->Location = System::Drawing::Point(410, 312);
			this->GradesID->Name = L"GradesID";
			this->GradesID->Size = System::Drawing::Size(334, 50);
			this->GradesID->TabIndex = 13;
			// 
			// EnterSIDG
			// 
			this->EnterSIDG->AutoSize = true;
			this->EnterSIDG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->EnterSIDG->Location = System::Drawing::Point(239, 176);
			this->EnterSIDG->Name = L"EnterSIDG";
			this->EnterSIDG->Size = System::Drawing::Size(538, 44);
			this->EnterSIDG->TabIndex = 12;
			this->EnterSIDG->Text = L"Enter Student ID to set grades:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(173, 115);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(791, 604);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SetGrades::pictureBox1_Click);
			// 
			// SetGrades
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1190, 763);
			this->Controls->Add(this->OKButtonG);
			this->Controls->Add(this->GradesID);
			this->Controls->Add(this->EnterSIDG);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SetGrades";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Enter StudentID Page";
			this->Load += gcnew System::EventHandler(this, &SetGrades::SetGrades_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Function to split line in file into substrings and put in vector
		   std::vector<std::string>CutAtComma(std::string Line) {//takes string that is the lines, and returns vector 
			   std::vector<std::string>results;//makes vecor of strings
			   std::stringstream s_stream(Line);//intializes s_stream object with Line
			   while (s_stream.good())
			   {
				   std::string substr;
				   getline(s_stream, substr, ',');
				   results.push_back(substr);
			   }
			   return results;
		   }

	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Currentid = GradesID->Text;
		std::fstream ID;
		std::fstream id;
		bool See = false;
		bool Ingrades = false;
		id.open("studentGrades.txt", std::ios::in);

		if (id.is_open()) {
			std::string line100;

			while (getline(id, line100)) {
				std::vector<std::string>CutLine = CutAtComma(line100);//makes vector called CutLine and calls CutAtComma fuction
				const char* Student_ID = CutLine.at(0).c_str();//At index 0 in vector CutLine, c_str is pointer to C_String at 0 index, const_char* returns pointer to thet c-string
				String^ ID_edit = Currentid;
				msclr::interop::marshal_context context;//context is used to convert Id-edit from String^ to cstring
				const char* ID_string = context.marshal_as<const char*>(ID_edit);


				if (std::strcmp(Student_ID, ID_string) == 0) {

					Ingrades = true;

				}
			}


		}
		ID.open("RegisteredStudnets.txt", std::ios::in);

		if (ID.is_open()) {
			std::string line;


			while (getline(ID, line)) {
				std::vector<std::string>CutLine = CutAtComma(line);
				const char* Student_ID = CutLine.at(0).c_str();
				String^ ID_edit = Currentid;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit);



				if ((std::strcmp(Student_ID, ID_string) == 0) && (Ingrades == false)) {
					FinalSetGrades^ finalgrade = gcnew FinalSetGrades();
					finalgrade->Show();
					this->Hide();
					StreamWriter^ line = gcnew StreamWriter("studentGrades.txt", true);
					line->Write(Currentid + ",");
					line->Close();
					See = true;
					break;



				}
			}
			if (Ingrades == true) {
				MessageBox::Show("Student ID Already Been Graded", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				See = true; //if studentID already has been graded, shows up error
			}

			if (See == false) {
				MessageBox::Show("Please Enter Valid Student ID", "Invalid ID", MessageBoxButtons::OK, MessageBoxIcon::Error);
				//if studentID doesn't exist, shows up error

			}

		}


	}

	private: System::Void SetGrades_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	

};
}
