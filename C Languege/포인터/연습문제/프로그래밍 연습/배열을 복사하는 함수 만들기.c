// double�� ������ �迭�� ������ ���� �ʱ�ȭ�ϰ�, ù ��° ������ �迭 source��\
�� ��° ������ �迭 target�� �����ϴ� �Լ��� �����\
����� �˾ƺ��� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>

void copyarray(double *, double *, int);
void main (void) {
	int i;
	double ary[5] = {3.12, 5.14, 7.25, 7.48, 5.91};
	double target[5];
	double *source = ary;
	
	copyarray(source, target, 5);
	for(i=0; i<5; ++i) {
		printf("%.2lf ", target[i]);
	}
}
void copyarray(double *_source, double *_target, int _size) {
	int i;
	for(i=0; i<_size; ++i) {
		_target[i] = *(_source+i);
	}
}
