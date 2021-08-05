/* 문자를 입력받아 엉떤종류인지 구분하여 출력하는
  작업을 반복하다가 영문자와 숫자 이외으 문자가 
  입력되면 종료하는 프로그램을 작성하시오. */
#include <stdio.h>
#include <string.h>

void main(void) {
	char c = 'a';
	
	while(1) {
		scanf("%c", &c);
		getchar();
		 
		if(isupper(c)) {
			puts("대문자입니다.");
		}
		else if(islower(c)) {
			puts("소문자입니다.");
		}
		else {
			puts("영문, 숫자 이외의 문자입니다."); 
			break; 
		} 
	}
}
