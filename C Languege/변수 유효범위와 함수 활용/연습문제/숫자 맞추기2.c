// ���� ���߱⿡�� ������ �߰��Ͽ� ���α׷��� �ۼ��Ͻÿ�.\
- ����ڰ� ������ ���߱� ���� �õ��� Ƚ���� �����ϴ� ������ �̿�\
- ����ڰ� ������ ���߱� ���� �õ� Ƚ���� �ִ� 5�� ����  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max=100, min=1, trycount=5;
int setNumber(void);
void printHead(void);
void printHigher(int);
void printLower(int);
void printAnswer(int);
void main(void) {
	int userNumber, resultNumber = setNumber();
	printHead();
	while(trycount!=-1) {
		scanf("%d", &userNumber);
		if(userNumber>resultNumber)			printLower(userNumber);
		else if(userNumber<resultNumber)	printHigher(userNumber);
		else {
			printAnswer(resultNumber);
			return;
		}
	}
	printf("\n\n������ %d�����ϴ�...\n", resultNumber);	
} 

int setNumber(void) {
	srand((long)time(NULL));
	return rand()%100+1;
}
void printHead(void) {
	printf("1���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n");
	printf("�������� ���߾� ������? ����Ƚ�� %d > ", --trycount); 
}
void printHigher(int _userNumber) {
	if(--trycount==-1)	return;
	min = _userNumber+1;
	printf("\n���߾�� �� ������ �Է��� ���� %d���� Ů�ϴ�.\n", _userNumber); 
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ���. ����Ƚ�� %d > ", min, max, trycount);
}
void printLower(int _userNumber) {
	if(--trycount==-1)	return;
	max = _userNumber-1;
	printf("\n���߾�� �� ������ �Է��� ���� %d���� �۽��ϴ�.\n", _userNumber);
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ���. ����Ƚ�� %d > ", min, max, trycount);
} 
void printAnswer(int _resultNumber) {
	printf("\n�����մϴ�! ������ %d�Դϴ�.\n", _resultNumber);
}

