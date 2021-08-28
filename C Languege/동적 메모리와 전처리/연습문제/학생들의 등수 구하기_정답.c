#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) {
	int* answer = (int*)malloc(sizeof(int)*score_len);
	int i, j;
	for(i=0; i<score_len; ++i) {
		answer[i] = 1;
		for(j=0; j<score_len; j++)
			if(score[i]<score[j])
				answer[i]++;
	}
	return answer;
}

void main(void) {
	int score1[] = {90, 87, 87, 23, 35, 28, 12, 46};
	int score_len1 = 8;
	int *ret1 = solution(score1, score_len1);
	int i;
	printf("Result Solution 1: ");
	for(i=0; i<score_len1; ++i) {
		if(i!=0)
			printf(", ");
		printf("%d", ret1[i]);
	}
	puts("");
	
	int score2[] = {10, 20, 20, 30};
	int score_len2 = 4;
	int *ret2 = solution(score2, score_len2);
	printf("Result Solution 2: ");
	for(i=0; i<4; ++i) {
		if(i!=0)
			printf(", ");
		printf("%d", ret2[i]);
	}
	puts("");
	
} 
