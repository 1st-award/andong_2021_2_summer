// 로또 복권을 모의 실험하는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
	int overlapCount[45];
	int userLotto[6];
	int resultLotto[6];
	int i, j, randomNum, correctCount=0;
	srand((long)time(NULL));
	// overlapCount, resultLotto 초기화 
	for(i=0; i<45; ++i) {
		overlapCount[i]=0;
		if(i<6) resultLotto[i]=0;
	}
	// user 입력 
	printf("본인이 원하는 로또 번호(1 ~ 45의 숫자 6개) 입력 -> ");
	// userLotto 입력 
	for(i=0; i<6; ++i) {
		scanf("%d", &userLotto[i]);
	} 
	// resultLotto 입력 
	for(i=0; i<6; ++i) {
		randomNum = rand()%45+1; // 1~45 난수 
		if(overlapCount[randomNum-1]==1)	--i;
		else {
			overlapCount[randomNum-1]++;
			resultLotto[i] = randomNum;
			// resultLotto와 userLotto사이의 동일 숫자 개수 찾기 
			for(j=0; j<6; ++j) {
				if(resultLotto[i] == userLotto[j]) correctCount++;
			}
		}
	}
	// 결과 출력
	printf("로또를 추첨합니다. ->\n"); 
	for(i=0; i<6; ++i) {
		printf("%d ", resultLotto[i]);
	}
	if(correctCount>2)	printf("\n%d개 맞았고, 당첨입니다.\n", correctCount);
	else				printf("\n%d개 맞았고, 꽝입니다.\n", correctCount);
} 
