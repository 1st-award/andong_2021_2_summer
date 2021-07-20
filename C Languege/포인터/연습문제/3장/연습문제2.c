// 다음 출력 결과를 쓰고 이유를 설명하시오.
#include <stdio.h>

void main (void) {
	int arr[5] = {10, 20, 30, 40, 50};
	printf("%d %d %d\n", sizeof(arr), sizeof(arr[0]), sizeof(&arr[0])); // arr = arr[0]+arr[1]+arr[2]+arr[3]+arr[4] -> 4*5=20 &arr[0] -> 주소 값 -> 32bit = 4byte, 64bit = 8byte 
} 
