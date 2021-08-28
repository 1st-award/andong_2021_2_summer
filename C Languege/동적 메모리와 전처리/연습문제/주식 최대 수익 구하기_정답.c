// �ֽ� �ִ� ���� ���ϱ� ����
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
		// �ִ밪, ���簪 - �ּҰ� �ִ밪 ���ϱ� 
		ans = max(ans, prices[i]-mn);
		// �ּҰ�, ���簪 �ּҰ� ���ϱ� 
		mn = min(mn, prices[i]);
	}
	return ans;
}

void main(void) {
	int prices[] = {4, 3, 1, 4};
	int prices_len = 4;
	printf("Result Solution: %d\n", solution(prices, prices_len));
}
