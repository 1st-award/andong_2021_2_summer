// ���ڿ��� �Է¹޾� ���ĺ� ���ڸ� ��� �빮�ڷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void PrintSwitchString(char *);
void main(void) {
	PrintSwitchString(GetString());
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	return str;
}
void PrintSwitchString(char *_getStr) {
	int getLength = strlen(_getStr);
	int i;
	for(i=0; i<getLength; ++i) {
		if(isalpha(*(_getStr+i))) {
			printf("%c", toupper(*(_getStr+i)));
		}
		else continue;
	}
}
