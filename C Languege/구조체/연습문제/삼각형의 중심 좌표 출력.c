// �ﰢ���� �� �������� ��ǥ�� �Է¹޾� �ﰢ���� �����߽��� �Ҽ� ù°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
	printf("�� �������� ��ǥ�� �Է��ϼ���. ");
	for(i=0; i<3; ++i) {
		scanf("%d %d", &input[i].x, &input[i].y);
	}
	return input;
}
void PrintMiddlePos(XY *_getPos) {
	printf("�����߽��� ��ǥ = (%.1f %.1f)\n", 
			(double)(_getPos[0].x + _getPos[1].x + _getPos[2].x)/3,
			(double)(_getPos[0].y + _getPos[1].y + _getPos[2].y)/3);
}
