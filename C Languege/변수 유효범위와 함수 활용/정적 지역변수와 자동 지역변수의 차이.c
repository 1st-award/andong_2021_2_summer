#include <stdio.h>

void increment(void);
void main(void) {
	int count = 0;
	for( ; count<3; ++count) {
		increment();
	}
}

void increment(void) {
	static int indexS = 1;	// 정적 지역변수 
	auto int indexA = 1;	// 자동지역 변수 
	printf("정적 지역변수 indexS: %2d,\t", indexS++);
	printf("자동 지역변수 indexA: %2d\n", indexA++);
}
