#include "MyForm.h"
using namespace System;
using namespace System:: Windows::Forms;

[STAThread]

void main(array<String^>^arg)
{
Application:: EnableVisualStyles();
Application:: SetCompatibleTextRenderingDefault(false);
Проект1::MyForm form;// ім'я вашого проекту, наприклад, турroekt або ін.
Application:: Run (%form);
}

