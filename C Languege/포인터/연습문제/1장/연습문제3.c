// 다음 각 변수의 시작 주소가 다음과 같다면 나머지 출력 결과를 쓰시오 
#include <stdio.h>

void main (void) {
	char c = 'A';
	int n = 10;
	long l  = 10l;
	float f = 5.25f;
	double d = 5.25;
	
	printf("%x\n", &c); // 62fe1f
	printf("%x\n", &n); // 62fe18
	printf("%x\n", &l); // 62fe14
	printf("%x\n", &f); // 62fe10
	printf("%x\n", &d); // 62fe08
	puts("===========");
	printf("%x\n", &(c+1)); // 62fe20
	printf("%x\n", &n+1); // 62fe1c
	printf("%x\n", &l+1); // 62fe18
	printf("%x\n", &f+1); // 62fe14
	printf("%x\n", &d+1); // 62fe10
}
