#pragma once
#include "FinalSetAbsences.h"
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
	/// Summary for SetAbsences
	/// </summary>
	public ref class SetAbsences : public System::Windows::Forms::Form
	{
	public:
		SetAbsences(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//SetAbsences(System::Windows::Forms::Form^ frm1)
		//{
		//	otherform = frm1;
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SetAbsences()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OKButtonA;
	protected:
	private: System::Windows::Forms::TextBox^ AbsencesID;
	private: System::Windows::Forms::Label^ EnterSIDA;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SetAbsences::typeid));
			this->OKButtonA = (gcnew System::Windows::Forms::Button());
			this->AbsencesID = (gcnew System::Windows::Forms::TextBox());
			this->EnterSIDA = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// OKButtonA
			// 
			this->OKButtonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->OKButtonA->Location = System::Drawing::Point(505, 450);
			this->OKButtonA->Name = L"OKButtonA";
			this->OKButtonA->Size = System::Drawing::Size(146, 82);
			this->OKButtonA->TabIndex = 18;
			this->OKButtonA->Text = L"OK";
			this->OKButtonA->UseVisualStyleBackColor = true;
			this->OKButtonA->Click += gcnew System::EventHandler(this, &SetAbsences::OKButtonA_Click);
			// 
			// AbsencesID
			// 
			this->AbsencesID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->AbsencesID->Location = System::Drawing::Point(411, 310);
			this->AbsencesID->Name = L"AbsencesID";
			this->AbsencesID->Size = System::Drawing::Size(334, 50);
			this->AbsencesID->TabIndex = 17;
			this->AbsencesID->TextChanged += gcnew System::EventHandler(this, &SetAbsences::AbsencesID_TextChanged);
			// 
			// EnterSIDA
			// 
			this->EnterSIDA->AutoSize = true;
			this->EnterSIDA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.25F));
			this->EnterSIDA->Location = System::Drawing::Point(241, 181);
			this->EnterSIDA->Name = L"EnterSIDA";
			this->EnterSIDA->Size = System::Drawing::Size(584, 44);
			this->EnterSIDA->TabIndex = 16;
			this->EnterSIDA->Text = L"Enter Student ID to set absences:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(175, 120);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(791, 604);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SetAbsences::pictureBox1_Click);
			// 
			// SetAbsences
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1155, 687);
			this->Controls->Add(this->OKButtonA);
			this->Controls->Add(this->AbsencesID);
			this->Controls->Add(this->EnterSIDA);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SetAbsences";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Enter StudentID Page";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		//private: System::Windows::Forms::Form^ otherform;
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		//otherform->Show();
	}
		   std::vector<std::string>CutAtComma(std::string Line) {
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

	private: System::Void OKButtonA_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Currentid = AbsencesID->Text;
		bool See = false;
		bool Ingrades = false;
		std::fstream id;
		id.open("studentAbsences.txt", std::ios::in);

		if (id.is_open()) {
			std::string line100;


			while (getline(id, line100)) {
				std::vector<std::string>CutLine = CutAtComma(line100);
				const char* Student_ID = CutLine.at(0).c_str();
				String^ ID_edit = Currentid;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit);


				if (std::strcmp(Student_ID, ID_string) == 0) {

					Ingrades = true;

				}
			}


		}

		std::fstream ID;
		ID.open("RegisteredStudnets.txt", std::ios::in);

		if (ID.is_open()) {
			std::string line;


			while (getline(ID, line)) {
				std::vector<std::string>CutLine = CutAtComma(line);
				const char* Student_ID = CutLine.at(0).c_str();
				String^ ID_edit = Currentid;
				msclr::interop::marshal_context context;
				const char* ID_string = context.marshal_as<const char*>(ID_edit);


				if ((std::strcmp(Student_ID, ID_string) == 0) && Ingrades == false) {
					FinalSetAbsences^ finalAbs = gcnew FinalSetAbsences();
					finalAbs->Show();
					this->Hide();
					StreamWriter^ line = gcnew StreamWriter("studentAbsences.txt", true);
					line->Write(Currentid + ",");
					line->Close();
					See = true;
					break;


				}
			}

			if (Ingrades == true) {
				MessageBox::Show("Student ID Already Set Absences", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				See = true;
			}

			if (See == false) {
				MessageBox::Show("Please Enter Valid Student ID", "Invalid ID", MessageBoxButtons::OK, MessageBoxIcon::Error);


			}

		}
	}
	private: System::Void AbsencesID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
