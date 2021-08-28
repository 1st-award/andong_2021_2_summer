// 주식 최대 수익 구하기 정답
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int max(int a, int b) {
	return a<b ? b:a;
} 

int min(int a, int b) {
	return a<b ? a:b;
}

int solution(int prices[], size_t prices_len) {
	int inf = 1000000001;
	int mn = inf;
	int ans = -inf;
	int i;
	for(i=0; i<prices_len; ++i) {
		// 최대값, 현재값 - 최소값 최대값 구하기 
		ans = max(ans, prices[i]-mn);
		// 최소값, 현재값 최소값 구하기 
		mn = min(mn, prices[i]);
	}
	return ans;
}

void main(void) {
	int prices[] = {4, 3, 1, 4};
	int prices_len = 4;
	printf("Result Solution: %d\n", solution(prices, prices_len));
}
