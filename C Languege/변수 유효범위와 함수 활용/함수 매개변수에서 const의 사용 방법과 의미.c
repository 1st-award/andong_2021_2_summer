#include <stdio.h>

void multiply(double *, const double *, const double *);
void devideAndIncrement(double *, double *, double *);

void main(void) {
	double m=0, n=0, mul=0, dev=0;
	
	printf("두 실수 입력: ");
	scanf("%lf %lf", &m, &n);
	multiply(&mul, &m, &n);
	devideAndIncrement(&dev, &m, &n);
	printf("두 실수 곱: %.2f, 나눔: %.2f\n", mul, dev);
	printf("연산 후 두 실수: %.2f, %.2f\n", m, n);
}
// const 변수의 내용은 수정하지 못함 
void multiply(double *_result, const double *_numA, const double *_numB) {
	*_result = *_numA * *_numB;
	// 오류 발생
	// *a += *b;
	// *b += *a; 
}
void devideAndIncrement(double *_result, double *_numA, double *_numB) {
	*_result = *_numA / *_numB;
	++*_numA; // const가 아닌 포인터 인자 모두 수정할 수 있다. 
	(*_numB)++;	
}
