#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <msclr/marshal_cppstd.h>

namespace UNified1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->textBox2->Location = System::Drawing::Point(61, 487);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(317, 37);
			this->textBox2->TabIndex = 12;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->label2->Location = System::Drawing::Point(55, 443);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(312, 31);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Add Student Password : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.8F));
			this->label3->Location = System::Drawing::Point(418, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 39);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Add a Student";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->textBox1->Location = System::Drawing::Point(61, 258);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(317, 37);
			this->textBox1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->label1->Location = System::Drawing::Point(55, 214);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 31);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Add Student Username : ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(812, 591);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 53);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(242, 591);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 53);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Cyan;
			this->button3->Location = System::Drawing::Point(665, 591);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 53);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(61, 530);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 20);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm5::checkBox1_CheckedChanged);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1003, 686);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::fstream Student;
	Student.open("RegisteredStudnets.txt", std::ios::app);
	if (Student .is_open()) {
		System::String^ ID = textBox1->Text;
		System::String^ password = textBox2->Text;
		Student << msclr::interop::marshal_as<std::string>(ID) << ',' <<
			msclr::interop::marshal_as<std::string>(password) << std::endl;
		Student.close();
	}
	textBox1->Text = "";
	textBox2->Text = "";


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		textBox2->UseSystemPasswordChar = false;
	}
	else {
		textBox2->UseSystemPasswordChar = true;
	}
}
private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
