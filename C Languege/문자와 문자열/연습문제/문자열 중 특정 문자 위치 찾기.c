/*
	�ܾ�� ���� �� ���� �Է¹޾Ƽ� �ܾ�� �Է¹��� ���ڿ� ���� ���ڸ� ã�Ƽ� 
	�� ��ġ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	(�ܾ�� ù ��° ������ ��ġ�� 0���� �ϰ�, ã�� ���ڰ� ���� ���� ���� ó��
	������ ��ġ�� ����ϰ�, ã�� ���ڰ� ���� ���� "No"��� ����Ѵ�. ��ҹ��ڴ� �����ȴ�.) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
char GetSymbol(void);
int SearchSymbolPosition(char *, char);
void main(void) {
	char *str = GetString();
	char symbol = GetSymbol();
	int position = SearchSymbolPosition(str, symbol);
	if(position!=-1) {
		printf("%d\n", position);
	}
	else {
		printf("No\n");
	}
}

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
char GetSymbol(void) {
	char symbol;
	scanf("%c", &symbol);
	getchar();
	return symbol;
}
int SearchSymbolPosition(char *_getString, char _getSymbol) {
	int getLength = strlen(_getString);
	int i;
	for(i=0; i<getLength; ++i) {
		if(_getString[i] == _getSymbol)
			return i;
	} 
	return -1;
}

