/*
	체조선수는 여러 심사위원의 점수 중 가장 높은 점수 하나와 가장 낮은 점수 하나를 제외하고 나머지 점수들의
	평균을 계산하여 최종점수를 받습니다. (단, 이때 소수점 이하의 수는 버립니다.)
*/
#include <stdio.h>
#include <stdlib.h>

void InputINFO(int *, int *);
// 최대값 구하기 
int func_a(int *scores, int scores_len) {
	int max = scores[0], i;
	for(i=1; i<scores_len; ++i) {
		if(max<scores[i])
			max = scores[i];
	}
	return max;
}
// 최소값 구하기 
int func_b(int *scores, int scores_len) {
	int min = scores[0], i;
	for(i=0; i<scores_len; ++i) {
		if(min>scores[i]) 
			min = scores[i];
	}
	return min;
}
int solution(int *scores, int scores_len) {
	int max = func_a(scores, scores_len);
	int min = func_b(scores, scores_len);
	int i, sum = 0, count = 0;
	if(max == min)
		return scores[0];
	for(i=0; i<scores_len; ++i) {
		if(max==scores[i] || min==scores[i])
			continue;
		else {
			sum+=scores[i];
			count++;
		}
	}
	printf("%d\n", sum);
	return sum/count;
} 

void main(void) {
	// scores_len 3~100 
	int *scores = (int*)calloc(100, sizeof(int));
	int scores_len;
	InputINFO(scores, &scores_len);
	printf("Solution Result: %d\n", solution(scores, scores_len));
}
void InputINFO(int *scores, int *scores_len) {
	int i, num;
	printf("점수 입력: ");
	for(i=0;i<100;++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(num<0 || num>100)
			exit(1);
		else
			scores[i] = num;
	}
	if(i<3 || i==100)
		exit(1);
	*scores_len = i;
} 
