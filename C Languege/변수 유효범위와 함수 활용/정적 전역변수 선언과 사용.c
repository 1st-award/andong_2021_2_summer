#include <stdio.h>

static int svar;
void increment();

void main(void) {
	int count = 1;
	for( ; count<=5; count++)	increment();
	printf("�Լ� increment()�� �� %d�� ȣ��Ǿ����ϴ�.\n", svar);
}

void increment() {
	svar++;
}

	
