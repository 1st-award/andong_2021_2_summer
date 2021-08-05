// 33~127 사이의 숫자를 계속 입력받아 입력받은 숫자의 아스키코드에 해당하는\
문자를 출력하다가 범위를 벗어나는 입력이 들어오면 종료하는 프로그램을 작성하시오. 
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
	printf("아스키 코드 =? ");
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
