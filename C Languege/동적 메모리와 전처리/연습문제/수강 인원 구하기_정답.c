// 수강 인원 구하기 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
	int count = 0, i;
	for(i=0; i<scores_len; ++i) {
		if(650 <= scores[i] && scores[i] < 800)
			count+=1;
	}
	return count;
}

int main() {
	int score[10] = {650, 722, 914, 558, 714, 803, 650, 679, 669, 800};
	int scores_len = 10;
	int ret = solution(score, scores_len);
	
	printf("Solution: return value of the function is %d.\n", ret);
} 
