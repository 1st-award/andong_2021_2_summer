// 다음 출력 결과를 쓰시오.

#include <stdio.h>

void main(void) {
	char *str = "ABCDEF";
	
	printf("%c %c %c\n", str[0], str[1], str[2]);	// A B C
	puts("==========");
	printf("%s\n", str);							// ABCDEF
	printf("%s\n", str+1);							// BCDEF
	puts(str+2);									// CDEF
	puts(str+3);									// DEF
} 
