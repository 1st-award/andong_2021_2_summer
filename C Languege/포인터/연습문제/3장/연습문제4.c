// 다음 출력 결과를 쓰고 이유를 설명하시오.
#include <stdio.h>

void main (void) {
	int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
	
	printf("%d %d %d\n", sizeof(arr), sizeof(arr[0]), sizeof(arr[1])); // arr = arr[0~5] = 24byte, arr[0] = arr[0~2] = 12byte, arr[3~5] = 12byte
	printf("%d %d %d\n", sizeof(arr[0][0]), sizeof(arr[1][0]), sizeof(&arr[0][0])); // arr[0][0] = 4byte, arr[1][0] = 4byte, &arr[0][0] = 32bit = 4byte, 64bit = 8byte
} 
