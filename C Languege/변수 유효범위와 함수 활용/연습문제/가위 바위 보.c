// ����ڿ� ���α׷��� ����, ����, �� ������ �ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
	char *rps[] = {"����", "����", "��"};
	int computerSelect, userSelect;
	srand((long)time(NULL));
	
	printf("����(0) ����(1) ��(2) �߿��� �ϳ� �Է� -> ");
	scanf("%d", &userSelect);
	computerSelect = rand()%3;
	
	printf("���: %s, COM: %s\n", rps[userSelect], rps[computerSelect]);
	if(userSelect == computerSelect%3+1)	puts("����� �¸��Դϴ�.");
	else if(userSelect == computerSelect)	puts("�����ϴ�.");
	else	puts("����� �й��Դϴ�");
} 
