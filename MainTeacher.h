#pragma once
#include "SetGrades.h"
#include "SetAbsences.h"

namespace UNified1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainTeacher
	/// </summary>
	public ref class MainTeacher : public System::Windows::Forms::Form
	{
	public:
		MainTeacher(void)
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
		~MainTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ setA;
	private: System::Windows::Forms::Button^ setG;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainTeacher::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->setA = (gcnew System::Windows::Forms::Button());
			this->setG = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Bisque;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(240, 65);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(466, 59);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Welcome Teacher!";
			// 
			// setA
			// 
			this->setA->BackColor = System::Drawing::Color::Bisque;
			this->setA->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->setA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->setA->Location = System::Drawing::Point(490, 318);
			this->setA->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->setA->Name = L"setA";
			this->setA->Size = System::Drawing::Size(178, 165);
			this->setA->TabIndex = 7;
			this->setA->Text = L"Set Absences";
			this->setA->UseVisualStyleBackColor = false;
			this->setA->Click += gcnew System::EventHandler(this, &MainTeacher::setA_Click);
			// 
			// setG
			// 
			this->setG->BackColor = System::Drawing::Color::Bisque;
			this->setG->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->setG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->setG->Location = System::Drawing::Point(193, 318);
			this->setG->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->setG->Name = L"setG";
			this->setG->Size = System::Drawing::Size(178, 165);
			this->setG->TabIndex = 6;
			this->setG->Text = L"Set Grades";
			this->setG->UseVisualStyleBackColor = false;
			this->setG->Click += gcnew System::EventHandler(this, &MainTeacher::setG_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Bisque;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(-1, -6);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(896, 182);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MainTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(892, 620);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->setA);
			this->Controls->Add(this->setG);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MainTeacher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainTeacher";
			this->Load += gcnew System::EventHandler(this, &MainTeacher::MainTeacher_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void setG_Click(System::Object^ sender, System::EventArgs^ e) {
		SetGrades^ setgrade = gcnew SetGrades(); //Set Grades Button takes us to next form to enter Student ID to set Grades to that ID
		setgrade->Show();  //Creating a pointer/reference type basically for a SetGrades object, Setgrade is the pointer
		this->Hide(); 
	}
	private: System::Void setA_Click(System::Object^ sender, System::EventArgs^ e) {
		SetAbsences^ setabsences = gcnew SetAbsences();//Set Grades Button takes us to next form to enter Student ID to set Absences to that ID
		setabsences->Show();
		this->Hide();
	}
	private: System::Void MainTeacher_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
