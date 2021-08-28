/*
	1번부터 N번까지 후보에 대해서 투표를 진행했습니다. 예를 들어 투표 결과가 [1, 5, 4, 3, 2, 5, 2, 5, 5, 4]
	순서대로 후보에 투표했을을 나타냅니다. 이때, 가장 많은 표를 받은 후보의 번호를 return 하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*, int*, int*);
int* solution(int N, int votes[], int votes_len) {
	// votes_count 초기화 및 배열 선언 
	int *votes_count = (int*)calloc(N, sizeof(int));
	int *result = (int*)calloc(N, sizeof(int));
	int i;
	// votes counting 시작 
	for(i=0; i<votes_len; ++i)
		votes_count[votes[i]-1]++;
	// 가장 많이 받은 투표장수 출력 
	int max_vote = votes_count[0];
	for(i=1; i<N; ++i)
		if(max_vote<votes_count[i])
			max_vote = votes_count[i];
	// 중복 확인
	int max_count = 0;
	for(i=0; i<N; ++i)
		if(max_vote == votes_count[i])
			result[max_count++] = i+1;
	return result;
} 
void main(void) {
	int N;
	// votes_len 1 ~ 100;
	int *votes = (int*)calloc(100, sizeof(int));
	int votes_len;
	SetINFO(&N, votes, &votes_len);
	int *ret = solution(N, votes, votes_len);
	int i;
	printf("Result Solution: ");
	for(i=0; ;++i) {
		if(!ret[i])
			break;
		else
			printf("%d ", ret[i]);
	}
} 
void SetINFO(int *N, int *votes, int*votes_len) {
	puts("====후보 수 입력====");
	scanf("%d", N);
	// N은 1 ~ 10 
	if(*N<0 || *N>10)
		exit(1);
	puts("====투표 입력====");
	int i, num;
	for(i=0; i<100; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		else if(num<0 || num>*N)
			exit(1);
		else
			votes[i] = num;
	} 
	*votes_len = i;
}
