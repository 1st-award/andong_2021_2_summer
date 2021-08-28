/*
	n명이 시간표에 따라 교대 근무에 들어갑니다. 이때 가장 오래 일한 사람이 몇 시간 일했는지 알아내려 합니다.
	근무 순번을 첫 번째 사람부터 n번째 사람 순으로 합니다. n번 사람이 일을 한 뒤에는 다시 첫 번째 사람부터 일을 합니다.
	가장 오래 일한 사람은 몇 시간 일했는지 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *, int *);
int solution(int *time_table, int time_table_len, int n) {
	int i, max = 0;
	// 노동자 인원 수만큼 배열 선언 
	int *worker = (int*)calloc(n, sizeof(int));
	// 노동 시간 구하기 
	for(i=0; i<time_table_len; ++i)
		// 첫 번째 근무자 부터 n번째 근무자까지 time_table 순서대로 근무시간을 더하기. 
		worker[i%n] += time_table[i];
	// 가장 근무를 많이 한 사람 구하기 
	for(i=0; i<n; ++i)
		if(worker[i]>max)
			max = worker[i];
	return max;
} 

void main(void) {
	// time_table_len은 1 ~ 100 
	int *time_table = (int*)malloc(sizeof(int)*100);
	int time_table_len;
	int n;
	SetINFO(time_table, &time_table_len, &n);
	printf("Result Solution: %d\n", solution(time_table, time_table_len, n));
}
void SetINFO(int *time_table, int *time_table_len, int *n) {
	int num, i;
	puts("====시간표 입력====");
	for(i=0; i<100; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		// time_table의 원소는 1 ~ 100 
		else if(num<1 || num>100)
			exit(1);
		else
			time_table[i] = num;
	}
	*time_table_len = i;
	puts("====근무자 수 입력====");
	scanf("%d", n);
	// n은 1 ~ time_table_len
	if(*n<1 || *n> *time_table_len)
		exit(1); 
}
