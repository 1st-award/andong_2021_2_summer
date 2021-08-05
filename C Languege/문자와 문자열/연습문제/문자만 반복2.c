/* 
문자를 입력받아 알파벳 문자인 경우에는 그래로 출력하고 숫자인 경우는 
아스키코드값을 출력하는 작업을 반복하다가 기타의 문자가 입력되면 
종료하는 프로그램을 작성하시오.
*/
#include <stdio.h>
#include <string.h>

void main(void) {
	char c;
	while(1) {
		scanf("%c", &c);
		getchar();
		
		if(isalpha(c)) {
			printf("%c\n", c);
		} 
		else if(isdigit(c)) {
			printf("%d\n", c);
		}
		else {
			break;
		}
	}
} 
