#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int *reary, *cary;
	int i = 0;
	
	if((cary = (int*)calloc(3, sizeof(int)))== NULL) {
		printf("메모리 할당이 문제가 있습니다.\n");
		exit(EXIT_FAILURE); 
	}
	
	if((reary = (int*)realloc(cary, 4*sizeof(int)))== NULL) {
		printf("메모리 할당이 문제가 있습니다.\n");
		exit(EXIT_FAILURE); 
	}
	
	for(i=0; i<4; ++i) {
		printf("reary[%d] = %d\n", i, *(reary+i));
	}
	free(reary);
}
