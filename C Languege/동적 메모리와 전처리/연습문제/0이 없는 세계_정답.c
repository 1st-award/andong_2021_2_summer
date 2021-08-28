// 0�� ���� ���� ����
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long num) {
	num++;
	long long digit = 1;
	// 1�� �ڸ����� ������ 0���� 0 -> 1 ��ȯ 
	while(num / digit % 10 == 0) {
		num+=digit;
		digit *= 10;
	}
	return num;
} 

void main(void) {
	// 1 ~ 999999999999999999999 ������ 0�� �������� �ʴ� �ڿ��� 
	long num = 8899;
	printf("Result Solution: %d\n", solution(num));
}
