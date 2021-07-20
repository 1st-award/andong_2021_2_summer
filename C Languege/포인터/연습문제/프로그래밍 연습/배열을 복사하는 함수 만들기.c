// double형 일차원 배열을 다음과 같이 초기화하고, 첫 번째 인자인 배열 source를\
두 번째 인자인 배열 target에 복사하는 함수를 만들어\
결과를 알아보는 프로그램을 작성하시오. 
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
