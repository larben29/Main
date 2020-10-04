#include "MyForm.h"
#include <Windows.h>
using namespace HelloWorld2;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	HelloWorld2::MyForm form;
	Application::Run(% form);
}

System::Void HelloWorld2::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Hello World", "Вывод");
}

System::Void HelloWorld2::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void HelloWorld2::MyForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Разработчик: Михаил Юшков", "Информация");
}
