// 서로 겹치는 장의 일수 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
	int answer = 0;
	int i;
	for(i = 1; i<=b; ++i) {
		if((a*i) % b == 0) {
			answer = a*i;
			break;
		}
	}
	return answer;
}
void main(void) {
	int a = 4;
	int b = 6;
	int ret = solution(a, b);
	printf("Result Solution: %d\n", ret);
}
