// 차량 2부제 정답
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int day, int numbers[], int numbers_len) {
	int count = 0, i;
	for(i=0; i<numbers_len; ++i) {
		if(numbers[i]%2 == day%2)
			count++;
	}
	return count;
}

void main(void) {
	int day = 17;
	int numbers[] = {3285, 1724, 4438, 2988, 3131, 2998};
	int numbers_len = 6;
	int ret = solution(day, numbers, numbers_len);
	printf("Result Solution: %d\n", ret);
} 
