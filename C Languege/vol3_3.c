#include <stdio.h>

void comp(int max) {
	if(max>50)	exit(1);
}

int main (void) {
	int max, i, cnt=0;
	
	printf("A���� ���� ���� �Է�(50����): ");
	scanf("%d", &max);	comp(max);	int arrA[max];
	printf("A���� ���� �Է�: ");
	for(i=0; i<max; ++i) {
		scanf("%d", &arrA[i]);
	}
	
	printf("B���� ���� ���� �Է�(50����): ");
	scanf("%d", &max);	comp(max);	int arrB[max];
	printf("B���� ���� �Է�: ");
	for(i=0; i<max; ++i) {
		scanf("%d", &arrB[i]);
	}
	
	int arrC[11];
	arrC[7];
}

