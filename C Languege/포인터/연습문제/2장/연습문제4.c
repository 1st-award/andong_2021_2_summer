/* �������� Ʋ�� �κ��� ã�� �ڵ尡 ����ǵ��� ��ġ�ÿ�.

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
