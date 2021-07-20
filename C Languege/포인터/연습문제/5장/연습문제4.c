// 다음 출력 결과를 쓰고 그 이유를 설명하시오.

#include <stdio.h>

void main(void) {
	char *str = "ABCDEF";
	char arr[] = "ABCDEF";
	
	printf("%d %d\n", sizeof(str), sizeof(arr));	// 8 7	str = 포인터 = 주소 32bit = 4byte, 64bit = 8byte, arr = 배열 = ABCDEF\0 = 7byte 
	printf("%c %c\n", str[0], arr[0]);				// A A	각각 한 맨 왼쪽에 있는 문자 출력 
	printf("%c %c\n", *str, *arr);					// A A	str[0] = *str, arr[0] = *arr 
} 
