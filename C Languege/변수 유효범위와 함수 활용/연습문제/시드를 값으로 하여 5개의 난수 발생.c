// 표준입력으로 입력된 수를 시드(seed) 값으로 하여 난수를 5개 발생시키는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int inputSeed, i;
	
	printf("시드 입력: ");
	scanf("%d", &inputSeed);
	srand(inputSeed);
	
	for(i=0; i<5; ++i) {
		printf("%d ", rand());
	}
} 
