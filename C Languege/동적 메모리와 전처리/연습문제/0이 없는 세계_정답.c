// 0이 없는 세계 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long num) {
	num++;
	long long digit = 1;
	// 1의 자리부터 마지막 0까지 0 -> 1 변환 
	while(num / digit % 10 == 0) {
		num+=digit;
		digit *= 10;
	}
	return num;
} 

void main(void) {
	// 1 ~ 999999999999999999999 이하의 0을 포함하지 않는 자연수 
	long num = 8899;
	printf("Result Solution: %d\n", solution(num));
}
