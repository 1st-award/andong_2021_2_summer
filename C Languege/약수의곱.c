/*
����� ��
�ڿ��� N�� �־����� N�� ����� ��� ���Ͽ� ���� ���� ���� �ڸ����� �����Ͽ� ���ӵǴ� '0'�� ������ ���Ͽ���.
*/

#include <stdio.h>
#include <stdlib.h>

void comp(int num) {
	if((num<10)||(num>100))	exit(1);
} 

void main(void) {
	int i, num, sum=1, cnt=0;
	
	printf("�ڿ��� �Է�(10~100): ");
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
	
	
	printf("���ӵǴ� 0�� ���� : %d\n", cnt);
}
