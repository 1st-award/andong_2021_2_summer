#include <stdio.h>

int *add(int *, int, int);
int *substract(int *, int, int);
int *multiply(int, int);

void main(void) {
	int m=0, n=0, sum=0, diff=0;
	
	printf("�� ���� �Է�: ");
	scanf("%d %d", &m, &n);
	
	printf("�� ���� ��: %d\n", *add(&sum, m, n));
	printf("�� ���� ��: %d\n", *substract(&sum, m, n));
	printf("�� ���� ��: %d\n", *multiply(m, n));
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
	return &mul;	// ���������� ��ȯ�� ��� �߻��Ѵ� ����\
					���������� �ּҰ��� ��ȯ���� �ʴ� ���� �ٶ����ϴ�. 
}
