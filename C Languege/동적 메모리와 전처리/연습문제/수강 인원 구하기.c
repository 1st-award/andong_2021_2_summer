/*
	A ���п����� ���غ� ���� ���Ǹ� �����ϰ� �ֽ��ϴ�. �ʱ� ���� ���Ǵ� 
	���ͽ��迡�� 650~800�̸��� ������ ����� �л����� ����������� �ϰ� �ֽ��ϴ�.
	�ʱ� ���� ���ǿ� ������û�� ����� 10���� ��, �� �߿��� ����� ���� ��� �ش��ϴ��� Ȯ���Ϸ��մϴ�. 
*/
#include <stdio.h>
#include <stdlib.h>

void SetArray(int *, int);
int Audience(int *, int);
void main(void) {
	int *scores = (int*)calloc(10, sizeof(int));
	int scores_len = 10;
	SetArray(scores, scores_len);
	printf("�� ���� ��� �ο�: %d��\n", Audience(scores, scores_len));
}

void SetArray(int *_setArr, int _getLen) {
	int i;
	for(i=0; i<_getLen; ++i) {
		// scores�� ���Ҵ� 500�̻� 990 ������ �����Դϴ�. 
		printf("500~990 �ڿ����� �Է��ϼ���. >> ");
		scanf("%d", _setArr+i);
		if(*(_setArr+i)<500 || *(_setArr+i)>990) {
			puts("���� ����");
			exit(1); 
		} 
	}
}
int Audience(int *_getArr, int _getLen) {
	int i, count=0;
	for(i=0; i<_getLen; ++i) {
		if(*(_getArr+i)>=650 && *(_getArr+i)<800)
			++count;
	}
	return count;
}
