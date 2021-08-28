/*
	관공서 주차장에서는 차량 2부제를 실시합니다.
	차량 2부제는 차량번호 끝자리가 홀수인 차량은 홀수 일에만,
	짝수인 차량은 짝수 일에만 주차장에 들어오 수 있도록 하는 제도입니다.
	차량 2부제 프로그램을 작성하세요. (단, 중복되는 번호판 번호는 주어지지 않습니다.) 
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
	// numbers_len은 1~9000
	int *numbers = (int*)calloc(9000, sizeof(int));
	int numbers_len;
	SetINFO(numbers, &day, &numbers_len);
	printf("Result Solution: %d\n", solution(day, numbers, numbers_len));
}
void SetINFO(int *_number, int *_day, int *_numbers_len) {
	int num, i;
	puts("====번호 입력====");
	for(i=0; i<9000; ++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(num<1000 || num>9999)
			exit(1);
		else
			_number[i] = num;
	}
	puts("====날짜 입력====");
	scanf("%d", _day); 
	
	if(i>9000)
		exit(1);
	else
		*_numbers_len = i;
}
