//자신을 2로 나눈 값이 배열에 들어있는 개수 정답
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len) {
	int answer = 0, i, j;
	for(i=0; i<arr_len; ++i) {
		for(j=0; j<arr_len; j++) {
			if(arr[i]%2==0 && arr[i]/2 == arr[j]) {
				answer++;
				break;
			}
		}
	}
	return answer;
}

void main(void) {
	int arr[] = {4, 8, 3, 6, 7};
	int arr_len = 5;
	int ret = solution(arr, arr_len);
	printf("Result Solution: %d\n", ret);
} 
