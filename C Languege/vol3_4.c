#include <stdio.h>
#include <stdlib.h>
void comp (int num) {
	if((num<5)|| (num>100))	exit(1);
}

int main (void) {
	int i, j, sum=0, max;
	
	printf("�ڿ��� �Է�(5~100): ");
	scanf("%d", &max);	comp(max);
	
	for(i=1; i<=max; ++i) {
		for(j=1; j<=i; ++j) {
			sum+=j;
		}
	}
	
	printf("%d", sum);
}
