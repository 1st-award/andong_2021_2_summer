// ���ڸ� �ϳ� �Է¹޾� �ƽ�Ű�ڵ尪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h> 
#include <string.h>

char InputChar(void);
int GetAsciiCode(char);
void main(void) {
	printf("���� �ϳ��� �Է��ϼ���: ");
	printf("�Է��Ͻ� ������ �ƽ�Ű �ڵ�: %d", GetAsciiCode(InputChar()));
}

char InputChar(void) {
	char c;
	scanf("%c", &c);
	return c;
}
int GetAsciiCode(char _getChar) {
	return (int)_getChar;
}
