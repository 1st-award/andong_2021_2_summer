/*
���μ� ����
���� N(1<=N<=20000)�� �Է¹޾� N�� ���μ� ������ ����� ����Ѵ�.
���μ� ���ض� ������ �Ҽ��� ������ ǥ���ϴ� ���� ���Ѵ�.
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
	
	printf("���� �Է�(1~20000): ");
	scanf("%d", &num);	comp(num);	 prime(num);
}
