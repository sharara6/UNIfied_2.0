#pragma once
#include "StudentChoice.h"
#include <fstream>
#include <sstream>
#include<vector>
#include <msclr/marshal_cppstd.h>
//#include"Taha"

namespace UNified1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{
	public:
		Student(void)
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
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ StudentID;
	private: System::Windows::Forms::TextBox^ StudentPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ SignInb;
	private: System::Windows::Forms::Button^ Exitb1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StudentID = (gcnew System::Windows::Forms::TextBox());
			this->StudentPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SignInb = (gcnew System::Windows::Forms::Button());
			this->Exitb1 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Silver;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.8F));
			this->label1->Location = System::Drawing::Point(21, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(324, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in as a Student";
			this->label1->Click += gcnew System::EventHandler(this, &Student::label1_Click);
			// 
			// StudentID
			// 
			this->StudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->StudentID->Location = System::Drawing::Point(28, 179);
			this->StudentID->Name = L"StudentID";
			this->StudentID->Size = System::Drawing::Size(276, 28);
			this->StudentID->TabIndex = 1;
			// 
			// StudentPassword
			// 
			this->StudentPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->StudentPassword->Location = System::Drawing::Point(28, 455);
			this->StudentPassword->Name = L"StudentPassword";
			this->StudentPassword->Size = System::Drawing::Size(276, 28);
			this->StudentPassword->TabIndex = 2;
			this->StudentPassword->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label2->Location = System::Drawing::Point(24, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter ID";
			this->label2->Click += gcnew System::EventHandler(this, &Student::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label3->Location = System::Drawing::Point(24, 432);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter Password";
			// 
			// SignInb
			// 
			this->SignInb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->SignInb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignInb->Location = System::Drawing::Point(168, 528);
			this->SignInb->Name = L"SignInb";
			this->SignInb->Size = System::Drawing::Size(136, 43);
			this->SignInb->TabIndex = 5;
			this->SignInb->Text = L"Sign in";
			this->SignInb->UseVisualStyleBackColor = false;
			this->SignInb->Click += gcnew System::EventHandler(this, &Student::SignInb_Click);
			// 
			// Exitb1
			// 
			this->Exitb1->BackColor = System::Drawing::Color::Red;
			this->Exitb1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exitb1->Location = System::Drawing::Point(1036, 649);
			this->Exitb1->Name = L"Exitb1";
			this->Exitb1->Size = System::Drawing::Size(136, 43);
			this->Exitb1->TabIndex = 6;
			this->Exitb1->Text = L"Exit";
			this->Exitb1->UseVisualStyleBackColor = false;
			this->Exitb1->Click += gcnew System::EventHandler(this, &Student::Exitb1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(894, 649);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 43);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Student::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(28, 489);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 20);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Student::checkBox1_CheckedChanged);
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1225, 734);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Exitb1);
			this->Controls->Add(this->SignInb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->StudentPassword);
			this->Controls->Add(this->StudentID);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Exitb1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
	   std::vector<std::string>parsecommadelimitedstring(std::string Line)
	   {
		   std::vector<std::string>results;
		   std::stringstream s_stream(Line);
		   while (s_stream.good())
		   {
			   std::string substr;
			   getline(s_stream, substr, ',');
			   results.push_back(substr);
		   }
		   return results;
	   }
	private: System::Void SignInb_Click(System::Object^ sender, System::EventArgs^ e) {
		std::fstream Student;
		Student.open("RegisteredStudnets.txt", std::ios::in);

		if (Student.is_open()) {
			std::string line;
			bool password = false;
			bool username = false;
				while (getline(Student, line)) {
					std::vector<std::string>parsedLine = parsecommadelimitedstring(line);
					const char* s_ID = parsedLine.at(0).c_str();
					System::String^ ID_edit1 = StudentID->Text;
					msclr::interop::marshal_context context;
					const char* ID_string = context.marshal_as<const char*>(ID_edit1);

					if (std::strcmp(s_ID, ID_string) == 0) {
						const char* s_password = parsedLine.at(1).c_str();
						System::String^ editPassword = StudentPassword->Text;
						msclr::interop::marshal_context context;
						const char* password_string = context.marshal_as<const char*>(editPassword);
						username = true;
						if (strcmp(s_password, password_string) == 0) {
							this->Hide();
							//Constructr to pass the studenr ID to StudentChoice.h
							StudentChoice^ studentchoice = gcnew StudentChoice(System::Convert::ToInt32(StudentID->Text));
							studentchoice->ShowDialog();
							
							password = true;
							

						}
					}
				}
			if (!username) {
				MessageBox::Show("Incorrect Password or Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (!password) {
				MessageBox::Show("Incorrect Password ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		StudentPassword->UseSystemPasswordChar = false;
	}
	else {
		StudentPassword->UseSystemPasswordChar = true;
	}
}
};
}
