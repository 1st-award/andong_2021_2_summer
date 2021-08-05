#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int *ary = NULL;
	int i = 0;
	
	if((ary = (int*)calloc(3, sizeof(int))) == NULL) {
		printf("메모리 할당에 문제가 있습니다.\n");
		exit(EXIT_FAILURE);
	}
	
	for(i=0; i<3; ++i) {
		printf("ary[%d] = %d\n", i, *(ary+i));
	}
	free(ary);
} 
