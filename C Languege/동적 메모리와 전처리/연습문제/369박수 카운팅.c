/*
	369 ������ ���� ���� �����ϴ� �����Դϴ�. ������ ��Ģ�� �Ʒ��� �����ϴ�.
	1. 1���� �����մϴ�.
	2. �� ����� ���ʴ�� ���ڸ� 1�� ���ذ��� ���մϴ�.
	3. ���ؾ� �ϴ� ���ڿ� 3, 6, 9�� �ϳ��� ���ԵǾ��ִٸ�
	   ���ڸ� ���ϴ� ��� ���ڿ� ���Ե� 3, 6, 9�� ������ŭ �ջ��� Ĩ�ϴ�.
*/
#include <stdio.h>
#include <stdlib.h>

void SetNumber(int*);
int CalcClap(int);
void main(void) {
	int number;
	SetNumber(&number);
	printf("%d������ �� %d���� �ڼ��� Ĩ�ϴ�.\n", number, CalcClap(number));
	return; 
}

void SetNumber(int *_setNum) {
	printf("10 ~ 1000 ������ �ڿ��� �Է�: ");
	scanf("%d", _setNum);
	if(*_setNum<10 || *_setNum>1000) {
		puts("���� ����");
		exit(1);
	}
}
int CalcClap(int _getNum) {
	int i, j, clap = 0;
	int *numPos = (int*)calloc(3, sizeof(int));
	for(i=0; i<=_getNum; ++i) {
		// 1�� �ڸ� �� �� 
		if(i<10) {
			numPos[0] = i%10;
		}
		// 10�� �ڸ� �� �� 
		else if(i<100) {
			numPos[0] = i%10;
			numPos[1] = i/10;			
		}
		// 100�� �ڸ� �� �� (1000�� ������ �ڼ��� ��ġ�Ƿ� ����) 
		else if(i<1000) {
			numPos[0] = i%10;
			numPos[1] = (i/10)%10;
			numPos[2] = i/100;
		}
		for(j=0; j<3; ++j) {
			if((*(numPos+j)%3==0) && (*(numPos+j)!=0)) {
				++clap;
			}
		}
	}
	return clap;
}
