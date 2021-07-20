#include <stdio.h>

void main (void) {
	int arr[5] = {10, 20, 30, 40, 50};
	
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]); // 10 20 30 40 50
	printf("%d %d %d %d %d\n", *arr, *(arr+1), *(arr+2), *(arr+3), *(arr+4)); // 10 20 30 40 50
}
