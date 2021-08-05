/*
	5개의 단어를 입력받아 모든 단어를 입력받은 
	역순으로 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **InputArray(void);
void PrintArray(char **);
void main(void) {
	PrintArray(InputArray());
}

char **InputArray(void) {
	static char *str[5];
	int i;
	for(i=0; i<5; ++i) {
		str[i] = (char*)malloc(sizeof(char)*10);
		scanf("%s", str[i]);
	}
	return str;
}
void PrintArray(char **_getArray) {
	int i;
	for(i=4; i>=0; --i) {
		printf("%s\n", *(_getArray+i));
	}
}
