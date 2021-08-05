// 문자열을 선언하고 "jungol olympiad"로 초기화 한 후 0~14 사이의 정수 5개를\
입력 받아 문자열에서 해당하는 위치의 문자를 차례로 출력하는 프로그램을 작성시오.
#include <stdio.h>
#include <stdlib.h>

int *GetPosition(void);
void PrintString(int *, char *);
void main(void) {
	char *str = "jungol olympiad";
	PrintString(GetPosition(), str);
} 

int *GetPosition(void) {
	int i;
	int *arr = (int*)malloc(sizeof(int)*5);
	for(i=0; i<5; ++i) {
		scanf("%d", arr+i);
	}
	return arr;
}
void PrintString(int *_getArr, char *_getString) {
	int i;
	for(i=0; i<5; ++i) {
		printf("%c", *(_getString+*(_getArr+i)));
	}
}
