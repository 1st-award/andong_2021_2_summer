// 다음 출력 결과를 쓰고 이유를 설명하시오.
#include <stdio.h>

void main (void) {
	char c = 'Z';
	char *cp = &c;
	int n = 100;
	int *np = &n;
	
	printf("%d %d %d\n", sizeof(c), sizeof(*cp), sizeof(cp)); // 1 1 8 *cp = 'Z' = c -> 1byte, cp 주소 값 -> 32bit = 4byte, 64bit = 8byte 
	printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(np)); // 4 4 8 *np = 100 = n -> 4byte, np 주소 값 -> 32bit = 4byte, 64bit = 8byte 
} 
