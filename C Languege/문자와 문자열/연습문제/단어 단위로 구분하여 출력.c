/* 
	한 문장을 입력받아서 단어 단위로 구분하여 
	문자열을 배열에 저장하고 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *InputString(void);
void PrintToken(char *);
void main(void) {
	PrintToken(InputString());
} 

char *InputString(void) {
	char *str = (char*)malloc(sizeof(char)*50);
	fgets(str, 50, stdin);
	return str;
}
void PrintToken(char *_getString) {
	char *ptoken;
	char *delimiter = " ";
	ptoken = strtok(_getString, delimiter);
	while(ptoken!=NULL) {
		printf("%s\n", ptoken);
		ptoken = strtok(NULL, delimiter);
	}
}
