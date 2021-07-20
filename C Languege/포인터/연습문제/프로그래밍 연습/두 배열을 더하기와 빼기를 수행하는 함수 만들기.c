// 두 이차원 배열의 더하기와 빼기를 수행하는 함수를 만들어\
배열의 연산 결과를 출력하는 프로그램을 작성하시오. 
#include <stdio.h>

void add(double (*)[3], double (*)[3]);
void sub(double (*)[3], double (*)[3]);
void main(void) {
	double arrA[2][3] = {4.2, 4.3, 3.8, 3.7, 1.5, 0.7};
	double arrB[2][3] = {5.2, 2.1, 1.8, 3.7, 1.5, 0.7};
	add(arrA, arrB);
	sub(arrA, arrB);
} 

void add(double (*_arrA)[3], double (*_arrB)[3]) {
	int i, j;
	puts("====ADD====");
	for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("%.1lf ", _arrA[i][j] + _arrB[i][j]);
		}
		puts("");
	}
}
void sub(double (*_arrA)[3], double (*_arrB)[3]) {
	int i, j;
	puts("====SUB====");
		for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("%.1lf ", _arrA[i][j] - _arrB[i][j]);
		}
		puts("");
	}
}
