/* 다음에서 틀린 부분을 찾고 코드가 실행되도록 고치시오.

#include <stdio.h>

void main (void) {
	int n = 0x10;
	int **npp = &n;
	printf("%x %x %x\n", n, *npp, **npp);
}
*/
#include <stdio.h>

void main (void) {
	int n = 0x10;
	int *np = &n;
	int **npp = &np;
	printf("%x %x %x\n", n, *np, **npp);
}
