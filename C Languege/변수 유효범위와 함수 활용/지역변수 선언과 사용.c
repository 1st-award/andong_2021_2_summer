#include <stdio.h>

void main(void) {
	int m;
	int n = 10;
	
	printf("%d %d\n", m, n);
	for(m=0; m<3; ++m) {
		// 지역변수 선언 (auto생략 가능) 
		auto int sum = 0;
		sum += m;
		printf("%d %d\n", m, sum);
	}
	// printf("%d %d\n", m, sum) // sum 참조 불가능 
} 
