/*
	20�� ������ ���ڷ� �̷���� 10���� �ܾ�� �� ���� ���ڸ� �Է¹޾Ƽ�
	���������� �Է¹��� ���ڷ� ������ �ܾ ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
char **InputWord(void);
void PrintWord(char **, char);
void main(void) {
	char **str = InputWord();
	char symbol;
	printf("symbol: ");
	scanf("%c", &symbol);
	PrintWord(str, symbol);
} 

char **InputWord(void) {
	static char *word[10];
	int i;
	for(i=0; i<10; ++i) {
		word[i] = (char*)malloc(sizeof(char)*20);
		fgets(*(word+i), 20, stdin);
	}
	return word;
}
void PrintWord(char **_getWordArray, char _getSymbol) {
	char *ptr = NULL;
	int i, length;
	for(i=0; i<10; ++i) {
		ptr = strchr(*(_getWordArray+i), _getSymbol);
		length =  strlen(*(_getWordArray+i))-2; // fgets�� �޾ұ� ������ \0, \n�� ���ִ�. 
		if(ptr == *(_getWordArray+i)+length) 
			printf("%s\n", *(_getWordArray+i));
	}
}
