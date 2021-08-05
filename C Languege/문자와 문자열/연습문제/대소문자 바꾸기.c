/*
100 글자 이하의 문자열을 입력받아 대문자는 소문자로, 소문자는 대문자로 변환하여 
출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

char *GetString(void);
void PrintSwitchChar(char *);
void main(void) {
	PrintSwitchChar(GetString());
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	return str;
}
void PrintSwitchChar(char *_getStr) {
	int getLength = strlen(_getStr);
	int i;
	for(i=0; i<getLength; i++) {
		// printf("%c\n", *_getStr+i);
		if(islower(*(_getStr+i))) {
			printf("%c", toupper(*(_getStr+i)));
		}
		else {
			printf("%c", tolower(*(_getStr+i)));
		}
	}
	puts("");
}
