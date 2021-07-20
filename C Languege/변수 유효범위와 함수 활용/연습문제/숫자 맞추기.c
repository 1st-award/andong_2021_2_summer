// 1~100까지의 하나의 난수를 저장하여 유저가 값을 맞추는 프로그램을 작성하시오. 
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
	printf("1에서 100까지의 하나의 정수가 결정되었습니다.\n");
	printf("이정수를 맞추어 보세요? > "); 
}
void printHigher(int _userNumber) {
	min = _userNumber+1;
	printf("\n맞추어야 할 정수가 입력한 정수 %d보다 큽니다.\n", _userNumber); 
	printf("%d에서 %d 사이의 정수를 다시 입력하세요. > ", min, max);
}
void printLower(int _userNumber) {
	max = _userNumber-1;
	printf("\n맞추어야 할 정수가 입력한 정수 %d보다 작습니다.\n", _userNumber);
	printf("%d에서 %d 사이의 정수를 다시 입력하세요. > ", min, max);
} 
void printAnswer(int _resultNumber) {
	printf("\n축하합니다! 정답은 %d입니다.\n", _resultNumber);
}

