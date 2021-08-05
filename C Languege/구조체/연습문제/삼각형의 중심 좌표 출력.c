// 삼각형의 세 꼭지점의 좌표를 입력받아 삼각형의 무게중심의 소수 첫째자리까지 출력하는 프로그램을 작성하시오.
#include <stdio.h>

typedef struct XYpos {
	int x;
	int y;
} XY;

XY *InputPos(void);
void PrintMiddlePos(XY *);

void main(void) {
	PrintMiddlePos(InputPos());
}

XY *InputPos(void) {
	static XY input[3];
	int i;
	printf("세 꼭지점의 좌표를 입력하세요. ");
	for(i=0; i<3; ++i) {
		scanf("%d %d", &input[i].x, &input[i].y);
	}
	return input;
}
void PrintMiddlePos(XY *_getPos) {
	printf("무게중심의 좌표 = (%.1f %.1f)\n", 
			(double)(_getPos[0].x + _getPos[1].x + _getPos[2].x)/3,
			(double)(_getPos[0].y + _getPos[1].y + _getPos[2].y)/3);
}
