/*
	지난 연속된 n일 동안의 주식 가격이 순서대로 들어있는 배열이 있습니다. 
	이때, 다음 규칙에 따라 주식을 사고 팔았을 때의 최대 수익을 구하려 합니다. 
	====
	1. n일 동안 주식을 단 한 번 살 수 있습니다.
	2. n일 동안 주식을 단 한 번 팔 수 있습니다.
	3. 주식을 산 날에 바로 팔 수는 없으며, 최소 하루가 지나야 팔 수 있습니다.
	4. 적어도 한 번은 주식을 사야하며, 한번은 팔아야 합니다.
	====
	주식을 팔 때는 반드시 이전에 주식을 샀어야 하며, 최대 수익은 양수가 아닐 수도 있습니다. 
*/ 
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*, int*);
int solution(int price[], int price_len) {
	int i, j, break_even_point= -1000001;
	for(i=0; i<price_len-1; ++i) {
		for(j=i+1; j<price_len; ++j)
			if(break_even_point < price[j] - price[i])
				break_even_point = price[j] - price[i];
	}
	return break_even_point;
} 

void main(void) {
	// prices_len 1 ~ 1000000
	int *price = (int*)calloc(1000000, sizeof(int));
	int price_len;
	SetINFO(price, &price_len);
	printf("Result Solution: %d\n", solution(price, price_len));
}
void SetINFO(int *price, int *price_len) {
	int i, num;
	puts("====주식 가격 입력====");
	for(i=0; i<1000000; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		else if(num<1 || num>1000)
			exit(1);
		else
			price[i] = num;
	}
	*price_len = i;
}
