// 두개의 문자열을 입력받아서\
두 문자열의 길이의 합을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **GetString(void);
int GetLength(char *[2]);
void main(void) {
	printf("%d\n", GetLength(GetString()));
}

char **GetString(void) {
	static char *str[2];
	char temp[30];
	int i,length;
	for(i=0; i<2; ++i) {
		scanf("%s", temp);
		length = strlen(temp)+1;
		str[i] = (char*)malloc(sizeof(char)*length);
		strcpy(str[i], temp);
	}
	
	return str;
}
int GetLength(char *_getString[2]) {
	return strlen(_getString[0]) + strlen(_getString[1]);
}
