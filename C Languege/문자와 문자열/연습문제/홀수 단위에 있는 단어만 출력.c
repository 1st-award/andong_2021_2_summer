/* 
	������ ������ ������ �Է� �޾Ƽ� 
	Ȧ�� ��° �ܾ ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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
