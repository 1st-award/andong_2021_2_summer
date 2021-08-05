// 한 단어를 표준입력을 입력받아 각각의 단어를 구성하는 문자를 역순으로 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *InputString(void);
void ReversePrint(char *);
void main(void) {
	printf("한 단어를 입력하세요: "); 
	ReversePrint(InputString());
}

char *InputString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	getchar();
	return str;
}
void ReversePrint(char *_getString) {
	int length = strlen(_getString);
	int i;
	printf("입력한 단어를 반대로 출력합니다. -> ");
	for(i=length; i>=0; --i) {
		printf("%c", *(_getString+i));		
	}
	puts("");
}
