#include "MyForm.h"
#include "Student.h" 
#include "MyForm1.h"
#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UNIfied1::MyForm form;
	Application::Run(% form);
}