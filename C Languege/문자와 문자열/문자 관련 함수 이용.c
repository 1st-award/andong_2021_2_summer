#include <stdio.h>
#include <ctype.h>

void print2char(char);
void main(void) {
	char ch;
	printf("알파벳(종료x) 또는 다른 문자를 입력하세요.\n");
	do {
		printf("문자 입력 후 Enter: ");
		scanf("%c", &ch);
		getchar();
		if(isalpha(ch)) {
			print2char(ch);
		} 
		else {
			printf("입력: %c\n", ch);
		}
	}while(ch!='x');
}

void print2char(char _ch) {
	if(isupper(_ch)) {
		printf("입력: %c, 변환: %c\n", _ch, tolower(_ch));
	}
	else {
		printf("입력: %c, 변환: %c\n", _ch, toupper(_ch));
	}
}
