// ���ڿ��� �Է¹޾Ƽ� ���ڿ��� ���̸� ���ϰ� �Է¹���\
�������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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
	printf("�Է¹��� ���ڿ��� ���̴� %d�Դϴ�.\n", length);
	for(i=length; i>-1; --i) {
		printf("%c", *(_getString+i));
	}
}
