#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Calc1::MyForm form; // mathpro �������� ������� , hello �������� ���� (�����)
    Application::Run(% form);
}
