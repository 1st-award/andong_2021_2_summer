#include <stdio.h>

void main (void) {
	int data = 100;
	int *prt;
	prt = &data;
	
	printf("������ �ּҰ�: %u\n", prt);
	printf("������ ������ ũ��: %d\n", sizeof(prt));
}
