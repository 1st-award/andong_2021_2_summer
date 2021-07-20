#include <stdio.h>

void add(double*, double, double);
void substract(double*, double, double);

void main(void) {
	double m, n, result=0;
	void (*pf)(double*, double, double) = NULL;
	printf("+, -�� ������ �Ǽ� 2���� �Է��ϼ���. >> ");
	scanf("%lf %lf", &m, &n);
	
	pf = add;
	pf(&result, m, n);
	printf("pf = %p, �Լ� add() �ּ� = %p\n", pf, add);
	printf("���ϱ� ����: %lf + %lf == %lf\n\n", m, n, result);
	
	pf = substract;
	pf(&result, m, n);
	printf("pf = %p, �Լ� substract() �ּ� = %p\n", pf, substract);
	printf("���� ����: %lf - %lf == %lf\n\n", m, n, result);
}

void add(double *_result, double _x, double _y) {
	*_result = _x + _y;
}

void substract(double *_result, double _x, double _y) {
	*_result = _x - _y;
}
