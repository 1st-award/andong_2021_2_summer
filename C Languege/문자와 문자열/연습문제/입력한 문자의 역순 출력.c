// �� �ܾ ǥ���Է��� �Է¹޾� ������ �ܾ �����ϴ� ���ڸ� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *InputString(void);
void ReversePrint(char *);
void main(void) {
	printf("�� �ܾ �Է��ϼ���: "); 
	ReversePrint(InputString());
}

char *InputString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	getchar();
	return str;
}
void ReversePrint(char *_getString) {
	int length = strlen(_getString);
	int i;
	printf("�Է��� �ܾ �ݴ�� ����մϴ�. -> ");
	for(i=length; i>=0; --i) {
		printf("%c", *(_getString+i));		
	}
	puts("");
}
