#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int *ary = NULL;
	int i = 0,	n = 0,	sum = 0;
	
	printf("�Է��� ������ ������ �Է� >> ");
	scanf("%d", &n);
	
	if((ary = (int*)malloc(sizeof(int)*n)) == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}
	
	printf("%d���� ���� �Է� >> ", n);
	for(i=0; i<n; ++i) {
		scanf("%d", (ary+i));
		sum += *(ary + i);
	}
	
	printf("��: %d ���: %.1f\n", sum, (double)sum/n);
	free(ary);
} 
