/*
	1������ N������ �ĺ��� ���ؼ� ��ǥ�� �����߽��ϴ�. ���� ��� ��ǥ ����� [1, 5, 4, 3, 2, 5, 2, 5, 5, 4]
	������� �ĺ��� ��ǥ������ ��Ÿ���ϴ�. �̶�, ���� ���� ǥ�� ���� �ĺ��� ��ȣ�� return �ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*, int*, int*);
int* solution(int N, int votes[], int votes_len) {
	// votes_count �ʱ�ȭ �� �迭 ���� 
	int *votes_count = (int*)calloc(N, sizeof(int));
	int *result = (int*)calloc(N, sizeof(int));
	int i;
	// votes counting ���� 
	for(i=0; i<votes_len; ++i)
		votes_count[votes[i]-1]++;
	// ���� ���� ���� ��ǥ��� ��� 
	int max_vote = votes_count[0];
	for(i=1; i<N; ++i)
		if(max_vote<votes_count[i])
			max_vote = votes_count[i];
	// �ߺ� Ȯ��
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
	puts("====�ĺ� �� �Է�====");
	scanf("%d", N);
	// N�� 1 ~ 10 
	if(*N<0 || *N>10)
		exit(1);
	puts("====��ǥ �Է�====");
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
