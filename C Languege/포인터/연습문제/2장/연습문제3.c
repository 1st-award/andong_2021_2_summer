// 다음 출력 결과를 쓰고 이유를 설명하시오.
#include <stdio.h>

void main (void) {
	int n = 10;
	int *np = &n;
	int **npp = &np;
	
	printf("%d %d %d\n", n, *np, **npp); // **npp = *np = n = 10
	printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(**npp)); // **npp = *np = n = 10 -> 4byte
	printf("%d %d %d\n", sizeof(n), sizeof(np), sizeof(npp)); // n != 포인터 -> 4byte , *np = **npp = 포인터 -> 32bit = 4byte, 64bit = 8byte
} 
