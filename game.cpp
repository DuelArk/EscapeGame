#include "game.h"

/*1 S E K L A B X*/

char forestMap[34][101] = {
	{"                                        11111111111111111111111111111111111111                      "},
	{"       1111111111  1111111111111        1                        BK  1T      1                      "},
	{"       1TK      1  1   B       1        1 1111111 1111111111111      1111111L1                      "},
	{"       11111111 1111           1111111111 1     1 1           1      1111111 11111                  "},
	{"         1         L                      1     1 1           1                  1111               "},
	{"         1L111111111           111111111111     1 1           11111111111111        1               "},
	{"         1 1       1       B   1                1 111111111111             1        1               "},
	{"         1L111111111111111111111                1       L   T1             1        1111            "},
	{"         1           1                          11111111111111             1          X1111111      "},
	{"         111111111   1                                                     11 1111 11        1      "},
	{"                 1   1                                                      1 1  1 11111111 X1      "},
	{"                 1   1                           111111111         1111111111 1  1 1      1  1      "},
	{"                 1   1                           1T    L 1         1A      B1 1  1 1      1X 1      "},
	{"                 1   1                           1111111 1         1        1 1  1 1      1 K1      "},
	{"                 1   1                                 1 1         1        1 1  1K1      1111      "},
	{"      111111111111   111111                          111 11111111111   XX     1  111                "},
	{"      1                  A1                          1                 XX   1 1                     "},
	{"      1        XXX        1                         11 1111111111111        1 1                     "},
	{"      1A       K          1                        11  1           1        1 1                     "},
	{"      1          K       A1                       11  X1           1B      A1 1                     "},
	{"      1        XXX        1                       1  X11           111111111111                     "},
	{"      1A                  1                       1XL11                                             "},
	{"      111111111   111111111                       1  111111111111111111111111111                    "},
	{"              1   1                               1    XX    X     X     XX   K1                    "},
	{"              1   1                               1  1    X    X X   XX     X  1                    "},
	{"              1   1                             111  111111111111111111111111111                    "},
	{"              1   1                             1      1                                            "},
	{"          11111   11111                         1      1                                            "},
	{"          1           1                         1      1                                            "},
	{"          1           1                         1   E  1                                            "},
	{"          1           1                         11111111                                            "},
	{"          1 S         1                                                                             "},
	{"          1111111111111                                                                             "},
	{"                                                                                                    "}
};

char snowMap[34][101] = {
	{"                                                                                                    "},
	{"                      1111111111111111111111111111111111111111111111111111111                       "},
	{"                      1   X           L      1                              1                       "},
	{"                 111111      X  1111111   T  1                              111111                  "},
	{"                 1     X       11111111111111111      11111111111111             1                  "},
	{"            111111    X    XX  1                                   1        X    111111             "},
	{"            1             111111                                   111111         X   1             "},
	{"       111111            B1   B         1111111111111111111             1     X       111111        "},
	{"       1   XX  X     111111             1                 1             111111    X        1        "},
	{"       1         X   1             111111                 111111             1       X     1        "},
	{"       1        111111             1                           11111111111L11111111A       1        "},
	{"       1     X  1             111111                  11L11   1111111             1     X  1        "},
	{"       1        1             1      X      111     111   1   1     1             1   X    1        "},
	{"       1  X     1        111111             1  XX XX  1 X 11111  K  111111        1   K    1        "},
	{"       1        1        1  T L   X  111    1  X   X  1  X  111          1    T   1  X     1        "},
	{"       1        1        111111111111111    1  XXX X  1X    111          1111111111       A1        "},
	{"       1                 1   KX   111111    1  X X X  1 XX  11111A       111111            1        "},
	{"       1                 1   X    111111    1  X   X  1   X 11111       A1 X    X          1        "},
	{"       1        1        1     X     111    1  X X X  1  T  1            1   X   X1111111111        "},
	{"       1        1        1   X   1111111    1  X EX   1111111            1 X   X  1   K    1        "},
	{"       1        1        111111   X         1         1             111111   X    1        1        "},
	{"       1        1             1 X           11111111111             1     XX    X 1        1        "},
	{"       1        1             111111                           111111        XX   111111  X1        "},
	{"       1        111111             1                           1             11111111111   1        "},
	{"       1             1             111111                 111111             111111     X X1        "},
	{"       1           XX111111             1                 1             111111    X  X     1        "},
	{"       111111    X       A1   B         111111      1111111             1A            111111        "},
	{"            1    X        111111                                   111111             1             "},
	{"            111111             1                                   1             111111             "},
	{"                 1             1111111111111111111111111111111111111             1                  "},
	{"                 111111                                                     111111                  "},
	{"                      1                          S                          1                       "},
	{"                      1111111111111111111111111111111111111111111111111111111                       "},
	{"                                                                                                    "}
};

