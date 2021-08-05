// 문자열을 입력받고 정수를 입력 받아서 문자열의 맨 뒤부터 정수만큼\
출력하는 프로그램을 작성하시오. 만약 입력받은 정수가 문자열의 길이보다 크다면 모두 출력한다. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
int GetLength(void);
void PrintString(char *, int );
void main(void) {
	char *str = GetString();
	int length = GetLength();
	PrintString(str, length);
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*50);
	scanf("%s", str);
	return str;	
}
int GetLength(void) {
	int length;
	scanf("%d", &length);
	return length;
}
void PrintString(char *_getString, int _getLength) {
	int i = strlen(_getString);
	int toPosition = i - _getLength;
	for(; i>=toPosition; --i) {
		printf("%c", *(_getString+i));
	}
	printf(" %d\n", _getLength);
}
