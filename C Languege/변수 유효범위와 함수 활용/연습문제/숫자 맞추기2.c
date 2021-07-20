// 숫자 맞추기에서 조건을 추가하여 프로그램을 작성하시오.\
- 사용자가 정답을 맞추기 위해 시도한 횟수를 저장하는 변수를 이용\
- 사용자가 정답을 맞추기 위한 시도 횟수를 최대 5로 지정  
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
	printf("\n\n정답은 %d였습니다...\n", resultNumber);	
} 

int setNumber(void) {
	srand((long)time(NULL));
	return rand()%100+1;
}
void printHead(void) {
	printf("1에서 100까지의 하나의 정수가 결정되었습니다.\n");
	printf("이정수를 맞추어 보세요? 남은횟수 %d > ", --trycount); 
}
void printHigher(int _userNumber) {
	if(--trycount==-1)	return;
	min = _userNumber+1;
	printf("\n맞추어야 할 정수가 입력한 정수 %d보다 큽니다.\n", _userNumber); 
	printf("%d에서 %d 사이의 정수를 다시 입력하세요. 남은횟수 %d > ", min, max, trycount);
}
void printLower(int _userNumber) {
	if(--trycount==-1)	return;
	max = _userNumber-1;
	printf("\n맞추어야 할 정수가 입력한 정수 %d보다 작습니다.\n", _userNumber);
	printf("%d에서 %d 사이의 정수를 다시 입력하세요. 남은횟수 %d > ", min, max, trycount);
} 
void printAnswer(int _resultNumber) {
	printf("\n축하합니다! 정답은 %d입니다.\n", _resultNumber);
}

