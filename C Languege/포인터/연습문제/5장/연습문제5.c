// 다음 프로그램의 오류 발생 원인을 쓰시오.

#include <stdio.h>

void main(void) {
	char *str = "ABCDEF";	/*포인터 변수 이름은 Stack에 저장되지만 
							데이터는 개발자가 수정할 수 없는 곳에 저장(Data Area)되기에
							 불러오는것은 가능하나 수정할 수 없다.*/
							 
	char arr[] = "ABCDEF";	/* 배열은 변수 이름 데이터 모두 Stack에 저장되므로 
								데이터를 불러오는 것은 물론 수정이 가능하다.*/
								
	str[0] = 'Z'; 
	str[1] = 'Z';
	
	printf("%c %c\n", str[0], str[1]);
} 
