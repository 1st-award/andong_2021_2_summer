// ���ڿ��� �Է¹ް� ������ �Է� �޾Ƽ� ���ڿ��� �� �ں��� ������ŭ\
����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� �Է¹��� ������ ���ڿ��� ���̺��� ũ�ٸ� ��� ����Ѵ�. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
int GetLength(void);
void PrintString(char *, int );
void main(void) {
	char *str = GetString();
	int length = GetLength();
	PrintString(str, length);
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*50);
	scanf("%s", str);
	return str;	
}
int GetLength(void) {
	int length;
	scanf("%d", &length);
	return length;
}
void PrintString(char *_getString, int _getLength) {
	int i = strlen(_getString);
	int toPosition = i - _getLength;
	for(; i>=toPosition; --i) {
		printf("%c", *(_getString+i));
	}
	printf(" %d\n", _getLength);
}
