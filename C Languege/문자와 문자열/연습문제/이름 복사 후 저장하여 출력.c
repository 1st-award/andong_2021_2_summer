/*
 문자열을 선언하고 다음과 같이 "홍길동"이라는 이름을 복사하여 
 저장한 후 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputName(char *);
void PrintName(char *);
void main(void) {
	char *name = (char*)malloc(sizeof(char)*20);
	InputName(name);
	PrintName(name);
} 

void InputName(char *_getName) {
	scanf("%s", _getName);
}
void PrintName(char *_getName) {
	printf("%s", _getName);
}
