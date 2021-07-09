/*
약수의 곱
자연수 N이 주어지면 N의 약수를 모두 곱하여 얻은 수의 일의 자리부터 시작하여 연속되는 '0'의 개수를 구하여라.
*/

#include <stdio.h>
#include <stdlib.h>

void comp(int num) {
	if((num<10)||(num>100))	exit(1);
} 

void main(void) {
	int i, num, sum=1, cnt=0;
	
	printf("자연수 입력(10~100): ");
	scanf("%d", &num);	comp(num);
	
	for(i=2; i<=num; ++i) {
		if(num%i==0) {
			sum*=i;
			printf("%d, %d\n", i, sum);
		}	
	}
	
	for(i=0; i<sum; ++i) {
		if(sum%10!=0)	break;
		else {
			sum/=10;
			cnt++;
		}
	}
	
	
	printf("연속되는 0의 개수 : %d\n", cnt);
}
