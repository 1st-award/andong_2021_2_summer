// 가장 많이 받은 후보 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int *solution(int N, int votes[], int votes_len) {
	int vote_counter[11] = {0};
	int i;
	for(i=0; i<votes_len; ++i) {
		vote_counter[votes[i]] += 1;
	}
	int max_val = 0;
	int cnt = 0;
	for(i=0; i<=N; ++i) {
		if(max_val < vote_counter[i]) {
			max_val = vote_counter[i];
			cnt = 1;
		}
		else if(max_val == vote_counter[i])
			cnt+=1;
	}
	
	int* answer = (int*)malloc(sizeof(int)*cnt);
	for(i=0; i<cnt; ++i)
		answer[i] = 0;
	int idx;
	for(i=1, idx = 0; i<=N; ++i) {
		if(vote_counter[i] == max_val) {
			answer[idx] = i;
			idx+=1;
		}
	}
	return answer;
} 

void main(void) {
	int N = 5;
	int votes[] = {1, 5, 4, 3, 2, 5, 2, 5, 5, 4};
	int votes_len = 10;
	int *ret = solution(N, votes, votes_len);
	printf("Result Solution: ");
	int i;
	for(i=0; ;++i) {
		if(ret[i] == 0)
			break;
		else
			printf("%d ", ret[i]);
	}
} 
