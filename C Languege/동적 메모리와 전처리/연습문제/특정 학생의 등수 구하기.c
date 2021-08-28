/*
	학생들의 시험 점수가 주어졌을 때, n번 학생이 몇 등인지 구하려 합니다. 
	학번은 0부터 시작하며, 시험 점수는 학번순으로 주어집니다. 
*/
#include <stdio.h>
#include <stdlib.h>

void InputINFO(int *, int *, int *);
void func_a(int *scores, int scores_len) {
	int temp, i, j;
	for(i=0; i<scores_len; ++i) {
		for(j=i+1; j<scores_len; ++j) {
			if(scores[i]<scores[j]) {
				temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			} 
		}
	}
}

int func_b(int *scores, int scores_len, int n) {
	int i;
	for(i=0; i<scores_len; ++i) {
		if(scores[i] == n) {
			return ++i;
		}
	}
}

int solution(int *scores, int scores_len, int n) {
	int goal_student_score = scores[n];
	func_a(scores, scores_len);
	return func_b(scores, scores_len, goal_student_score);
}

void main(void) {
	// scores_len은 1~100
	int *scores = (int*)calloc(100, sizeof(int));
	int scores_len;
	int n;
	InputINFO(scores, &scores_len, &n);
	
	printf("Solution result: %d\n", solution(scores, scores_len, n));
}

void InputINFO(int *scores, int *scores_len, int *n) {
	int i;
	for(i=0; i<4; ++i) {
		scanf("%d", &scores[i]);
	}
	*scores_len = i;
	printf("n번째 학생: ");
	scanf("%d", n);
}


