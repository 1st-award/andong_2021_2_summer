// 행렬의 곱을 수행하는 프로그램을 작성하시오.
#include <stdio.h>

void multiply(double (*)[3], double (*)[2], double(*)[2]);
void main(void) {
	int i, j;
	double arrA[2][3] = {4.2, 4.3, 3.8, 3.7, 1.5, 0.7};
	double arrB[3][2] = {5.2, 2.1, 3.2, 1.4, 1.5, 3.6};
	double arrC[2][2] = {0.0, 0.0, 0.0, 0.0};
	multiply(arrA, arrB, arrC);
	for(i=0; i<2; ++i) {
		for(j=0; j<2; ++j) {
			printf("%.2lf ", arrC[i][j]);
		}
		puts("");
	}
} 

void multiply(double (*_arrA)[3], double (*_arrB)[2], double(*_arrC)[2]) {
	int i, j, k;
	
	for(i=0; i<2; ++i) {
		for(j=0; j<2; ++j) {
			for(k=0; k<3; ++k) {
				printf("%lf %lf\n", _arrA[j][k], _arrB[k][j]);
				_arrC[i][j] += _arrA[j][k] * _arrB[k][j];
			}
			puts("");
		}
	}
}
