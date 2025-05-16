#include "Biblioteca.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

using namespace System;

[STAThread]
int main() {
    System::Windows::Forms::Application::EnableVisualStyles();
    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

    System::Windows::Forms::Application::Run(gcnew Bilioteca::Biblioteca());
    return 0;
}