#include <stdio.h>

static int svar;
void increment();

void main(void) {
	int count = 1;
	for( ; count<=5; count++)	increment();
	printf("함수 increment()가 총 %d번 호출되었습니다.\n", svar);
}

void increment() {
	svar++;
}

	
