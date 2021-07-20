#include <stdio.h>

int *add(int *, int, int);
int *substract(int *, int, int);
int *multiply(int, int);

void main(void) {
	int m=0, n=0, sum=0, diff=0;
	
	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);
	
	printf("두 정수 합: %d\n", *add(&sum, m, n));
	printf("두 정수 차: %d\n", *substract(&sum, m, n));
	printf("두 정수 곱: %d\n", *multiply(m, n));
}

int *add(int *_result, int _numA, int _numB) {
	*_result = _numA + _numB;
	return _result;
}
int *substract(int *_result, int _numA, int _numB) {
	*_result = _numA - _numB;
	return _result;
}
int *multiply(int _numA, int _numB) {
	int mul = _numA * _numB;
	return &mul;	// 지역변수를 반환시 경고가 발생한다 따라서\
					지역변수의 주소값을 반환하지 않는 것이 바람직하다. 
}
