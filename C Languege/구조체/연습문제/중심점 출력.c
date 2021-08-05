// 두 점의 좌표를 입력받아 두 점의 중심점의 좌표를 소수 첫째자리까지 출력하는 프로그램을 적성하시오.
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
	static XY input[2];
	int i;
	for(i=0; i<2; ++i) {
		printf("점의 좌표는?(x, y) ");
		scanf("%d %d", &input[i].x, &input[i].y);
	}
	return input;
}
void PrintMiddlePos(XY *_getXY) {
	printf("중심점의 위치 = (%.1f, %.1f)\n", (double)(_getXY[0].x+_getXY[1].x)/2, (double)(_getXY[0].y + _getXY[1].y)/2);
}
