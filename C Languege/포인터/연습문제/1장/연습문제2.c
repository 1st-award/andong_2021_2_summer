// 다음 출력 결과를 쓰시오.
#include <stdio.h>

void main (void) {
	printf("%d\n", sizeof(char)); // char = 1byte 
	printf("%d\n", sizeof(int)); // int = 4byte
	printf("%d\n", sizeof(long)); // long = 4byte
	printf("%d\n", sizeof(float)); // float = 4byte
	printf("%d\n", sizeof(double)); // double = 8byte
	puts("======================="); 
	printf("%d\n", sizeof(char*)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(int*)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(long*)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(float*)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(double*)); // 32bit = 4byte, 64bit = 8byte
} 
