/*
	���� ���ӵ� n�� ������ �ֽ� ������ ������� ����ִ� �迭�� �ֽ��ϴ�. 
	�̶�, ���� ��Ģ�� ���� �ֽ��� ��� �Ⱦ��� ���� �ִ� ������ ���Ϸ� �մϴ�. 
	====
	1. n�� ���� �ֽ��� �� �� �� �� �� �ֽ��ϴ�.
	2. n�� ���� �ֽ��� �� �� �� �� �� �ֽ��ϴ�.
	3. �ֽ��� �� ���� �ٷ� �� ���� ������, �ּ� �Ϸ簡 ������ �� �� �ֽ��ϴ�.
	4. ��� �� ���� �ֽ��� ����ϸ�, �ѹ��� �Ⱦƾ� �մϴ�.
	====
	�ֽ��� �� ���� �ݵ�� ������ �ֽ��� ���� �ϸ�, �ִ� ������ ����� �ƴ� ���� �ֽ��ϴ�. 
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
	puts("====�ֽ� ���� �Է�====");
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
