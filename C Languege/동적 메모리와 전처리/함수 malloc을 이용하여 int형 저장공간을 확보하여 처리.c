#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int *pi = NULL;
	
	if((pi = (int*)malloc(sizeof(int))) == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
		exit(1);
	}
	
	*pi = 3;
	printf("*pi = %d\n", *pi);
	printf("pi = %d\n", pi);
	free(pi);
}