char desertMap[34][101] = {
	{"                                    111                                                             "},
	{"                       1111111111   1B1                                                             "},
	{"                       1A       11111 1                                                             "},
	{"                       1111 1 1 1     1                                                             "},
	{"                       1T   1  A1 111 111                                                           "},
	{"                       111111 1 1 1     1                                                           "},
	{"                            1  A1 1     1                                                           "},
	{"                            1 1 1 1     1                               1111111                     "},
	{"      11111                 1  A1 1 B B 1                         111   1     11111                 "},
	{"      1B1 1111111111111111111 1 1 1 111 1                     11111 11111  1     X1                 "},
	{"      1 1 1                 1     1     1                     1         L  1     X1                 "},
	{"      1   1 111111111111111 111111111 1 1                     1   1 11111  11111 11                 "},
	{"      1 1 1               1 L         1 11111111111111111111111 K 1 1B B1  1   1 1                  "},
	{"      1 1 111111111111111 111         1 1   X                 1   1 1 T 1  1 K 1 1                  "},
	{"      1 1 1            1X   1         1   X   1111111111 1111 11111 1   1  1   1 1                  "},
	{"      1 1 111 11111111 1111 11      11111111111  L T1       1     1 1   1  1   1 1                  "},
	{"      1 1 1X         1      X1      1X  KX1   1 11111  XXX  11111 1 1 X 1  1 X 1 1                  "},
	{"    111 1 1111111111 111111111111111XX X111   1 1A              1 1 1 X 1  1 X 1 1                  "},
	{"    1   1                        XXXX  X1    1  1              A1 1 1   1  1   1 1                  "},
	{"    1 1 1 111  1111   11111111X XXXXX X1      1 1       K       1 1 1   1  1   1 1                  "},
	{"    1 1 1B1 1  1 X   X X 1  1X   XXXX X1      1 1A              1 1 1   1  1   1 1                  "},
	{"    1 11111 1  1X  XX    1 1XX XX   X X1      1 1              A1 1 1   L   B B1 1111111111         "},
	{"    1A      1  1  X K X  1 1X  X  X   X11111  1  111111111111111  1 1XXXXXXXXXX1          1         "},
	{"    1X  X  X1  1   XXX   1 1X    XXXXX111  1111 111      B B      1 111111111111 11111111 1         "},
	{"    1       1XL1 X     X 11XXXXXX   X1A      11 111               1 1A                    1         "},
	{"    11111 111  11111111111XX   X  X X1A      1 BK 1       K       1 111111111111111111111 1         "},
	{"       1  1              1X  X   XX X1  1111 1111 1               1 1                   1 1         "},
	{"       1T1           111    XKXXX   X1  1       L 1     B   B     1 1                  11 11        "},
	{"     1111           1   1111X       1   11111111111 111111111111111 1                 1     1       "},
	{"     1               1      11111111  X1                  LL       A1                1   E   1      "},
	{"     1     11111      111111   XX    X1111111111111111111111111111111                 1     1       "},
	{"     1 S  1     1   K        X    XXX1                                                 11111        "},
	{"     1    1      1    111111111111111                                                               "},
	{"      1111        1111                                                                              "}
};

char tempMap[34][101];

//초기화
void Game::Init() {
	//콘솔 크기와 제목
	system("mode con cols=100 lines=40 | title Escape");
	//커서 숨기기
	CursorView(0);
}

