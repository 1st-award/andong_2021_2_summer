// �� ������ �迭�� ���ϱ�� ���⸦ �����ϴ� �Լ��� �����\
�迭�� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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
