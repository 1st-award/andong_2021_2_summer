/*
	���ڿ��� �Է¹޾Ƽ� �����ڿ� ���ڸ� ����ϵ� �����ڴ� ��� �ҹ��ڷ�
	����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