//타이틀 그리기
void Game::drawTitle() {
	SetColor(white, black);
	cout << "\n\n\n\n";
	gotoxy(23, 5);
	cout << "                        ******                        \n";
	gotoxy(23, 6);
	cout << "                      *********                       \n";
	gotoxy(23, 7);
	cout << "                     ***********                      \n";
	gotoxy(23, 8);
	cout << "                     ************                     \n";
	gotoxy(23, 9);
	cout << "                      **********                      \n";
	gotoxy(23, 10);
	cout << "                       ********                       \n";
	gotoxy(23, 11);
	cout << "                      **********                      \n";
	SetColor(lightblue, black);
	gotoxy(23, 12);
	cout << "  #####     ####     ####";
	SetColor(white, black);
	cout << "******";
	SetColor(lightblue, black);
	cout << "#      ####     #####  \n";
	gotoxy(23, 13);
	cout << "  #        #        #";
	SetColor(white, black);
	cout << "*********";
	SetColor(lightblue, black);
	cout << "#";
	SetColor(white, black);
	cout << "*";
	SetColor(lightblue, black);
	cout << "#     #   #    #      \n";
	gotoxy(23, 14);
	cout << "  ####      ###     #";
	SetColor(white, black);
	cout << "********";
	SetColor(lightblue, black);
	cout << "#####    ####     ####   \n";
	gotoxy(23, 15);
	cout << "  #            #    #";
	SetColor(white, black);
	cout << "********";
	SetColor(lightblue, black);
	cout << "#";
	SetColor(white, black);
	cout << "***";
	SetColor(lightblue, black);
	cout<< "#    #        #      \n";
	gotoxy(23, 16);
	cout << "  #####    ####     ";
	SetColor(white, black);
	cout << "*";
	SetColor(lightblue, black);
	cout << "####";
	SetColor(white, black);
	cout << "****";
	SetColor(lightblue, black);
	cout << "#";
	SetColor(white, black);
	cout << "***";
	SetColor(lightblue, black);
	cout << "#    #        #####  \n";
	SetColor(white, black);
	gotoxy(23, 17);
	cout << "                   ****************                   \n";
	gotoxy(23, 18);
	cout << "                   ****************                   \n";
	gotoxy(23, 19);
	cout << "                  ******************                  \n";
	gotoxy(23, 20);
	cout << "                  ******************                  \n";
}

//타이틀 메뉴 그리기
int Game::drawMenu() {
	int x = 47;
	int y = 24;
	int r = 0; //리턴할 변수

	gotoxy(x - 2, y);
	cout << "> 게임시작";
	gotoxy(x, y + 2);
	cout << "게임설명";
	gotoxy(x, y + 4);
	cout << "  종료  ";

	while (true) {
		Sleep(100);
		switch (keyControl()) {
		case UP:
			if (y > 24) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, y - 2);
				cout << ">";
				y -= 2;
				r--;
			}
			break;
		case DOWN:
			if (y < 28) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, y + 2);
				cout << ">";
				y += 2;
				r++;
			}
			break;
		case ENTER:
			return r;
			break;
		}
	}
}

//키입력
int Game::keyControl() {
	if (GetAsyncKeyState(VK_UP) & 0x8000)
		return UP;
	else if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		return DOWN;
	else if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		return LEFT;
	else if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		return RIGHT;
	else if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		return ENTER;
	else if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		return ESC;
	else
		return -1;
}

//게임 설명 그리기
void Game::drawHelp() {
	system("cls");

	gotoxy(44, 5);
	cout << "[도움말]";
	gotoxy(36, 7);
	cout << "Escape는 탈출형 게임입니다";
	gotoxy(23, 8);
	cout << "플레이어가 목적지에 도착하면 되는 간단한 게임입니다";
	gotoxy(33, 9);
	cout << "방해물도 있으니 조심해야 합니다";

	gotoxy(44, 12);
	cout << "[조작법]";
	gotoxy(38, 14);
	cout << "이동 : 방향키 ↑↓←→";
	gotoxy(38, 15);
	cout << "선택 : ENTER 키";
	gotoxy(34, 16);
	cout << "게임정지 : ESC 키";

	gotoxy(20, 20);
	cout << "플레이어 : ";
	SetColor(green, black);
	cout << "0";
	SetColor(white, black);
	cout << " - 체력은 5칸이고 죽으면 게임 종료입니다";

	gotoxy(20, 21);
	cout << "잠긴 문 : ";
	SetColor(brown, black);
	cout << "#";
	SetColor(white, black);
	cout << " - 열쇠를 이용해서 열 수 있습니다";

	gotoxy(20, 22);
	cout << "열쇠 : ";
	SetColor(yellow, black);
	cout << "*";
	SetColor(white, black);
	cout << " - 잠긴 문을 여는데 사용합니다";

	gotoxy(20, 23);
	cout << "장애물 : ";
	SetColor(red, black);
	cout << "o x";
	SetColor(white, black);
	cout << " - 부딪히면 체력이 떨어집니다";

	gotoxy(20, 24);
	cout << "정수 : ";
	SetColor(purple, black);
	cout << "$";
	SetColor(white, black);
	cout << " - 모든 정수를 획득해야 탈출할 수 있습니다";

	gotoxy(20, 25);
	cout << "차원문 : ";
	SetColor(cyan, black);
	cout << "@";
	SetColor(white, black);
	cout << " - 모든 정수를 획득하고 차원문을 통과하면 게임 클리어입니다";

	gotoxy(30, 30);
	cout << "ENTER 키를 누르면 메인으로 돌아갑니다";

	while (true) {
		Sleep(100);
		if (keyControl() == ENTER)
			break;
	}
}

