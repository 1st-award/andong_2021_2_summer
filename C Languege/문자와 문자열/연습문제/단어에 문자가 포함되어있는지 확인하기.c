/*
	아래 소스와 같이 문자열 배열을 초기화하고, 문자 1개를 입력받아서 
	배열에 저장되어있는 단어들중 입력받은 문자로 시작하는 단어를 
	모두 출력하는 프로그램을 작성하시오. 
	만약 없을 경우는 "찾는 단어가 없습니다."라고 출력하시오.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FindSymbol(char);
void main(void) {
	char symbol;
	printf("문자를 입력하세요. "); 
	symbol = getchar();
	FindSymbol(symbol); 
} 

void FindSymbol(char _getSymbol) {
	char word[10][20] = {"champion", "tel", "pencil", "jungol", "olympiad"
						, "class", "information", "lesson", "book", "lion"};
	char *ptr;
	int i, cnt=0;
	for(i=0; i<10; ++i) {
		ptr = strchr(&word[i][0], _getSymbol);
		if(ptr == &word[i][0]) {
			cnt++;
			printf("%s\n", ptr);
		}
	}
	if(cnt==0)
		puts("찾는 단어가 없습니다.");
}
