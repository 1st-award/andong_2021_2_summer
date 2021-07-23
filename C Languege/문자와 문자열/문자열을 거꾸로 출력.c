// 문자열을 입력받아서 문자열의 길이를 구하고 입력받은\
역순으로 출력하는 프로그램을 작성하시오. 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void PrintString(char *);
void main(void) {
	PrintString(GetString());
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*50);
	scanf("%s", str);
	return str; 
}
void PrintString(char *_getString) {
	int i;
	int length = strlen(_getString);
	printf("입력받은 문자열의 길이는 %d입니다.\n", length);
	for(i=length; i>-1; --i) {
		printf("%c", *(_getString+i));
	}
}
