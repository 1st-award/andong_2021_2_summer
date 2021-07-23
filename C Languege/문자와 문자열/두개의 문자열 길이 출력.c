// 두개의 문자열을 입력받아서\
두 문자열의 길이의 합을 출력하는 프로그램을 작성하시오. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
int GetLength(char *[2]);
void main(void) {
	int i;
	char *str[2];
	for(i=0; i<2; ++i) {
		str[i] = GetString();			
	}
	printf("%d\n", GetLength(str));
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*10);
	scanf("%s", str);
	return str;
}
int GetLength(char *_getString[2]) {
	return strlen(_getString[0]) + strlen(_getString[1]);
}
