#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char line[101];
	// char *line;
	// gets(line) //�����߻� 
	
	printf("�Է��� �����Ϸ��� ���ο� �࿡�� (crtl + Z)�� �����ʽÿ�.\n");
	while(gets(line))
		puts(line);
	printf("\n");
	

	while(fgets(line, 101, stdin))
		puts(line);
	printf("\n");

	return;
} 
