#include <stdio.h>
#define SIZE 3

void main(void) {
	int i, sum=0;
	int score[] = {89, 98, 76};
	
	printf("첨자	주소	저장값\n");
	for(i=0; i<3; ++i) {
		printf("%2d %10u %6d\n", i, (score+i), *(score+i));
		puts("");
	}
	
	printf("score: %u\n", score);
	printf("&scire[0]: %u\n", &score[0]);
}
