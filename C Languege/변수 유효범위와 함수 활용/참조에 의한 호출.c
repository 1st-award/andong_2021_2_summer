#include <stdio.h>

void add(int *, int, int);

void main(void) {
	int m=0, n=0, sum=0;
	
	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);
	add(&sum, m, n);
	printf("두 정수 합: %d\n", sum);
;} 

void add(int *_pointSum, int _numA, int _numB) {
	*_pointSum = _numA + _numB;
}
