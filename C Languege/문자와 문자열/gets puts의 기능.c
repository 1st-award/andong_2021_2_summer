#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char line[101];
	// char *line;
	// gets(line) //오류발생 
	
	printf("입력을 종료하려면 새로운 행에서 (crtl + Z)를 누르십시요.\n");
	while(gets(line))
		puts(line);
	printf("\n");
	

	while(fgets(line, 101, stdin))
		puts(line);
	printf("\n");

	return;
} 
