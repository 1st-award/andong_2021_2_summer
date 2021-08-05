#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int *ary = NULL;
	int i = 0,	n = 0,	sum = 0;
	
	printf("입력할 점수의 개수를 입력 >> ");
	scanf("%d", &n);
	
	if((ary = (int*)malloc(sizeof(int)*n)) == NULL) {
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}
	
	printf("%d개의 점수 입력 >> ", n);
	for(i=0; i<n; ++i) {
		scanf("%d", (ary+i));
		sum += *(ary + i);
	}
	
	printf("합: %d 평균: %.1f\n", sum, (double)sum/n);
	free(ary);
} 
