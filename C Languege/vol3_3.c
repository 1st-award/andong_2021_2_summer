#include <stdio.h>

void comp(int max) {
	if(max>50)	exit(1);
}

int main (void) {
	int max, i, cnt=0;
	
	printf("A집합 원소 갯수 입력(50이하): ");
	scanf("%d", &max);	comp(max);	int arrA[max];
	printf("A집합 원소 입력: ");
	for(i=0; i<max; ++i) {
		scanf("%d", &arrA[i]);
	}
	
	printf("B집합 원소 갯수 입력(50이하): ");
	scanf("%d", &max);	comp(max);	int arrB[max];
	printf("B집합 원소 입력: ");
	for(i=0; i<max; ++i) {
		scanf("%d", &arrB[i]);
	}
	
	int arrC[11];
	arrC[7];
}

