// �� ���� ���ڿ��� �Է¹޾Ƽ� ������ �ٲپ� �ϳ��� ��ġ�� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputString(char **);
char *SwitchAndCat(char **);
void PrintArray(char *);
void main(void) {
	char *str[2];
	InputString(str);
	PrintArray(SwitchAndCat(str));
}

void InputString(char **_getArray) {
	int i;
	for(i=0; i<2; ++i) {
	 	*(_getArray+i) = (char*)malloc(sizeof(char)*20);
	 	scanf("%s", *(_getArray+i));
	}
}
char *SwitchAndCat(char **_getArray) {
	static char *temp;
	temp = (char*)malloc(sizeof(char)*40);
	strcpy(temp, *_getArray+1);
	printf("%s\n", temp);
	strcat(temp, *_getArray+0);
	printf("%s\n", temp);
	return temp;
}
void PrintArray(char *_getArray) {
	printf("%s\n", _getArray);
}
