// 사용자와 프로그램이 가위, 바위, 보 게임을 하는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
	char *rps[] = {"가위", "바위", "보"};
	int computerSelect, userSelect;
	srand((long)time(NULL));
	
	printf("가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
	scanf("%d", &userSelect);
	computerSelect = rand()%3;
	
	printf("당신: %s, COM: %s\n", rps[userSelect], rps[computerSelect]);
	if(userSelect == computerSelect%3+1)	puts("당신의 승리입니다.");
	else if(userSelect == computerSelect)	puts("비겼습니다.");
	else	puts("당신의 패배입니다");
} 
