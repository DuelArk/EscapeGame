#include "util.h"

HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

//커서 숨기기(0)/보이기(1)
void CursorView(int show) {
	CONSOLE_CURSOR_INFO consoleCursor;
	consoleCursor.bVisible = show;
	consoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &consoleCursor);
}

//커서 이동 함수
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