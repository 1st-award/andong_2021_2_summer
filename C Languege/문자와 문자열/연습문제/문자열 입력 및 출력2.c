// ���ڸ� �Է¹޴ٰ� �Է� ���� �׳� ���͸� ġ�� �Է¹��� ��\
���ڸ� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <stdlib.h>

char *GetChar(void);
void PrintString(char*);
void main(void) {
	PrintString(GetChar());
}

char *GetChar(void) {
	char *str = (char*)malloc(sizeof(char)*50);
	scanf("%s", str);
	return str;
}
void PrintString(char *_getStr) {
	printf("%s%s\n", _getStr, _getStr);
}
