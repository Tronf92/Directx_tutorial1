#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine,
				   int nShowCmd){
	
	//hello world message box
	MessageBox(NULL,
			   "Hello World",
			   "Just another Hello World program!",
			   MB_ICONEXCLAMATION | MB_OK);

	return 0;
}