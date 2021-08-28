/*
	시험 점수에 따라 학생의 순위를 매기려 합니다. 동점자 순위는 가능한 순위 중 가장 높은 수누이로 마깁니다.
	예를 들어 학생별 점수가 [90, 87, 87, 23, 35, 28, 12, 46]이면, 학생별 순위는 [1, 2, 2, 7, 5, 6, 8, 4]입니다.
	학생별 순위를 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int *solution(int *score, int score_len) {
	int *rank = (int*)calloc(score_len, sizeof(int));
	int i, j;
	// 랭크 1로 초기화 
	for(i=0; i<score_len; ++i)
		++rank[i];
	// 순위 구하기 
	for(i=0; i<score_len; ++i) {
		for(j=0; j<score_len; ++j) {
			// 자신보다 상대방의 점수가 높으면 등수가 1씩 내려감 
			if(score[i] < score[j])
				++rank[i];
		}
	}
	return rank; 
} 

void main(void) {
	// score_len은 1 ~ 1000
	int *score = (int*)malloc(sizeof(int)*1000);
	int score_len;
	int i;
	SetINFO(score, &score_len);
	int *result = solution(score, score_len);
	for(i=0; i<score_len; ++i) {
		printf("%d ", result[i]);
	}
}
void SetINFO(int *score, int *score_len) {
	int i, num;
	puts("====점수 입력====");
	for(i=0; i<1000; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		// 점수는 1 ~ 100
		else if(num<1 || num>100)
			exit(1);
		else
			score[i] = num;
			 
	}
	*score_len = i;
}
