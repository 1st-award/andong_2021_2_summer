#include <stdio.h>

void main(void) {
	int i;
	int dim[] = {9, 5, 2};
	void *void_p = dim;
	
	printf("%d %d %d\n", *(int*)void_p, *((int*)void_p+1), *((int*)void_p+2));
	for(i=0; i<3; ++i) {
		printf("%d ", *((int*)void_p)++);	// Windows������ ������ ����. Linux������ �ȳ���. 
	}
}
