// 1 ~ 20������ �����߿��� 100���� ������ �߻����� ���� �� ���� ����ϼ���.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
	int numberCount[20];
	int i, number, sum=0, maxCount=0, maxIndex=0;
	srand((long)time(NULL));
	// numberCount �ʱ�ȭ 
	for(i=0; i<20; ++i) 
		numberCount[i]=0;
	// 1~20 ������ ���� �߻� 
	for(i=0; i<100; ++i) {
		number = rand()%20+1;
		printf("%2d ", number);
		numberCount[number-1]++;
		if((i+1)%20==0)	puts("");
	}
	// ��� ��� 
	puts("\n------------------------------------------");
	printf("��ȣ"); 
	for(i=0; i<20; ++i) {
		printf("%2d ", i+1); 
	} 
	puts("\n------------------------------------------");
	printf("Ƚ��");
	for(i=0; i<20; ++i) {
		sum+=numberCount[i];
		printf("%2d ", numberCount[i]);
		if(maxCount<numberCount[i]) {
			maxCount = numberCount[i];	
			maxIndex = i;
		}
	}
	printf("\n\n�� ���� �󵵼��� %d�Դϴ�.\n\n", sum);
	printf("1 ~ 20 �� ���� ���� ���� ���� %d�̰�, %d�� ���Խ��ϴ�.\n", maxIndex+1, maxCount);
} 
