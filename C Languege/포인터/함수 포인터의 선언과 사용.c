#include <stdio.h>

void add(double*, double, double);
void substract(double*, double, double);

void main(void) {
	double m, n, result=0;
	void (*pf)(double*, double, double) = NULL;
	printf("+, -를 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);
	
	pf = add;
	pf(&result, m, n);
	printf("pf = %p, 함수 add() 주소 = %p\n", pf, add);
	printf("더하기 수행: %lf + %lf == %lf\n\n", m, n, result);
	
	pf = substract;
	pf(&result, m, n);
	printf("pf = %p, 함수 substract() 주소 = %p\n", pf, substract);
	printf("빼기 수행: %lf - %lf == %lf\n\n", m, n, result);
}

void add(double *_result, double _x, double _y) {
	*_result = _x + _y;
}

void substract(double *_result, double _x, double _y) {
	*_result = _x - _y;
}
