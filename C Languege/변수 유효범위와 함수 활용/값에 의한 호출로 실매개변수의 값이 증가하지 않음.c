#include <stdio.h>

void increase(int, int);

void main(void) {
	int amount = 10;
	// amount가 20 증가하지 않음
	increase(amount, 20);
	printf("%d\n", amount); 
} 

void increase(int origin, int increment) {
	origin += increment;
}
