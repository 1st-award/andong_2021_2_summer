// 정수형 배열 pascal[10][10]을 이용하여 파스칼 삼각형을 생성하는 함수와\
삼각형을 출력하는 함수를 만드시오.
#include <stdio.h>

void pascaltriangle(int (*)[10], int);
void triangleprint(int (*)[10], int);
void main(void) {
	int i, j;
	int pascal[10][10];
	
	// pascal 초기화
	for(i=0; i<10; ++i)
		for(j=0; j<10; ++j)	pascal[i][j]=0;
	// ====파스칼 삼각형을 이차원 배열p에 생성하는 함수====
	pascaltriangle(pascal, 10);
	// ====삼각형만 출력하는 함수====
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