//게임 시작
void Game::gStart() {
	switch (drawMapList()) {
	case 0:
		setMap(forest);
		playing = true;
		wallColor = green;
		mapNum = 0;
		break;
	case 1:
		setMap(snow);
		playing = true;
		wallColor = white;
		mapNum = 1;
		break;
	case 2:
		setMap(desert);
		playing = true;
		wallColor = yellow;
		mapNum = 2;
		break;
	case 3:
		return;
	}

	gameReset();
	drawMap(wallColor);
	Sleep(100);

	while (playing) {
		int key = keyControl();

		switch (key) {
		case UP:
			move(0, -1);
			break;
		case DOWN:
			move(0, 1);
			break;
		case LEFT:
			move(-1, 0);
			break;
		case RIGHT:
			move(1, 0);
			break;
		case ESC:
			GamePause();
			break;
		}

		drawUI();
		obstacleMove();
		Sleep(100);
	}
}

//맵 선택화면 그리기
int Game::drawMapList() {
	system("cls");
	int r = 0; //리턴할 변수
	int x = 45;
	int y = 10;

	gotoxy(44, 7);
	cout << "[맵 선택]";
	gotoxy(x - 2, y);
	cout << "> 1. 숲";
	gotoxy(x, y + 2);
	cout << "2. 설원";
	gotoxy(x, y + 4);
	cout << "3. 사막";
	gotoxy(x, y + 6);
	cout << "메인으로";

	while (true) {
		Sleep(100);
		switch (keyControl()) {
		case UP:
			if (y > 10) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, y - 2);
				cout << ">";
				y -= 2;
				r--;
			}
			break;
		case DOWN:
			if (y < 16) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, y + 2);
				cout << ">";
				y += 2;
				r++;
			}
			break;
		case ENTER:
			return r;
			break;
		}
	}
}

//맵 그리기
void Game::drawMap(int color) {
	system("cls");

	for (int h = 0; h < 34; h++) {
		for (int w = 0; w < 100; w++) {
			char map = tempMap[h][w];

			if (map == ' ') { //빈공간
				SetColor(white, black);
				cout << " ";
			}
			else if (map == 'S') { //시작지점
				SetColor(green, black);
				cout << "0";
				spawnX = w;
				spawnY = h;
				posX = w;
				posY = h;
				tempMap[h][w] = ' ';
			}
			else if (map == 'E') { //출구
				SetColor(cyan, black);
				cout << "@";
			}
			else if (map == 'K') { //열쇠
				SetColor(yellow, black);
				cout << "*";
			}
			else if (map == 'L') { //잠긴 문
				SetColor(brown, black);
				cout << "#";
			}
			else if (map == 'T') { //탈출에 필요한 아이템
				SetColor(purple, black);
				cout << "$";
				itemCount++;
			}
			else if (map == 'A') { //좌우 이동 방해물
				SetColor(red, black);
				cout << "o";
				pos tempPos;
				if (tempMap[h][w + 1] == '1') { //오른쪽에 벽이 있을 경우
					tempPos.dir = true;
				}
				else {
					tempPos.dir = false;
				}
				tempPos.x = w;
				tempPos.y = h;
				obstaclePos[obstacleCount++] = tempPos;
			}
			else if (map == 'B') { //상하 이동 방해물
				SetColor(red, black);
				cout << "o";
				pos tempPos;
				if (tempMap[h + 1][w] == '1') { //아래쪽에 벽이 있을 경우
					tempPos.dir = true;
				}
				else {
					tempPos.dir = false;
				}
				tempPos.x = w;
				tempPos.y = h;
				obstaclePos[obstacleCount++] = tempPos;
			}
			else if (map == 'X') { //고정 방해물
				SetColor(red, black);
				cout << "x";
			}
			else if (map == '1') { //벽
				SetColor(color, color);
				cout << "1";
			}
		}
		cout << "\n";
	}
	drawUI();
}

