// Robocup 2016 Japan.cpp: 主要專案檔。

#include "stdafx.h"
#include "Form1.h"

using namespace Robocup2016Japan;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// 建立任何控制項之前，先啟用 Windows XP 視覺化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 建立主視窗並執行
	Application::Run(gcnew Form1());
	return 0;
}
