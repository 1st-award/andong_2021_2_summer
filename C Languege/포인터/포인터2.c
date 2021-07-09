#include <stdio.h>

void main (void) {
	int data = 100;
	int *prt;
	prt = &data;
	
	printf("십진수 주소값: %u\n", prt);
	printf("포인터 변수의 크기: %d\n", sizeof(prt));
}
