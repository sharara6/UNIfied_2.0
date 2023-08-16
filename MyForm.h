#pragma once

#include "Student.h" 
#include "MyForm1.h"
#include "MyForm2.h"

using namespace UNified1;

namespace UNIfied1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ Studentb;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Teacherb;
	private: System::Windows::Forms::Button^ Exitb1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Studentb = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Teacherb = (gcnew System::Windows::Forms::Button());
			this->Exitb1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Silver;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.8F));
			this->label1->Location = System::Drawing::Point(462, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in as ...";
			// 
			// Studentb
			// 
			this->Studentb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Studentb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Studentb->Location = System::Drawing::Point(489, 175);
			this->Studentb->Name = L"Studentb";
			this->Studentb->Size = System::Drawing::Size(136, 43);
			this->Studentb->TabIndex = 1;
			this->Studentb->Text = L"Student";
			this->Studentb->UseVisualStyleBackColor = false;
			this->Studentb->Click += gcnew System::EventHandler(this, &MyForm::Studentb_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(489, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Registerar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Teacherb
			// 
			this->Teacherb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Teacherb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Teacherb->Location = System::Drawing::Point(489, 247);
			this->Teacherb->Name = L"Teacherb";
			this->Teacherb->Size = System::Drawing::Size(136, 43);
			this->Teacherb->TabIndex = 2;
			this->Teacherb->Text = L"Teacher";
			this->Teacherb->UseVisualStyleBackColor = false;
			this->Teacherb->Click += gcnew System::EventHandler(this, &MyForm::Teacherb_Click);
			// 
			// Exitb1
			// 
			this->Exitb1->BackColor = System::Drawing::Color::Red;
			this->Exitb1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exitb1->Location = System::Drawing::Point(833, 605);
			this->Exitb1->Name = L"Exitb1";
			this->Exitb1->Size = System::Drawing::Size(136, 43);
			this->Exitb1->TabIndex = 3;
			this->Exitb1->Text = L"Exit";
			this->Exitb1->UseVisualStyleBackColor = false;
			this->Exitb1->Click += gcnew System::EventHandler(this, &MyForm::Exitb1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1002, 686);
			this->Controls->Add(this->Exitb1);
			this->Controls->Add(this->Teacherb);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Studentb);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void Exitb1_Click(System::Object^ sender, System::EventArgs^ e) {
	//this is to make the exit button close the program 
		Application::Exit();
	}
private: System::Void Studentb_Click(System::Object^ sender, System::EventArgs^ e) {
	// made an instance of Student class to be able to show it as it had an error before
	Student^ stnd = gcnew Student;
	stnd->Show();
}
private: System::Void Teacherb_Click(System::Object^ sender, System::EventArgs^ e) {
	// made an instance of MyForm1 class to be able to show it as it had an error before

	MyForm1^ teacher = gcnew MyForm1;
	teacher->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// made an instance of MyForm class to be able to show it as it had an error before

	
	MyForm2^ reg = gcnew MyForm2;
	reg->Show();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
