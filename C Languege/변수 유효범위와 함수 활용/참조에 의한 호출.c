#include <stdio.h>

void add(int *, int, int);

void main(void) {
	int m=0, n=0, sum=0;
	
	printf("�� ���� �Է�: ");
	scanf("%d %d", &m, &n);
	add(&sum, m, n);
	printf("�� ���� ��: %d\n", sum);
;} 

void add(int *_pointSum, int _numA, int _numB) {
	*_pointSum = _numA + _numB;
}
