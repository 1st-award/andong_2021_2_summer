/*
소인수 분해
정수 N(1<=N<=20000)이 입력받아 N을 소인수 분해한 결과를 출력한다.
소인수 분해란 정수를 소수의 곱으로 표현하는 것을 말한다.
*/

#include <stdio.h>
#include <stdlib.h>

void comp(int num) {
	if((num<1)||(num>20000))	exit(1); 
} 

void prime(int num) { 
	int i, even = 2;
	
	while(1) {
		if(num%even==0) {
			printf("%d ", even);
			num/=even;
			if(num==1)	break;
		}
		else	even++;
	}
}

void main(void) {
	int num;
	
	printf("정수 입력(1~20000): ");
	scanf("%d", &num);	comp(num);	 prime(num);
}
