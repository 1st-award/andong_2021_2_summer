#include <stdio.h>
#include <ctype.h>

void print2char(char);
void main(void) {
	char ch;
	printf("���ĺ�(����x) �Ǵ� �ٸ� ���ڸ� �Է��ϼ���.\n");
	do {
		printf("���� �Է� �� Enter: ");
		scanf("%c", &ch);
		getchar();
		if(isalpha(ch)) {
			print2char(ch);
		} 
		else {
			printf("�Է�: %c\n", ch);
		}
	}while(ch!='x');
}

void print2char(char _ch) {
	if(isupper(_ch)) {
		printf("�Է�: %c, ��ȯ: %c\n", _ch, tolower(_ch));
	}
	else {
		printf("�Է�: %c, ��ȯ: %c\n", _ch, toupper(_ch));
	}
}
