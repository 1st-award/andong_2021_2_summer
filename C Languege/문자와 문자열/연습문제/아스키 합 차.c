/*
 영문자 두 개를 입력받아서 각각의 
 아스키코드의 합과 차를 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>

char GetWord(void);
int SumAscii(char, char);
int SubAscii(char, char);
void main(void) {
	char cA = GetWord();
	char cB = GetWord();
	printf("%d %d\n", SumAscii(cA, cB), abs(SubAscii(cA, cB)));
}

char GetWord(void) {
	char c;
	scanf("%c", &c);
	getchar();
	return c;
}
int SumAscii(char _getA, char _getB) {
	return toascii(_getA) + toascii(_getB);
}
int SubAscii(char _getA, char _getB) {
	return toascii(_getA) - toascii(_getB);
}

