/*
	상수도 요금을 계산하려 합니다. 가정용 상수도 사용요금 계산방법은 아래와 같습니다.
	=====
	1단계 -> 0~20톤		-> 430원
	2단계 -> 21~30톤	-> 570원
	3단계 -> 31톤 이상	-> 840원 
	=====
	총 사용요금을 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *);
int solution(int usage) {
	// 20톤 이하로 사용 
	if(usage<21)
		return usage*430;
	// 30톤 이하로 사용 
	else if(usage<31)
		// 1단계 최대요금 8600 + (사용량-20) * 2단계 요금 
		return 8600 + (usage-20)*570;
	// 31톤 이상 사용 
	else
		// 1, 2단계 최대요금 14300 + (사용량-30) * 3단계 요금 
		return 14300 + (usage-30)*840; 
}

void main(void) {
	int usage;
	SetINFO(&usage);
	printf("Result Solution: %d\n", solution(usage));
}
void SetINFO(int *usage) {
	puts("====사용량 입력====");
	scanf("%d", usage);
	// 사용량은 0 ~ 100 
	if(*usage<0 || *usage>100)
		exit(1);
}
 
