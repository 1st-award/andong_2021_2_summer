// 문자 하나를 입력 받아서 그 문자의 아스키 코드를 출력하는 작업을 반복하다가 '0'\
이 입력되면 아스키 코드를 출력하고 종료하는 프로그램을 작성하시오.
#include <stdio.h>
#include <ctype.h>

void PrintAscii(char, int);
char GetChar(void);
int CharToAscii(char);
void main(void) {
	char ch;
	int asciiCode;
	
	do {
		ch = GetChar();
		asciiCode = CharToAscii(ch);
		PrintAscii(ch, asciiCode);
	}while(ch!='0');
	return;
} 
// 문자와 아스키코드 출력 
void PrintAscii(char _getChar, int _getAscii) {
	printf("%c -> %d\n", _getChar, _getAscii);
	return; 
}
// 문자입력후 char 반환 
char GetChar(void) {
	char ch;
	printf("문자 입력(0입력시 종료): ");
	scanf("%c", &ch); 
	getchar();
	return ch;
}
// 아스키코드 반환 
int CharToAscii(char _getChar) {
	return toascii(_getChar);
}
