// 1~100������ �ϳ��� ������ �����Ͽ� ������ ���� ���ߴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max=100, min=1;
int setNumber(void);
void printHead(void);
void printHigher(int);
void printLower(int);
void printAnswer(int);
void main(void) {
	int userNumber, resultNumber = setNumber();
	printHead();
	do {
		scanf("%d", &userNumber);
		if(userNumber>resultNumber)			printLower(userNumber);
		else if(userNumber<resultNumber)	printHigher(userNumber);
		else printAnswer(resultNumber);
	}while(resultNumber!=userNumber); 
} 

int setNumber(void) {
	srand((long)time(NULL));
	return rand()%100+1;
}
void printHead(void) {
	printf("1���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n");
	printf("�������� ���߾� ������? > "); 
}
void printHigher(int _userNumber) {
	min = _userNumber+1;
	printf("\n���߾�� �� ������ �Է��� ���� %d���� Ů�ϴ�.\n", _userNumber); 
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ���. > ", min, max);
}
void printLower(int _userNumber) {
	max = _userNumber-1;
	printf("\n���߾�� �� ������ �Է��� ���� %d���� �۽��ϴ�.\n", _userNumber);
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ���. > ", min, max);
} 
void printAnswer(int _resultNumber) {
	printf("\n�����մϴ�! ������ %d�Դϴ�.\n", _resultNumber);
}

