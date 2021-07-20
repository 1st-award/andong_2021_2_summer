// 다음 결과를 쓰시오.
#include <stdio.h>

void main (void) {
	int arr[5] = {10, 20, 30, 40, 50};
	
	printf("%x\n", arr); // 62fe00
	puts("================");
	printf("%x %x\n", arr, &arr[0]); // 62fe00 62fe00
	printf("%x %x\n", arr+1, &arr[1]); // 62fe04 62fe04
	printf("%x %x\n", arr+2, &arr[2]); // 62fe08 62fe08
	printf("%x %x\n", arr+3, &arr[3]); // 62fe0c 62fe0c
	printf("%x %x\n", arr+4, &arr[4]); // 62fe10 62fe10
} 