//맵 세팅
void Game::setMap(int map) {
	switch (map) {
	case forest:
		memcpy(tempMap, forestMap, sizeof(tempMap)); //tempMap에 forestMap을 복사
		break;
	case snow:
		memcpy(tempMap, snowMap, sizeof(tempMap)); //tempMap에 snowMap을 복사
		break;
	case desert:
		memcpy(tempMap, desertMap, sizeof(tempMap)); //tempMap에 desertMap을 복사
		break;
	}
}

//UI 그리기
void Game::drawUI() {
	SetColor(white, black);
	gotoxy(0, 34);
	cout << "----------------------------------------------------------------------------------------------------";

	gotoxy(10, 36);
	SetColor(green, black);
	cout << "위치 : ";
	cout.width(2); //2자릿수로 표현
	cout.fill(0); //빈곳은 0으로 메움
	cout << posX;
	cout << ", ";
	cout.width(2);
	cout.fill(0);
	cout << posY;

	gotoxy(10, 38);
	SetColor(red, black);
	cout << "체력 : ";
	cout << life;

	gotoxy(60, 36);
	SetColor(yellow, black);
	cout << "열쇠 갯수 : ";
	cout << keyCount;

	gotoxy(60, 38);
	SetColor(purple, black);
	cout << "탈출에 필요한 남은 아이템 수 : ";
	cout << itemCount;
}

//게임 세팅 리셋
void Game::gameReset() {
	keyCount = 0;
	itemCount = 0;
	obstacleCount = 0;
	life = 5;
}

//플레이어 이동
void Game::move(int mx, int my) {
	char mapCheck = tempMap[posY + my][posX + mx];

	if (mapCheck == ' ') { //빈공간이면 이동
		drawPlayer(mx, my);
	}
	else if (mapCheck == 'K') { //열쇠
		SetColor(white, black);
		gotoxy(posX + mx, posY + my);
		cout << " ";
		tempMap[posY + my][posX + mx] = ' ';
		keyCount++;
	}
	else if (mapCheck == 'L') { //잠긴 문
		if (keyCount > 0) {
			SetColor(white, black);
			gotoxy(posX + mx, posY + my);
			cout << " ";
			tempMap[posY + my][posX + mx] = ' ';
			keyCount--;
		}
	}
	else if (mapCheck == 'E') { //출구
		if (itemCount == 0)
			GameClear();
	}
	else if (mapCheck == 'T') { //아이템
		SetColor(white, black);
		gotoxy(posX + mx, posY + my);
		cout << " ";
		tempMap[posY + my][posX + mx] = ' ';
		itemCount--;
	}
	else if (mapCheck == 'A' || mapCheck == 'B' || mapCheck == 'X') { //방해물에 부딪힐 경우
		life--;
		drawPlayer(spawnX - posX, spawnY - posY);
		if (life == 0)
			GameOver();
	}
}

//플레이어 그리기
void Game::drawPlayer(int mx, int my) {
	SetColor(white, black);
	gotoxy(posX, posY);
	cout << " ";
	SetColor(green, black);
	gotoxy(posX + mx, posY + my);
	cout << "0";
	posX += mx;
	posY += my;
}

