/* 
	�� ������ �Է¹޾Ƽ� �ܾ� ������ �����Ͽ� 
	���ڿ��� �迭�� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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
