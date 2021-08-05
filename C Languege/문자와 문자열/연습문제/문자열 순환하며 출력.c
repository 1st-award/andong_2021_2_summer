/*
 문자열을 입력받아서 문자수만큼 왼쪽으로 한 바퀴 회전하여
 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void PrintLeftRotateString(char *);
void main(void) {
	PrintLeftRotateString(GetString());
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
void PrintLeftRotateString(char *_getString) {
	int getLength = strlen(_getString)-1;
	// printf("%d %s\n", getLength, _getString); 
	int i, j;
	char temp;
	for(i=0; i<getLength; ++i) {
		temp = _getString[0]; 
		for(j=1; j<getLength; ++j) {
			_getString[j-1] = _getString[j];
		}
		_getString[getLength-1] = temp;
		printf("%s", _getString);
	}
}
