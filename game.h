#include "main.h"

#ifndef GAME_CLASS
#define GAME_CLASS

struct pos {
	int x;
	int y;
	bool dir;
};

class Game {
private:
	bool playing;
	int wallColor;
	int mapNum;
	int keyCount;
	int itemCount;
	int posX;
	int posY;
	int spawnX;
	int spawnY;
	int life;
	int obstacleCount;
	pos obstaclePos[100];
	void Init();
	int keyControl();
	int drawMapList();
	void drawMap(int);
	void setMap(int);
	void move(int, int);
	void drawPlayer(int, int);
	void drawUI();
	void gameReset();
	void obstacleMove();
	void GameOver();
	void GameClear();
	void GamePause();
public:
	Game() {
		playing = false;
		Init();
	};
	void drawTitle();
	int drawMenu();
	void drawHelp();
	void gStart();
};

#endif

#ifndef KEYINPUT
#define KEYINPUT

enum {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	ENTER,
	ESC
};

#endif

#ifndef MAP_NAME
#define MAP_NAME

enum {
	forest,
	snow,
	desert
};

#endif