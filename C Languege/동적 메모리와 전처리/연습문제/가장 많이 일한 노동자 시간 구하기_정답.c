// 가장 많이 일한 노동자 시간 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int time_table[], int time_table_len, int n) {
	int answer = 0;
	int *arr = (int*)malloc(sizeof(int) * n);
	memset(arr, 0, sizeof(int)*n);
	int i;
	for(i=0; i<time_table_len; ++i) {
		arr[i%n] += time_table[i];
	}
	for(i=0; i<n; ++i) {
		answer = answer > arr[i] ? answer : arr[i];
	}
	return answer;
}
void main(void) {
	int time_table1[] = {1, 5, 1, 9};
	int time_table_len1 = 4;
	int n1 = 3;
	int ret1 = solution(time_table1, time_table_len1, n1);
	printf("Result Soltuion 1: %d\n", ret1);
	
	int time_table2[] = {4, 8, 2, 5, 4, 6 ,7};
	int time_table_len2 = 7;
	int n2 = 4;
	int ret2 = solution(time_table2, time_table_len2, n2);
	printf("Result Solution 2: %d\n", ret2);
}
