// 특정 학생의 등수 구하기 정답
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void *a, const void *b) {
	return (*(int*)b - *(int*)a);
}

int func_a(int scores[], int scores_len, int score) {
	int rank;
	for(rank=0; rank<scores_len; rank++) {
		if(scores[rank] == score)
			return rank + 1;
	}
	return 0;
}
void func_b(int arr[], int arr_len) {
	qsort(arr, arr_len, sizeof(int), compare);
}
int func_c(int arr[], int n) {
	return arr[n];
} 
int solution(int scores[], int scores_len, int n) {
	int s = func_c(scores, n);
	func_b(scores, scores_len);
	int answer = func_a(scores, scores_len, s);
	return answer;
}

void main(void) {
	int scores[4] = {20, 60, 98, 59};
	int scores_len = 4;
	int n = 3;
	int ret = solution(scores, scores_len, n);
	printf("Result Solution: %d\n", ret);
}
