// 배열 반대로 출력 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int *solution(int arr[], int arr_len) {
	int left = 0;
	int right = arr_len - 1;
	while(left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left += 1;
		right -= 1;
	}
	return arr;
} 

int main() {
	int arr[4] = {1, 4, 2, 3};
	int arr_len = 4, i;
	int *ret = solution(arr, arr_len);
	
	printf("Solution: return value of the function is {");
	for(i=0; i<4; ++i) {
		if(i!=0)	printf(", ");
		printf("%d", ret[i]);
	}
	printf("}\n");
}