//방해물 이동
void Game::obstacleMove() {
	for (int i = 0; i < obstacleCount; i++) {
		pos* tempPos = &obstaclePos[i];
		int x = tempPos->x;
		int y = tempPos->y;

		char mapCheck = tempMap[y][x];

		if (mapCheck == 'A') { //좌우 이동
			if (tempPos->dir) {
				if (tempMap[y][x - 1] == ' ') {
					tempMap[y][x] = ' ';
					tempMap[y][x - 1] = 'A';
					SetColor(red, black);
					gotoxy(x, y);
					cout << " ";
					gotoxy(x - 1, y);
					cout << "o";
					tempPos->x--;
				}
				else {
					tempPos->dir = false;
				}
			}
			else {
				if (tempMap[y][x + 1] == ' ') {
					tempMap[y][x] = ' ';
					tempMap[y][x + 1] = 'A';
					SetColor(red, black);
					gotoxy(x, y);
					cout << " ";
					gotoxy(x + 1, y);
					cout << "o";
					tempPos->x++;
				}
				else {
					tempPos->dir = true;
				}
			}
		}
		else if (mapCheck == 'B') { //상하 이동
			if (tempPos->dir) {
				if (tempMap[y - 1][x] == ' ') {
					tempMap[y][x] = ' ';
					tempMap[y - 1][x] = 'B';
					SetColor(red, black);
					gotoxy(x, y);
					cout << " ";
					gotoxy(x, y - 1);
					cout << "o";
					tempPos->y--;
				}
				else {
					tempPos->dir = false;
				}
			}
			else {
				if (tempMap[y + 1][x] == ' ') {
					tempMap[y][x] = ' ';
					tempMap[y + 1][x] = 'B';
					SetColor(red, black);
					gotoxy(x, y);
					cout << " ";
					gotoxy(x, y + 1);
					cout << "o";
					tempPos->y++;
				}
				else {
					tempPos->dir = true;
				}
			}
		}

		//플레이어와 부딪힐 경우
		if (x == posX && y == posY) {
			life--;
			drawPlayer(spawnX - posX, spawnY - posY);
			if (life == 0)
				GameOver();
		}
	}
}

//게임오버
void Game::GameOver() {
	int r = 0;
	int x = 46;
	int y = 9;
	bool pause = true;

	SetColor(white, white);
	for (int i = 0; i < 8; i++) {
		gotoxy(40, 6 + i);
		cout << "                    ";
	}
	SetColor(black, white);
	gotoxy(x - 2, y - 2);
	cout << "GAME  OVER";
	gotoxy(x - 2, y);
	cout << "> 다시하기";
	gotoxy(x, y + 2);
	cout << "메인으로";

	while (pause) {
		Sleep(100);

		switch (keyControl()) {
		case UP:
			if (y > 9) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, y - 2);
				cout << ">";
				y -= 2;
				r--;
			}
			break;
		case DOWN:
			if (y < 11) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, y + 2);
				cout << ">";
				y += 2;
				r++;
			}
			break;
		case ENTER:
			if (r == 0) {
				gameReset();
				setMap(mapNum);
				SetColor(white, black);
				system("cls");
				drawMap(wallColor);
				drawUI();
				pause = false;
			}
			else {
				SetColor(white, black);
				playing = false;
				pause = false;
			}
			break;
		}
	}
}

//게임클리어
void Game::GameClear() {
	SetColor(black, white);
	gotoxy(45, 10);
	cout << "              ";
	gotoxy(45, 11);
	cout << "  GAME CLEAR  ";
	gotoxy(45, 12);
	cout << "              ";
	Sleep(3000);
	SetColor(white, black);
	playing = false;
}

//일시정지
void Game::GamePause() {
	bool pause = true;
	int r = 0;
	int x = 45;
	int y = 37;

	SetColor(black, white);
	gotoxy(x - 2, y - 2);
	cout << "  일시정지  ";
	gotoxy(x - 2, y - 1);
	cout << "            ";
	gotoxy(x - 2, y);
	cout << "> 계속하기  ";
	gotoxy(x - 2, y + 1);
	cout << "  종료하기  ";
	gotoxy(x - 2, y + 2);
	cout << "            ";

	while (pause) {
		Sleep(100);

		switch (keyControl()) {
		case UP:
			if (y == 38) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, --y);
				cout << ">";
				r--;
			}
			break;
		case DOWN:
			if (y == 37) {
				gotoxy(x - 2, y);
				cout << " ";
				gotoxy(x - 2, ++y);
				cout << ">";
				r++;
			}
			break;
		case ENTER:
			if (r == 0) {
				SetColor(white, black);
				for (int i = 0; i < 6; i++) {
					gotoxy(x - 2, 34 + i);
					cout << "            ";
				}
				drawUI();
				pause = false;
			}
			else {
				SetColor(white, black);
				pause = false;
				playing = false;
			}
			break;
		}
	}
}