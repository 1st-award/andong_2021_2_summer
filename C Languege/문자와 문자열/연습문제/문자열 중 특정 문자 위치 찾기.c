/*
	단어와 문자 한 개를 입력받아서 단어에서 입력받은 문자와 같은 문자를 찾아서 
	그 위치를 출력하는 프로그램을 작성하시오. 
	(단어에서 첫 번째 문자의 위치는 0으로 하고, 찾는 문자가 여러 개일 때는 처음
	나오는 위치를 출력하고, 찾는 문자가 없을 때는 "No"라고 출력한다. 대소문자는 구별된다.) 
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

