#include <stdio.h>

void increment(void);
void main(void) {
	int count = 0;
	for( ; count<3; ++count) {
		increment();
	}
}

void increment(void) {
	static int indexS = 1;	// ���� �������� 
	auto int indexA = 1;	// �ڵ����� ���� 
	printf("���� �������� indexS: %2d,\t", indexS++);
	printf("�ڵ� �������� indexA: %2d\n", indexA++);
}
