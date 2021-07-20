// 다음 출력 결과를 쓰시오.

#include <stdio.h> 

void main(void) {
	char arr[20] = "ABCDEF";
	
	printf("%c %c %c\n", arr[0], arr[1], arr[2]);	// A B C
	puts("=======");
	printf("%s\n", arr);							// ABCDEF
	printf("%s\n", arr+1);							// BCDEF
	puts(arr+2);									// CDEF
	puts(arr+3);									// DEF
}
