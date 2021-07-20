// 배열 포인터를 이용하여 이차원 배열의 모든 원소 값을\
 5씩 증가시키는 프로그램을 작성하시오.
#include <stdio.h>
void main(void) {
	int ary[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*ptr)[5] = ary;
	int i, j;
	
	for(i=0; i<2; ++i) {
		for(j=0; j<5; ++j) {
			ptr[i][j] += 5;
		}
	}
	
	for(i=0; i<2; ++i) {
		for(j=0; j<5; ++j) {
			printf("%2d ", ary[i][j]);
		}
		puts("");
	}
}
