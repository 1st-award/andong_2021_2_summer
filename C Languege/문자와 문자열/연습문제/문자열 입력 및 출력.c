//���ڸ� �Է¹޴ٰ� �Է� ���� �׳� ���͸� ġ�� �Է¹��� ���ڸ�\
��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <stdlib.h>

char *GetChar(void);
void PrintChar(char*);
void main(void) {
	PrintChar(GetChar());
}

char *GetChar(void) {
	char *str = (char*)malloc(sizeof(char)*50);
	scanf("%s", str);
	return str;
}
void PrintChar(char *_getChar) {
	printf("%s\n", _getChar);
}
