#pragma once
#include <fstream>
#include <sstream>
#include<vector>
#include <msclr/marshal_cppstd.h>

#include "MainTeacher.h"








namespace UNified1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ID;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Password;

	private: System::Windows::Forms::Button^ SignInb;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Exitb1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->SignInb = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Exitb1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightCoral;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.8F));
			this->label1->Location = System::Drawing::Point(779, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(332, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign in as a Teacher";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label2->Location = System::Drawing::Point(782, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter ID";
			// 
			// ID
			// 
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->ID->Location = System::Drawing::Point(786, 194);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(276, 28);
			this->ID->TabIndex = 5;
			this->ID->TextChanged += gcnew System::EventHandler(this, &MyForm1::StudentID_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label3->Location = System::Drawing::Point(782, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Enter Password";
			// 
			// Password
			// 
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Password->Location = System::Drawing::Point(786, 397);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(276, 28);
			this->Password->TabIndex = 7;
			this->Password->UseSystemPasswordChar = true;
			// 
			// SignInb
			// 
			this->SignInb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->SignInb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignInb->Location = System::Drawing::Point(926, 505);
			this->SignInb->Name = L"SignInb";
			this->SignInb->Size = System::Drawing::Size(136, 43);
			this->SignInb->TabIndex = 8;
			this->SignInb->Text = L"Sign in";
			this->SignInb->UseVisualStyleBackColor = false;
			this->SignInb->Click += gcnew System::EventHandler(this, &MyForm1::SignInb_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(902, 619);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 43);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// Exitb1
			// 
			this->Exitb1->BackColor = System::Drawing::Color::Red;
			this->Exitb1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exitb1->Location = System::Drawing::Point(1044, 619);
			this->Exitb1->Name = L"Exitb1";
			this->Exitb1->Size = System::Drawing::Size(136, 43);
			this->Exitb1->TabIndex = 9;
			this->Exitb1->Text = L"Exit";
			this->Exitb1->UseVisualStyleBackColor = false;
			this->Exitb1->Click += gcnew System::EventHandler(this, &MyForm1::Exitb1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(786, 431);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 20);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1192, 674);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Exitb1);
			this->Controls->Add(this->SignInb);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}





private: System::Void Exitb1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
private: System::Void StudentID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}//this function reads the file and stores it in an array vector it difrinciates between one input and another by the comma 
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
	//initalize a file
	std::fstream Teacher;
	
	// uses file in read mode 
	Teacher.open("RegisteredTeachers.txt", std::ios::in);
	
	// set pasword and username as false 
	bool password = false;
	bool username = false;

	// to make sure that there is this file and it is open
	if (Teacher.is_open()) {
		std::string line;

		// while there are still lines check for pass and username 
		while (getline(Teacher, line)) {
			
			// call the function upward and name the vector parsed line
			std::vector<std::string>parsedLine = parsecommadelimitedstring(line);
			
			// points at the first character of the username in the file and treats as a cstring 
			const char* t_ID = parsedLine.at(0).c_str();
			
			//stores the id text  entered by the user as a username in an ID_edit variable 
			System::String^ ID_edit = ID->Text;
			
			// use marshal context to make a variabl named context 
			msclr::interop::marshal_context context;
			
			//cnverts Id_edit from sytem type tring to std string then makes a pointer point to it as a c.string 
			const char* ID_string = context.marshal_as<const char*>(ID_edit);



			//if the username is correct continue
			if (std::strcmp(t_ID, ID_string) == 0) {
				
				// does the same to password as that what happend to username 
				const char* t_password = parsedLine.at(1).c_str();
				System::String^ editPassword = Password->Text;
				msclr::interop::marshal_context context;
				const char* password_string = context.marshal_as<const char*>(editPassword);
				
				//makes password true
				username = true;

				if (strcmp(t_password, password_string) == 0) {
					
					// made an instance of MainTeacher class to be able to show it as it had an error before

					MainTeacher^ teach = gcnew MainTeacher();
					teach->Show();
					
					//closes the sign in page 
					this->Hide();

					//makes passwod true 
					 password = true;
				}
			}
		}
		

		// if username is wrong it output an error box and wait for anther input
		 if (!username) {
			MessageBox::Show("Incorrect Password or Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		 // if password is wrong it output an error box and wait for anther input
		 else if (!password) {
		MessageBox::Show("Incorrect Password ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	
	//if checkced it makes the password visible 
	if (checkBox1->Checked) {
		Password->UseSystemPasswordChar = false;
	}
	else {
		Password->UseSystemPasswordChar = true;
	}
}
};
}
