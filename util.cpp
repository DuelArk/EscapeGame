#include "util.h"

HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

//Ŀ�� �����(0)/���̱�(1)
void CursorView(int show) {
	CONSOLE_CURSOR_INFO consoleCursor;
	consoleCursor.bVisible = show;
	consoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &consoleCursor);
}

//Ŀ�� �̵� �Լ�
void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void SetColor(int font, int background) {
	int code = font + background * 16;
	SetConsoleTextAttribute(consoleHandle, code);
}