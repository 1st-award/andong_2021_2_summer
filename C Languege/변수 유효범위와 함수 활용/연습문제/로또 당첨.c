// �ζ� ������ ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
	int overlapCount[45];
	int userLotto[6];
	int resultLotto[6];
	int i, j, randomNum, correctCount=0;
	srand((long)time(NULL));
	// overlapCount, resultLotto �ʱ�ȭ 
	for(i=0; i<45; ++i) {
		overlapCount[i]=0;
		if(i<6) resultLotto[i]=0;
	}
	// user �Է� 
	printf("������ ���ϴ� �ζ� ��ȣ(1 ~ 45�� ���� 6��) �Է� -> ");
	// userLotto �Է� 
	for(i=0; i<6; ++i) {
		scanf("%d", &userLotto[i]);
	} 
	// resultLotto �Է� 
	for(i=0; i<6; ++i) {
		randomNum = rand()%45+1; // 1~45 ���� 
		if(overlapCount[randomNum-1]==1)	--i;
		else {
			overlapCount[randomNum-1]++;
			resultLotto[i] = randomNum;
			// resultLotto�� userLotto������ ���� ���� ���� ã�� 
			for(j=0; j<6; ++j) {
				if(resultLotto[i] == userLotto[j]) correctCount++;
			}
		}
	}
	// ��� ���
	printf("�ζǸ� ��÷�մϴ�. ->\n"); 
	for(i=0; i<6; ++i) {
		printf("%d ", resultLotto[i]);
	}
	if(correctCount>2)	printf("\n%d�� �¾Ұ�, ��÷�Դϴ�.\n", correctCount);
	else				printf("\n%d�� �¾Ұ�, ���Դϴ�.\n", correctCount);
} 
