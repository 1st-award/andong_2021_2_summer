/*
 ������ �����Ͽ� 100���� ������ ���ڿ�(����)�� �Է¹޾�
 ������ �������� ���� �ٲپ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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
	gets(str); // ������� ���ڿ��� �ְ� ���� �� ��� ������ ���Ȼ� �������� 
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
