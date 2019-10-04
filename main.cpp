#include "main.h"

int main()
{
	Game g = Game();

	while (true) {
		g.drawTitle();
		int menu = g.drawMenu();
		switch (menu) {
		case 0:
			g.gStart();
			break;
		case 1:
			g.drawHelp();
			break;
		case 2:
			return 0;
		}
		system("cls");
	}
}