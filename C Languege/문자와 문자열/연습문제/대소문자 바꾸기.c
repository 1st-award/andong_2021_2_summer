/*
100 ���� ������ ���ڿ��� �Է¹޾� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� 
����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

char *GetString(void);
void PrintSwitchChar(char *);
void main(void) {
	PrintSwitchChar(GetString());
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	return str;
}
void PrintSwitchChar(char *_getStr) {
	int getLength = strlen(_getStr);
	int i;
	for(i=0; i<getLength; i++) {
		// printf("%c\n", *_getStr+i);
		if(islower(*(_getStr+i))) {
			printf("%c", toupper(*(_getStr+i)));
		}
		else {
			printf("%c", tolower(*(_getStr+i)));
		}
	}
	puts("");
}
