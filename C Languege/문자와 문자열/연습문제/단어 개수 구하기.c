/*
 공백을 포함한 100글자 이하의 문자열을 입력받아 
 문장을 이루는 단어의 개수를 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *GetString(void);
int CountWord(char *);
void main(void){
	printf("%d\n", CountWord(GetString()));
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*100);
	fgets(str, 100, stdin);
	return str;
}
int CountWord(char *_getString) {
	int countWord = 0;
	int getLength = strlen(_getString);
	int i;
	bool inWord = isalpha(*_getString);
	for(i=0; i<getLength; ++i) {
		if(isspace(*(_getString+i)) && (inWord==true)) {
			++countWord;
		}
	}
	return countWord;
}
