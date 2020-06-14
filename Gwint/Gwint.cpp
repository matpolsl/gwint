#include "pch.h"
#include "MyMenu.h"

using namespace System;
using namespace Gwint;

[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyMenu());
	return 0;

}