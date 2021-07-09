/*
최소 기약분수
세 개의 분수가 주어지면 이 세분수 중 어느 것에 곱하여도 그 결과가 자연수가
되는 분수 중에서 가장 작은 기약분수를 출력하는 프로그램을 작성하세요.
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b) {
	if((a>100)||(b>100))	exit(1);
} 

void main (void) {
	int num[3][2], i, maxC, maxP, cntC=0, cntP=0, charm=0;
	
	for(i=0; i<3; ++i) {
		printf("%d번째 분수 입력: ", i+1);
		scanf("%d %d", &num[i][0], &num[i][1]);	comp(num[i][0], num[i][1]);
	}
	
	for(i=0; i<2; ++i) {
		if(i==0) {
			maxC = num[i][0] > num[i+1][0] ? num[i][0] : num[i+1][0];
			maxP = num[i][1] > num[i+1][1] ? num[i][1] : num[i+1][1];
		}
		else {
			maxC = num[i+1][0] > maxC ? num[i+1][0] : maxC;
			maxP = num[i+1][1] > maxP ? num[i+1][1] : maxP;
		}
	}
	
	printf("maxC : %d\nmaxP : %d\n", maxC, maxP);
	// int numC[maxC], numP[maxP];
	int numC[maxC], numP[maxP];
	while(1) {
		printf("maxC : ");
		for(i=2; i<maxC; ++i) {
			if(maxC%2==0) {
				numC[cntC++] = i;
				printf("%d ", i);
			}
		}
		puts("");
		printf("maxP : ");
		for(i=2; i<maxP; ++i) {
			if(maxP%2==0) {
				numP[cntP++] = i;
				printf("%d ", i);
			}
		}
		puts("");
		printf("numC : ");
		for(i=0; i<cntC; ++i) {
			if((num[0][0]==numC[i])||(num[1][0]==numC[i])||(num[2][0]==numC[i])) {
				printf("%d ", numC[i]);
				charm++;
			}
		}
		puts("");
		printf("numP : ");
		for(i=0; i<cntP; ++i) {
			if((num[0][1]==numP[i])||(num[1][1]==numP[i])||(num[2][1]==numP[i])) {
				printf("%d ", numC[i]);
				charm++;
			}
		}
		puts("");
		if(charm==6) {
			printf("최소 기약분수 : %d/%d\n", maxP, maxC);
		}
		else {
			maxC++;	maxP++;
			cntC=0;	cntP=0;
			charm=0;
		}
	}
}
