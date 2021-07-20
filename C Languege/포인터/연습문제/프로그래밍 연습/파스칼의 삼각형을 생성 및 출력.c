// ������ �迭 pascal[10][10]�� �̿��Ͽ� �Ľ�Į �ﰢ���� �����ϴ� �Լ���\
�ﰢ���� ����ϴ� �Լ��� ����ÿ�.
#include <stdio.h>

void pascaltriangle(int (*)[10], int);
void triangleprint(int (*)[10], int);
void main(void) {
	int i, j;
	int pascal[10][10];
	
	// pascal �ʱ�ȭ
	for(i=0; i<10; ++i)
		for(j=0; j<10; ++j)	pascal[i][j]=0;
	// ====�Ľ�Į �ﰢ���� ������ �迭p�� �����ϴ� �Լ�====
	pascaltriangle(pascal, 10);
	// ====�ﰢ���� ����ϴ� �Լ�====
	triangleprint(pascal, 10); 
} 
void pascaltriangle(int (*_pascal)[10], int _size) {
	int i, j;
	for(i=0; i<_size; ++i) {
		for(j=0; j<=i; ++j) {
			if(j==0)	_pascal[i][j] = 1;
			else if(j==i)	_pascal[i][j] = 1;
			else	_pascal[i][j] = _pascal[i-1][j] + _pascal[i-1][j-1];
		}
	}
}

void triangleprint(int (*_pascal)[10], int _size) {
	int i, j;
	for(i=0; i<_size; ++i) {
		for(j=0; j<_size; ++j) {
			if(_pascal[i][j]!=0)	printf("%3d ", _pascal[i][j]);
		}
		puts("");
	}
}
