// TV동시에 트는 시간 구하기 정답
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int programs[][2], int programs_len) {
	int answer = 0;
	int used_tv[25] = {0, };
	int i, j;
	for(i=0; i<programs_len; ++i) {
		for(j=programs[i][0]; j<programs[i][1]; ++j) {
			used_tv[j]++;
		}
	}
	for(i=0; i<25; ++i) {
		if(used_tv[i] >= 2) answer++;
	}
	return answer;
}

void main(void) {
	int programs[3][2] = {{1, 6}, {3, 5}, {2, 8}};
	int programs_len = 3;
	int ret = solution(programs, programs_len);
	printf("Result Solution: %d\n", ret);
} 
