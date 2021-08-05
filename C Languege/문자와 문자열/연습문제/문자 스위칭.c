/*
	두 개의 문자열을 입력받아서 길이가 짧은 문자열을 먼저 출력하고
	다음 줄에 나머지 문자열을 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputArray(char **);
void SwitchArray(char **); 
void PrintArray(char **);
void main(void) {
	char *str[2];
	InputArray(str);
	SwitchArray(str);
	PrintArray(str);
}

void InputArray(char *_getArray[2]) {
	int i;
	for(i=0; i<2; ++i) {
		_getArray[i] = (char*)malloc(sizeof(char)*20);
		scanf("%s", *(_getArray+i));
	}
}
void SwitchArray(char **_getArray) {
	char *temp = (char*)malloc(sizeof(char)*20);
	if(strlen(*_getArray) > strlen(*(_getArray+1))) {
		strcpy(temp, *_getArray);
		strcpy(*_getArray, *(_getArray+1));
		strcpy(*(_getArray+1), temp);
	}
}
void PrintArray(char **_getArray) {
	puts("===========");
	printf("%s\n%s\n", *_getArray, *(_getArray+1));
}
