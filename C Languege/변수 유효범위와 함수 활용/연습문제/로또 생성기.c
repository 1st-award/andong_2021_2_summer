// 1~45������ ���� �߿��� 6���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void main(void) {
	int overlapCount[45];
	int lotto[6];
	int i, randomNum;
	srand((long)time(NULL));
	
	for(i=0; i<45; ++i) {
		overlapCount[i]=0;
		if(i<6) lotto[i]=0;
	}
	
	for(i=0; i<6; ++i) {
		randomNum = rand()%45+1; // 1~45 ���� 
		if(overlapCount[randomNum-1]==1)	--i;
		else {
			overlapCount[randomNum-1]++;
			lotto[i] = randomNum;	
		}
	}
	
	for(i=0; i<6; ++i) {
		printf("%d ", lotto[i]);
	}
}
