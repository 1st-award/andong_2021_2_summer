// 다음 출력 결과를 쓰시오.
#include <stdio.h>

void main (void) {
	int n = 0x11223344;
	
	printf("%x\n", *(char*)&n); // 44
	printf("%x\n", *(short*)&n); // 3344
	printf("%x\n", *(int*)&n); // 11223344
} 
