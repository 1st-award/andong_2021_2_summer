#include <stdio.h>

void main(void) {
	register int count;
	for(count=1; count<=100; ++count);
		// scanf("%d", &count);	// 문법 오류 발생 
		// printf("u ", &count);// register변수는 일반 메모리에 할당되는게\
								아니므로 &연산자에 에러가 발생한다. 
		printf("%d\n", count);
}
