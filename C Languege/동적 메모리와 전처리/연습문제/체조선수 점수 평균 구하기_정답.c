// 체조선수 점수 평균 구하기 정답.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int scores[], int scores_len) {
	int answer = 0;
	int max = 0;
	int min = 100;
	int sum = 0;
	int i;
	for(i=0; i<scores_len; ++i) {
		if(max<scores[i])
			max = scores[i];
		if(min>scores[i])
			min = scores[i];
		sum = sum + scores[i];
	}
	sum = sum - (max + min);
	answer = sum / (scores_len-2);
	return answer;
}

void main(void) {
	int scores1[10] = {35, 28, 98, 34, 20, 50, 85, 74, 71, 7};
	int scores1_len = 10;
	int ret1 = solution(scores1, scores1_len);
	printf("Result Solution: %d\n", ret1);
	
	int scores2[5] = {1, 1, 1, 1, 1};
	int scores2_len = 5;
	int ret2 = solution(scores2, scores2_len);
	printf("Result Solution: %d\n", ret2);
} 
