// 모든 물건을 계산하는 시간 정답 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int stuffs[], int stuffs_len) {
	int answer = 0;
	int small_counter = 0;
	int general_counter = 0;
	int i;
	for(i=0; i<stuffs_len; ++i) {
		if(stuffs[i] > 3)
			general_counter += stuffs[i];
		else
			small_counter += stuffs[i];
	}
	if(small_counter > general_counter)
		answer = small_counter;
	else
		answer = general_counter;
	return answer;
}

void main(void) {
	int stuffs[6] = {5, 3, 4, 2, 3, 2};
	int stuffs_len = 6;
	int ret = solution(stuffs, stuffs_len);
	printf("Result Solution: %d\n", ret);
}
