/*
 ������ �� ���� �Է¹޾Ƽ� ������ 
 �ƽ�Ű�ڵ��� �հ� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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

