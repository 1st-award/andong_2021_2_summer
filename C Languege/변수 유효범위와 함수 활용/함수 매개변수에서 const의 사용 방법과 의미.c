#include <stdio.h>

void multiply(double *, const double *, const double *);
void devideAndIncrement(double *, double *, double *);

void main(void) {
	double m=0, n=0, mul=0, dev=0;
	
	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", &m, &n);
	multiply(&mul, &m, &n);
	devideAndIncrement(&dev, &m, &n);
	printf("�� �Ǽ� ��: %.2f, ����: %.2f\n", mul, dev);
	printf("���� �� �� �Ǽ�: %.2f, %.2f\n", m, n);
}
// const ������ ������ �������� ���� 
void multiply(double *_result, const double *_numA, const double *_numB) {
	*_result = *_numA * *_numB;
	// ���� �߻�
	// *a += *b;
	// *b += *a; 
}
void devideAndIncrement(double *_result, double *_numA, double *_numB) {
	*_result = *_numA / *_numB;
	++*_numA; // const�� �ƴ� ������ ���� ��� ������ �� �ִ�. 
	(*_numB)++;	
}
