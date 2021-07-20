// 배열에서 모든 원소의 값을 모두 n씩 증가시키는 프로그램을 작성하시오.

#include <stdio.h> 

void increment(int*, int, int);
void main(void) {
	int data[] = {3, 21, 35, 57, 24, 82, 8};
	int n, i;
	
	printf("증가시킬 정수 입력: ");
	scanf("%d", &n);
	
	increment(data, 7, n);
	for(i=0; i<7; ++i) {
		printf("%d ", data[i]);
	}
}
void increment(int *_p, int _size, int _n) {
	int i;
	for(i=0; i<_size; ++i) {
		_p[i]+=_n;
	}
}
