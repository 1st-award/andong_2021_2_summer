/*
 두 개의 단어를 입력받아서 길이가 긴 단어의 문자 개수를
 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
int CompareStringLength(char*, char*);
void main(void) {
	char *strA = GetString();
	char *strB = GetString();
	printf("%d", CompareStringLength(strA, strB));
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	getchar(); 
	return str;
}
int CompareStringLength(char *_getStringA, char *_getStringB) {
	int lengthA = strlen(_getStringA);
	int lengthB = strlen(_getStringB);
	return  lengthA > lengthB ? lengthA : lengthB;
}
