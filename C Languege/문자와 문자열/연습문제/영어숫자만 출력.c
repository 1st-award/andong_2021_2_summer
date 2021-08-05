/*
	문자열을 입력받아서 영문자와 숫자만 출력하되 영문자는 모두 소문자로
	출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void PrintAlnum(char *);
void main(void) {
	PrintAlnum(GetString());
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
void PrintAlnum(char *_getString) {
	int getLength = strlen(_getString);
	int i;
	for(i=0; i<getLength; ++i) {
		if(isalnum(_getString[i])) {
			printf("%c", _getString[i]);
		}
	}
}
