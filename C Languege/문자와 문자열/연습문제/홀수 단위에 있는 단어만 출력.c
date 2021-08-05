/* 
	공백을 포함한 문장을 입력 받아서 
	홀수 번째 단어를 차례로 출력하는 프로그램을 작성하시오. 
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
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
void PrintToken(char *_getString) {
	char *ptoken;
	char *delimiter = " ";
	int cnt=1;
	ptoken = strtok(_getString, delimiter);
	while(ptoken!=NULL) {
		if(cnt%2==1) 
			printf("%s\n", ptoken);
		cnt++;
		ptoken = strtok(NULL, delimiter);
	}
}
