// 다음 출력 결과를 쓰시오. 
#include <stdio.h>

void main (void) {
	char c = 'A';
	int n = 10;
	long l = 10l;
	float f = 5.25f;
	double d = 5.25;
	
	printf("%d\n", sizeof(c)); // char = 1byte 
	printf("%d\n", sizeof(n)); // int = 4byte
	printf("%d\n", sizeof(l)); // long = 4byte
	printf("%d\n", sizeof(f)); // float = 4byte
	printf("%d\n", sizeof(d)); // double = 8byte
	puts("==================");
	printf("%d\n", sizeof(&c)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(&n)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(&l)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(&f)); // 32bit = 4byte, 64bit = 8byte
	printf("%d\n", sizeof(&d)); // 32bit = 4byte, 64bit = 8byte
}
