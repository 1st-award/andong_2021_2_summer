// 두개의 문자열을 입력받아서\
두 문자열의 길이의 합을 출력하는 프로그램을 작성하시오. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **GetString(void);
int GetLength(char **);
void main(void) {
	printf("%d\n", GetLength(GetString()));
}

char **GetString(void) {
	int i;
	static char *str[2];
	for(i=0; i<2; ++i) {
		str[i] = (char*)malloc(sizeof(char)*20);
		scanf("%s", str[i]);
	}
	return str;
}
int GetLength(char **_getString) {
	return strlen(*(_getString+0)) + strlen(*(_getString+1));
}
