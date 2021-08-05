// 문자를 입력받다가 입력 없이 그냥 엔터만 치면 입력받은 뒤\
문자를 모두 출력하는 프로그램을 작성하시오. 
#include <stdio.h>
#include <stdlib.h>

char *GetChar(void);
void PrintString(char*);
void main(void) {
	PrintString(GetChar());
}

char *GetChar(void) {
	char *str = (char*)malloc(sizeof(char)*50);
	scanf("%s", str);
	return str;
}
void PrintString(char *_getStr) {
	printf("%s%s\n", _getStr, _getStr);
}
