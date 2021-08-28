/*
	�л����� ���� ������ �־����� ��, n�� �л��� �� ������ ���Ϸ� �մϴ�. 
	�й��� 0���� �����ϸ�, ���� ������ �й������� �־����ϴ�. 
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
	// scores_len�� 1~100
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
	printf("n��° �л�: ");
	scanf("%d", n);
}


