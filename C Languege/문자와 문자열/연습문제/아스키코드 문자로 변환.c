// 33~127 ������ ���ڸ� ��� �Է¹޾� �Է¹��� ������ �ƽ�Ű�ڵ忡 �ش��ϴ�\
���ڸ� ����ϴٰ� ������ ����� �Է��� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <ctype.h>

int GetAsciiCode(void);
char Ascii2Char(int);
void PrintChar(char);
void main(void) {
	int ascii;
	char ch;
	
	do {
		ascii = GetAsciiCode();
		PrintChar(Ascii2Char(ascii));
	}while(isalpha(ascii));
	return;
}

int GetAsciiCode(void) {
	int ascii;
	printf("�ƽ�Ű �ڵ� =? ");
	scanf("%d", &ascii);
	return ascii;
}
char Ascii2Char(int _getAscii) {
	return (char)_getAscii;
}
void PrintChar(char _getChar) {
	printf("%c\n", _getChar);
	return;
}
