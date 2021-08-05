/*
	20개 이하의 문자로 이루어진 10개의 단어와 한 개의 문자를 입력받아서
	마지막으로 입력받은 문자로 끝나는 단어를 모두 출력하는 프로그램을 작성하시오.
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
		length =  strlen(*(_getWordArray+i))-2; // fgets로 받았기 때문에 \0, \n이 들어가있다. 
		if(ptr == *(_getWordArray+i)+length) 
			printf("%s\n", *(_getWordArray+i));
	}
}
