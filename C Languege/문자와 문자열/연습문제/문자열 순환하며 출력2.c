/*
	���ڿ��� �Է� �޾Ƽ� ���ڼ���ŭ ���������� �� ���� ȸ���Ͽ�
	����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/ 
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

char *GetString(void);
void PrintRightRotateString(char *);
void main(void) {
	PrintRightRotateString(GetString());
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
void PrintRightRotateString(char *_getString) {
	int getLength = strlen(_getString)-1;
	int i, j;
	char temp;
	for(i=0; i<getLength; ++i) {
		temp = _getString[getLength-1];
		for(j=getLength-1; j>=1; --j) {
			_getString[j] = _getString[j-1];
		}
		_getString[0] = temp;
		printf("%s", _getString);
	}
}
