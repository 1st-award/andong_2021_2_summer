// "Hong Gil Dong"���� �ʱ�ȭ �� �� 3������ 6�������� ���ڸ� ���ʷ� ����Ͻÿ�.
#include <stdio.h>

void PrintString(char *);
void main(void) {
	char *str = "Hong Gil Dong";
	PrintString(str);
} 

void PrintString(char *_getStr) {
	int i;
	for(i=3; i<7; ++i) {
		printf("%c", *(_getStr+i));
	}
}
