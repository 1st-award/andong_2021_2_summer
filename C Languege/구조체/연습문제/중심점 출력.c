// �� ���� ��ǥ�� �Է¹޾� �� ���� �߽����� ��ǥ�� �Ҽ� ù°�ڸ����� ����ϴ� ���α׷��� �����Ͻÿ�.
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
		printf("���� ��ǥ��?(x, y) ");
		scanf("%d %d", &input[i].x, &input[i].y);
	}
	return input;
}
void PrintMiddlePos(XY *_getXY) {
	printf("�߽����� ��ġ = (%.1f, %.1f)\n", (double)(_getXY[0].x+_getXY[1].x)/2, (double)(_getXY[0].y + _getXY[1].y)/2);
}
