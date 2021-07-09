#include <stdio.h>
#include <stdlib.h>

void comp (int num) {
	if((num<3)||(num>100))	exit(1);
}

void main (void) {
	int i, j, max, maxNum, temp;
	
	printf("자연수 갯수 입력(3~100): ");
	scanf("%d", &max);
	int arr[max];
	
	printf("자연수 입력: ");
	for(i=0; i<max; ++i) {
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<max; ++i) {
		for(j=i; j<max; ++j) {
			if(arr[i]>arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	for(i=0; i<max; ++i) {
		printf("%d ", arr[i]);
	}
}
