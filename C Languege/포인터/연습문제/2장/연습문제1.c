// ���� ��� ����� ���ÿ�.
#include <stdio.h>

void main (void) {
	char c = 'Z';
	char *cp = &c;
	int n = 100;
	int *np = &n;
	
	printf("%c %d\n", c, n); // Z 100
	printf("%c %d\n", *cp, *np);// Z 100
}
