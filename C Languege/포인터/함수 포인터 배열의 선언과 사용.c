#include <stdio.h>

void add(double *, double, double);
void substract(double *, double, double);
void multiply(double *, double, double);
void devide(double *, double, double);

void main(void) {
	double m, n, result;
	int i;
	char op[4] = {'+', '-', '*', '/'};
	void (*fpary[4])(double*, double, double) = {
		add, substract, multiply, devide};
		
	printf("사칙연산을 수행할 실수 2개를 입력하세요. >>");
	scanf("%lf %lf", &m, &n);
	
	for(i=0; i<4; ++i) {
		fpary[i](&result, m, n);
		printf("%.2lf %c %.2lf == %.2lf\n", m, op[i], n, result);
	} 
} 

void add(double *_result, double _x, double _y) {
	*_result = _x + _y;
}

void substract(double *_result, double _x, double ]_y) {
	*_result = _x - _y;
}

void multiply(double *_result, double _x, double _y) {
	*_result = _x * _y;
}

void devide(double *_result, double _x, double _y) {
	*_result = _x / _y;
}
