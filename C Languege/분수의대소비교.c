/*
분수의 대소비교
두 개의 분수가 주어지면 그 중 값이 큰 분수를 출력하는 프로그램을 작성하세요. 
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b) {
	if((a>100)||(b>100))	exit(1);
}

void main (void) {
	int num[2][2], i; 
	float calc[2]={0, 0};
	
	for(i=0; i<2; ++i) {
		printf("%d번째 분자 분모 입력: ", i+1);
		scanf("%d %d", &num[i][0], &num[i][1]);
		calc[i] = num[i][0]/num[i][1];
	}
	
	if(calc[0]>calc[1])	printf("%d/%d\n", num[0][0], num[0][1]);
	else	printf("%d/%d\n", num[1][0], num[1][1]);
}
