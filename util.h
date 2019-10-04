#include "main.h"

#ifndef COLOR_LIST
#define COLOR_LIST

enum {
	black,
	blue,
	green,
	cyan,
	red,
	purple,
	brown,
	lightgray,
	darkgray,
	lightblue,
	lightgreen,
	lightcyan,
	lightred,
	lightpurple,
	yellow,
	white
};

#endif

void CursorView(int);
void gotoxy(int, int);
void SetColor(int, int);