/*
세 수의 최소공배수
세 개의 자연수를 입력받아 세 수의 최소 공배수를 출력하는 프로그램을 작성하세요.
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b, int c) {
	if((a>100)||(b>100)||(c>100))	exit(1);
} 

void main (void) {
	int a, b, c, i, charm=0, cnt=0, max;
	
	printf("세 개의 자연수 입력(100이하): ");
	scanf("%d %d %d", &a, &b, &c);
	max = a>b ? a:b;
	max = max>c ? max:c;	
	int num[max];
	
	while(1) {
		// max의 약수 찾기 
		for(i=2; i<=max; ++i) {
			if(max%i==0){
				num[cnt++]=i;
			}	
		}
		//최소공배수 구하기 
		for(i=0; i<cnt; ++i) {
			if((a==num[i])||(b==num[i])||(c==num[i])) {
				charm++;	
			}
		}
		if(charm==3) {
			printf("최소공배수: %d\n", max);
			break;	
		}
		else {
			cnt=0;	
			charm=0;
			max++;
		}
	}
}
