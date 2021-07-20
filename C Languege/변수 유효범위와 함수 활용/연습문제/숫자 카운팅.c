// 1 ~ 20까지의 정수중에서 100개의 난수를 발생시켜 출현 빈도 수를 출력하세요.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
	int numberCount[20];
	int i, number, sum=0, maxCount=0, maxIndex=0;
	srand((long)time(NULL));
	// numberCount 초기화 
	for(i=0; i<20; ++i) 
		numberCount[i]=0;
	// 1~20 사이의 난수 발생 
	for(i=0; i<100; ++i) {
		number = rand()%20+1;
		printf("%2d ", number);
		numberCount[number-1]++;
		if((i+1)%20==0)	puts("");
	}
	// 결과 출력 
	puts("\n------------------------------------------");
	printf("번호"); 
	for(i=0; i<20; ++i) {
		printf("%2d ", i+1); 
	} 
	puts("\n------------------------------------------");
	printf("횟수");
	for(i=0; i<20; ++i) {
		sum+=numberCount[i];
		printf("%2d ", numberCount[i]);
		if(maxCount<numberCount[i]) {
			maxCount = numberCount[i];	
			maxIndex = i;
		}
	}
	printf("\n\n총 출현 빈도수는 %d입니다.\n\n", sum);
	printf("1 ~ 20 중 가장 많이 나온 수는 %d이고, %d번 나왔습니다.\n", maxIndex+1, maxCount);
} 
