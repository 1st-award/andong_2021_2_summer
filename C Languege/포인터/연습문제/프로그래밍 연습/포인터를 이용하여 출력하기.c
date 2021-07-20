// 다음과 같이 int형 변수 i에 0x324F3A24을 정의하고, char *변수 pc를 선언하여\
pc변수를 이용하여 i의 저장값을 16진수 324F3A24로 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main(void) {
	int i = 0x324F3A24;
	char *pc = (char *)&i+1;
	int n;
	
	for(n=3; n>=0; --n) {
		printf("%x", *(pc+n));
	}
} 
