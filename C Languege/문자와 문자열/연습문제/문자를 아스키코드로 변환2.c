// 문자를 하나 입력받아 아스키코드값을 출력하는 프로그램을 작성하시오.
#include <stdio.h> 
#include <string.h>

char InputChar(void);
int GetAsciiCode(char);
void main(void) {
	printf("문자 하나를 입력하세요: ");
	printf("입력하신 문자의 아스키 코드: %d", GetAsciiCode(InputChar()));
}

char InputChar(void) {
	char c;
	scanf("%c", &c);
	return c;
}
int GetAsciiCode(char _getChar) {
	return (int)_getChar;
}
