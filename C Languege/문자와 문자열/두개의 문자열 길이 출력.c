// �ΰ��� ���ڿ��� �Է¹޾Ƽ�\
�� ���ڿ��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
int GetLength(char *[2]);
void main(void) {
	int i;
	char *str[2];
	for(i=0; i<2; ++i) {
		str[i] = GetString();			
	}
	printf("%d\n", GetLength(str));
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*10);
	scanf("%s", str);
	return str;
}
int GetLength(char *_getString[2]) {
	return strlen(_getString[0]) + strlen(_getString[1]);
}
