/*
	5�� �̻��� ���ڷ� �� �ܾ �Է¹��� �� 
	�տ������� 5�ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/
#include <stdio.h>
#include <stdlib.h>

char *GetString(void);
void PrintFiveString(char *);
void main(void) {
	PrintFiveString(GetString());
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
void PrintFiveString(char *_getString) {
	int i;
	for(i=0; i<5; ++i) {
		printf("%c", _getString[i]);
	}
	puts("");
}
