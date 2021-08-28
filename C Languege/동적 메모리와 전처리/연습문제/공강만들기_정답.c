// 공강 구하기 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int time_table[], int time_table_len) {
	int answer = 0;
	int first_class = 0;
	int last_class = 0;
	int i;
	for(i=0; i<time_table_len; ++i) {
		if(time_table[i] == 1) {
			first_class = i;
			break;
		}
	}
	for(i=time_table_len-1; i>=0; i--) {
		if(time_table[i] == 1) {
			last_class = i;
			break;
		}
	}
	for(i=first_class; i<last_class; ++i)
		if(time_table[i] == 0)
			answer++;
			
	return answer;
}

void main(void) {
	int time_table[] = {1, 1, 0, 0, 1, 0, 1, 0, 0, 0};
	int time_table_len = 10;
	int ret = solution(time_table, time_table_len);
	printf("Result Solution: %d\n", ret);
}
