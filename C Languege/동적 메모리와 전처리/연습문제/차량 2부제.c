/*
	������ �����忡���� ���� 2������ �ǽ��մϴ�.
	���� 2������ ������ȣ ���ڸ��� Ȧ���� ������ Ȧ�� �Ͽ���,
	¦���� ������ ¦�� �Ͽ��� �����忡 ���� �� �ֵ��� �ϴ� �����Դϴ�.
	���� 2���� ���α׷��� �ۼ��ϼ���. (��, �ߺ��Ǵ� ��ȣ�� ��ȣ�� �־����� �ʽ��ϴ�.) 
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*, int*, int*);
int solution(int day, int *numbers, int numbers_len) {
	int i, odd_count = 0, even_count = 0;
	for(i=0; i<numbers_len; ++i) {
		if(numbers[i]%2)
			++odd_count;
		else
			++even_count;
	}
	return day%2==0 ? even_count : odd_count;
}

void main(void) {
	int day;
	// numbers_len�� 1~9000
	int *numbers = (int*)calloc(9000, sizeof(int));
	int numbers_len;
	SetINFO(numbers, &day, &numbers_len);
	printf("Result Solution: %d\n", solution(day, numbers, numbers_len));
}
void SetINFO(int *_number, int *_day, int *_numbers_len) {
	int num, i;
	puts("====��ȣ �Է�====");
	for(i=0; i<9000; ++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(num<1000 || num>9999)
			exit(1);
		else
			_number[i] = num;
	}
	puts("====��¥ �Է�====");
	scanf("%d", _day); 
	
	if(i>9000)
		exit(1);
	else
		*_numbers_len = i;
}
