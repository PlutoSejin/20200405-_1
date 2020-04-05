#include <Bangtal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#pragma comment(lib, "Bangtal.lib")
const int nMAX = 3;

SceneID scene1, scene2, scene3;
ObjectID p[9];
ObjectID startButton, endButton, restartButton;
ObjectID px[9], py[9];
ObjectID p_x[3] = { 0,426,853 };
ObjectID p_y[3] = { 0,240,480 };
bool bCheckExistOfNum[4][4] = { false, };
bool xCheckExistofNum[4] = { false, };
bool checked[10] = { false, };

ObjectID createObject(const char* name, const char* image, SceneID scene, int x, int y) {
	ObjectID object = createObject(name, image);
	locateObject(object, scene, x, y);
	showObject(object);
	return object;
}

void random() {
	srand((unsigned)time(NULL));
	int cnt = 0;

	for (int i = 0; i < nMAX; )
	{
		int nTemp_x = rand() % 3;
		if (xCheckExistofNum[nTemp_x] == false)
		{
			xCheckExistofNum[nTemp_x] = true;
			for (int j = 0; j < nMAX;)
			{
				int nTemp_y = rand() % 3;
				if (bCheckExistOfNum[nTemp_x][nTemp_y] == false)
				{
					bCheckExistOfNum[nTemp_x][nTemp_y] = true;

					px[cnt] = p_x[nTemp_x];
					py[cnt] = p_y[nTemp_y];
					cnt++;
					++j;
				}
			}
			++i;
		}
	}
}




void mouseCallback(ObjectID object, int x, int y, MouseAction  action) {
	int temp;
	int x1 = 0, x2 = 426, x3 = 853;
	int y1 = 0, y2 = 240, y3 = 480;
	if (object == startButton) {
		enterScene(scene1);
	}
	else if (object == restartButton) {
		enterScene(scene1);
	}
	else if (object == endButton) {
		endGame();
	}
	else if (object == p[0]) {

		temp = px[0];
		px[0] = px[8];
		px[8] = temp;
		temp = py[0];
		py[0] = py[8];
		py[8] = temp;
		p[0] = createObject("퍼즐1", "ㅇㅇ_001.jpg", scene1, px[0], py[0]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[0] == x1 && py[0] == y3) {
			checked[0] = true;
		}
		else
		{
			checked[0] = false;
		}
	}
	else if (object == p[1]) {
		temp = px[1];
		px[1] = px[8];
		px[8] = temp;
		temp = py[1];
		py[1] = py[8];
		py[8] = temp;
		p[1] = createObject("퍼즐2", "ㅇㅇ_002.jpg", scene1, px[1], py[1]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[1] == x2 && py[1] == y3) {
			checked[1] = true;
		}
		else
		{
			checked[1] = false;
		}

	}
	else if (object == p[2]) {
		temp = px[2];
		px[2] = px[8];
		px[8] = temp;
		temp = py[2];
		py[2] = py[8];
		py[8] = temp;
		p[2] = createObject("퍼즐3", "ㅇㅇ_003.jpg", scene1, px[2], py[2]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[2] == x3 && py[2] == y3) {
			checked[2] = true;
		}
		else
		{
			checked[2] = false;
		}

	}
	else if (object == p[3]) {
		temp = px[3];
		px[3] = px[8];
		px[8] = temp;
		temp = py[3];
		py[3] = py[8];
		py[8] = temp;
		p[3] = createObject("퍼즐4", "ㅇㅇ_004.jpg", scene1, px[3], py[3]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[3] == x1 && py[3] == y2) {
			checked[3] = true;
		}
		else
		{
			checked[3] = false;
		}

	}
	else if (object == p[4]) {
		temp = px[4];
		px[4] = px[8];
		px[8] = temp;
		temp = py[4];
		py[4] = py[8];
		py[8] = temp;
		p[4] = createObject("퍼즐5", "ㅇㅇ_005.jpg", scene1, px[4], py[4]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[4] == x2 && py[4] == y2) {
			checked[4] = true;
		}
		else
		{
			checked[4] = false;
		}

	}
	else if (object == p[5]) {
		temp = px[5];
		px[5] = px[8];
		px[8] = temp;
		temp = py[5];
		py[5] = py[8];
		py[8] = temp;
		p[5] = createObject("퍼즐6", "ㅇㅇ_006.jpg", scene1, px[5], py[5]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[5] == x3 && py[5] == y2) {
			checked[5] = true;
		}
		else
		{
			checked[5] = false;
		}

	}
	else if (object == p[6]) {
		temp = px[6];
		px[6] = px[8];
		px[8] = temp;
		temp = py[6];
		py[6] = py[8];
		py[8] = temp;
		p[6] = createObject("퍼즐7", "ㅇㅇ_007.jpg", scene1, px[6], py[6]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[6] == x1 && py[6] == y1) {
			checked[6] = true;
		}
		else
		{
			checked[6] = false;
		}

	}
	else if (object == p[7]) {
		temp = px[7];
		px[7] = px[8];
		px[8] = temp;
		temp = py[7];
		py[7] = py[8];
		py[8] = temp;
		p[7] = createObject("퍼즐8", "ㅇㅇ_008.jpg", scene1, px[7], py[7]);
		p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);
		if (px[7] == x2 && py[7] == y1) {
			checked[7] = true;
		}
		else
		{
			checked[7] = false;
		}
	}
	else if (object == p[8]) {
		if (px[8] == x3 && py[8] == y1) {
			checked[8] = true;
		}
		else
		{
			checked[8] = false;
		}
		for (int i = 0; i <= 8; i++) {
			if (checked[i] == true) {
				enterScene(scene3);
			}
		}


	}

}



int main() {
	scene1 = createScene("틀린그림찾기", "흰색.jpg");
	scene2 = createScene("틀린그림찾기", "ㅇㅇ.jpg");
	scene3 = createScene("틀린그림찾기", "end.jpg");
	setMouseCallback(mouseCallback);

	random();


	startButton = createObject("시작 버튼", "start.png", scene2, 590, 70);
	restartButton = createObject("시작 버튼", "restart.png", scene3, 590, 70);
	endButton = createObject("끝 버튼", "end.png", scene3, 590, 201);


	p[0] = createObject("퍼즐1", "ㅇㅇ_001.jpg", scene1, px[0], py[0]);
	p[1] = createObject("퍼즐2", "ㅇㅇ_002.jpg", scene1, px[1], py[1]);
	p[2] = createObject("퍼즐3", "ㅇㅇ_003.jpg", scene1, px[2], py[2]);
	p[3] = createObject("퍼즐4", "ㅇㅇ_004.jpg", scene1, px[3], py[3]);
	p[4] = createObject("퍼즐5", "ㅇㅇ_005.jpg", scene1, px[4], py[4]);
	p[5] = createObject("퍼즐6", "ㅇㅇ_006.jpg", scene1, px[5], py[5]);
	p[6] = createObject("퍼즐7", "ㅇㅇ_007.jpg", scene1, px[6], py[6]);
	p[7] = createObject("퍼즐8", "ㅇㅇ_008.jpg", scene1, px[7], py[7]);
	p[8] = createObject("여백", "blank.png", scene1, px[8], py[8]);


	startGame(scene2);

}