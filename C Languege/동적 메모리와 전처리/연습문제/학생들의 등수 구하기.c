/*
	���� ������ ���� �л��� ������ �ű�� �մϴ�. ������ ������ ������ ���� �� ���� ���� �����̷� ����ϴ�.
	���� ��� �л��� ������ [90, 87, 87, 23, 35, 28, 12, 46]�̸�, �л��� ������ [1, 2, 2, 7, 5, 6, 8, 4]�Դϴ�.
	�л��� ������ ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int *solution(int *score, int score_len) {
	int *rank = (int*)calloc(score_len, sizeof(int));
	int i, j;
	// ��ũ 1�� �ʱ�ȭ 
	for(i=0; i<score_len; ++i)
		++rank[i];
	// ���� ���ϱ� 
	for(i=0; i<score_len; ++i) {
		for(j=0; j<score_len; ++j) {
			// �ڽź��� ������ ������ ������ ����� 1�� ������ 
			if(score[i] < score[j])
				++rank[i];
		}
	}
	return rank; 
} 

void main(void) {
	// score_len�� 1 ~ 1000
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
	puts("====���� �Է�====");
	for(i=0; i<1000; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		// ������ 1 ~ 100
		else if(num<1 || num>100)
			exit(1);
		else
			score[i] = num;
			 
	}
	*score_len = i;
}
