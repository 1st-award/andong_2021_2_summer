/*
기약분수
하나의 분수가 입력되면 기약분수로 바꾸어 출력하는 프로그램을 작성하세요.
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b) {
	if((a>100)||(b>100))	exit(1);
}

void main (void) {	
	int a, b, max, i, numCnt=0, num[numCnt];
	
	printf("분자 분모 입력(100이하): ");
	scanf("%d %d", &a, &b);
	max = a>b ? a:b;
	
	for(i=2; i<max; ++i) {
		if((a%i==0)&&(b%i==0)) {
			num[numCnt++] = i;
		}
	}
	puts("");
	for(i=0; i<numCnt; ++i) {
		if((a==1)||(b==1))	break;
		else if((a%num[i]==0)&&(b%num[i]==0)) {
			a/=num[i];
			b/=num[i];
			i--;
		}
	}
	
	printf("%d/%d\n", a, b);
}
