/*
	369 게임은 여러 명이 같이하는 게임입니다. 게임의 규칙은 아래와 같습니다.
	1. 1부터 시작합니다.
	2. 한 사람씩 차례대로 숫자를 1씩 더해가며 말합니다.
	3. 말해야 하는 숫자에 3, 6, 9중 하나라도 포함되어있다면
	   숫자를 말하는 대신 숫자에 포함된 3, 6, 9의 개수만큼 손뼉을 칩니다.
*/
#include <stdio.h>
#include <stdlib.h>

void SetNumber(int*);
int CalcClap(int);
void main(void) {
	int number;
	SetNumber(&number);
	printf("%d번까지 총 %d번의 박수를 칩니다.\n", number, CalcClap(number));
	return; 
}

void SetNumber(int *_setNum) {
	printf("10 ~ 1000 사이의 자연수 입력: ");
	scanf("%d", _setNum);
	if(*_setNum<10 || *_setNum>1000) {
		puts("조건 오류");
		exit(1);
	}
}
int CalcClap(int _getNum) {
	int i, j, clap = 0;
	int *numPos = (int*)calloc(3, sizeof(int));
	for(i=0; i<=_getNum; ++i) {
		// 1의 자리 일 때 
		if(i<10) {
			numPos[0] = i%10;
		}
		// 10의 자리 일 때 
		else if(i<100) {
			numPos[0] = i%10;
			numPos[1] = i/10;			
		}
		// 100의 자리 일 때 (1000은 어차피 박수를 안치므로 제외) 
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
