/*
	5개 이상의 문자로 된 단어를 입력받은 후 
	앞에서부터 5자를 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>

char *GetString(void);
void PrintFiveString(char *);
void main(void) {
	PrintFiveString(GetString());
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
void PrintFiveString(char *_getString) {
	int i;
	for(i=0; i<5; ++i) {
		printf("%c", _getString[i]);
	}
	puts("");
}
