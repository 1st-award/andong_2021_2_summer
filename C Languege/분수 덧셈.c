/*
분수 덧셈
두 개의 분수가 입력되면 분수 덧셈을 하여 출력하세요.
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b) {
	if((a>100)||(b>100))	exit(1);
}

void main (void) {	
	int a, b, calc[2][2], max, i, numCnt=0, num[numCnt];
	
	for(i=0; i<2; ++i) {
		printf("%d번째 분자 분모 입력(100이하): ", i+1);
		scanf("%d %d", &calc[i][0], &calc[i][1]);
		comp(calc[i][0], calc[i][1]); 
	}
	
	calc[0][0]*=calc[1][1]; // 첫 번째 분자 * 두 번째 분모 
	calc[1][0]*=calc[0][1]; // 두 번째 분자 * 첫 번째 분모 
	calc[0][1]*=calc[1][1]; // 첫 번째 분모 * 두 번째 분모 
	
	a = calc[0][0] + calc[1][0]; // 첫 번째 분자 + 두 번째 분자 
	b = calc[0][1];				 // 첫 번째 분모 
	
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
