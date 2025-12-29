#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MainForm;

void OnThreadException(System::Object^ sender,
    System::Threading::ThreadExceptionEventArgs^ e);

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::SetUnhandledExceptionMode(
        UnhandledExceptionMode::CatchException);

    Application::ThreadException += gcnew Threading::ThreadExceptionEventHandler(OnThreadException);

    Application::Run(gcnew Form1());
    return 0;
}

void OnThreadException(System::Object^ sender,
    System::Threading::ThreadExceptionEventArgs^ e)
{
    if (dynamic_cast<System::OverflowException^>(e->Exception))
    {
        MessageBox::Show(
            "Введено недопустимое число",
            "Ошибка",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error
        );
    }
    else
    {
        MessageBox::Show(
            "Неизвестная ошибка",
            "Ошибка",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error
        );
    }
}
