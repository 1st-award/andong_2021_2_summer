// 2차원 배열의  원소값을 수식에 맞게 증가시키기
#include <stdio.h>

void increment(int(*)[4], int, int);
void main(void) {
	int arr[3][4] = {12, 30, 82, 54, 43, 51, 32, 47, 30, 42, 41, 69};
	int i, j;
	
	puts("====Before====");
	for(i=0; i<3; ++i) {
		for(j=0; j<4; ++j) {
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
	
	increment(arr, 4, 3);
	puts("====After====");
	for(i=0; i<3; ++i) {
		for(j=0; j<4; ++j) {
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
} 

void increment(int (*_arr)[4], int _sizeX, int _sizeY) {
	int i, j;
	for(i=0; i<_sizeY; ++i) {
		for(j=0; j<_sizeX; ++j) {
			_arr[i][j] = _arr[i][j] * 10 + 2;
		}
	}	
}
