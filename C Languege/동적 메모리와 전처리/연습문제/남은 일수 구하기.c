/* 
	시작 날짜와 끝 날짜가 주어질 때, 두 날짜가 며칠만큼 떨어져 있는지(D-Day)를 구하려 합니다.
	이를 위해 다음과 같이 3단계로 간단히 프로그램 구조를 작성했습니다. (단, 윤년은 고려하지 않습니다.)
	
	1단계. 시작 날짜가 1월 1일로부터 며칠만큼 떨어져 있는지 구합니다.
	2단계. 끝 날짜가 1월 1일로부터 며칠만큼 떨어져 있는지 구합니다.
	3단계. (2단계에서 구한 날짜) - (1단계에서 구한 날짜)를 구합니다.
*/
#include <stdio.h>
#include <stdlib.h>

void SetDay(int *, int *, int *, int *);
int CalcDay(int *, int *, int *, int *);
void main(void) {
	int *start_month = (int*)malloc(sizeof(int));
	int *start_day = (int*)malloc(sizeof(int));
	int *end_month = (int*)malloc(sizeof(int));
	int *end_day = (int*)malloc(sizeof(int));
	
	SetDay(start_month, start_day, end_month, end_day);
	printf("시작 날짜와 종료 날짜의 차이 %d\n", 
			CalcDay(start_month, start_day, end_month, end_day));
	 
} 

void SetDay(int *_setStartMonth, int *_setStartDay, int *_setEndMonth, int *_setEndDay) {
	printf("시작 월, 일을 입력: ");
	scanf("%d %d", _setStartMonth, _setStartDay);
	printf("종료 월, 일을 입력: ");
	scanf("%d %d", _setEndMonth, _setEndDay); 
}
int CalcDay(int *_getStartMonth, int *_getStartDay, int *_getEndMonth, int *_getEndDay) {
	int Month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i;
	
	if(*_getStartMonth == *_getEndMonth)
		return *_getEndDay - *_getStartDay;
	else if(*_getStartMonth > *_getEndMonth) {
		puts("조건 오류\nstart_month <= end_month를 항상 만족합니다.");
		exit(-1);
	}
	else {
		for(i=*_getStartMonth-1; i>=1; --i) {
			*_getStartDay += Month[i-1];
		}
		for(i=*_getEndMonth-1; i>=1; --i) {
			*_getEndDay += Month[i-1];
		}
		// printf("%d %d\n", *_getEndDay, *_getStartDay);
		return *_getEndDay - *_getStartDay;
	}
}
