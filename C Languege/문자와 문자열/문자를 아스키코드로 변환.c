// ���� �ϳ��� �Է� �޾Ƽ� �� ������ �ƽ�Ű �ڵ带 ����ϴ� �۾��� �ݺ��ϴٰ� '0'\
�� �ԷµǸ� �ƽ�Ű �ڵ带 ����ϰ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
// ���ڿ� �ƽ�Ű�ڵ� ��� 
void PrintAscii(char _getChar, int _getAscii) {
	printf("%c -> %d\n", _getChar, _getAscii);
	return; 
}
// �����Է��� char ��ȯ 
char GetChar(void) {
	char ch;
	printf("���� �Է�(0�Է½� ����): ");
	scanf("%c", &ch); 
	getchar();
	return ch;
}
// �ƽ�Ű�ڵ� ��ȯ 
int CharToAscii(char _getChar) {
	return toascii(_getChar);
}
