/*
	0일장은 0일마다 열리는시장을 뜻합니다. 예를 들어 오늘 4일장이 열렸다면, 다음 4일장은 4일 뒤에 열립니다.
	오늘부터 a일장과 b일장 제도를 시행하려 합니다. 정수 a, b가 주어졌을 때, 
	a일장과 b일장이 같이 열리는 날은 며칠에 한 번씩 있는지 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int a, int b){
	int i; 
	// 최대 a*b만큼의 일수를 기다려야함 
	int *day = (int*)calloc(a*b, sizeof(int));
	for(i=1; i<a*b; ++i) {
		if(!(i%a))
			++day[i];
		if(!(i%b))
			++day[i];
		if(day[i] == 2)
			return i;
	}
} 

void main(void) {
	int a;
	int b;
	SetINFO(&a, &b);
	printf("Result Solution: %d\n", solution(a, b));
}
void SetINFO(int *a, int *b) {
	puts("====첫 번째 n일장 입력====");
	scanf("%d", a);
	puts("====두 번째 n일장 입력====");
	scanf("%d", b);
	// a와 b는 1 ~ 30 
	if(*a<0 || *b<0 || *a>30 || *b>30)
		exit(1);
}
