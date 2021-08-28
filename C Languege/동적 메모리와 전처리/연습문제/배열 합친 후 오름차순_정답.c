// 배열 합친 후 오름차순 정답 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int *solution(int arrA[], int arrA_len, int arrB[], int arrB_len) {
	int arrA_idx = 0, arrB_idx = 0;
	int* answer = (int*)malloc(sizeof(int)*(arrA_len + arrB_len));
	int answer_idx = 0;
	// 배열의 인덱스 번호 보다 배열의 길이가 크면 오름차순 시작 
	while(arrA_idx < arrA_len && arrB_idx < arrB_len) {
		// A < B than answer <- B 
		if(arrA[arrA_idx] < arrB[arrB_idx])
			answer[answer_idx++] = arrA[arrA_idx++];
		// A > B than answer <- A
		else
			answer[answer_idx++] = arrB[arrB_idx++];
	}
	// 나머지 인덱스 넣기 
	while(arrA_idx<arrA_len)
		answer[answer_idx++] = arrA[arrA_idx++];
	while(arrB_idx<arrB_len)
		answer[answer_idx++] = arrB[arrB_idx++];
	// answer return
	return answer;
}

void main(void) {
	int arrA[] = {-2, 3, 5, 9};
	int arrA_len = 4;
	int arrB[] = {0, 1 ,5};
	int arrB_len = 3;
	int *arr = solution(arrA, arrA_len, arrB, arrB_len);
	int i;
	for(i=0; i<arrA_len + arrB_len; ++i)
		printf("%d ", arr[i]);
}
