/*
 공백을 포함하여 100글자 이하의 문자열(문장)을 입력받아
 공백을 기준으로 줄을 바꾸어 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void PrintString(char *);
void main(void) {
	PrintString(GetString());
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*100);
	gets(str); // 공백까지 문자열에 넣고 싶을 때 사용 하지만 보안상 문제있음 
	return str;
}
void PrintString(char *_getString) {
	int getLength = strlen(_getString);
	int i;
	// printf("%d %s\n", getLength, _getString); 
	for(i=0; i<getLength; ++i) {
		if(isspace(*(_getString+i))) {
			puts("");
		}
		else {
			printf("%c", *(_getString+i));
		}
	}
}
