#include <stdio.h>

void increase(int, int);

void main(void) {
	int amount = 10;
	// amount�� 20 �������� ����
	increase(amount, 20);
	printf("%d\n", amount); 
} 

void increase(int origin, int increment) {
	origin += increment;
}
