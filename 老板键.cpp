#include<windows.h>

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)

int main() {
	bool f = false;
	HWND hwnd = ::FindWindow("Chrome_WidgetWin_1"
		,NULL);//��ȡ���ڵľ�� 
	HWND hwnd2 = ::GetParent(hwnd);
	while (1) {
		if (KEY_DOWN(VK_MBUTTON)) { //��������м�
			ShowWindow(hwnd2, f);
			f = 1 - f;
			Sleep(100);
		}
		Sleep(20);
	}
}