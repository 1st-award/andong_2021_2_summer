/*
�� ���� �ּҰ����
�� ���� �ڿ����� �Է¹޾� �� ���� �ּ� ������� ����ϴ� ���α׷��� �ۼ��ϼ���.
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b, int c) {
	if((a>100)||(b>100)||(c>100))	exit(1);
} 

void main (void) {
	int a, b, c, i, charm=0, cnt=0, max;
	
	printf("�� ���� �ڿ��� �Է�(100����): ");
	scanf("%d %d %d", &a, &b, &c);
	max = a>b ? a:b;
	max = max>c ? max:c;	
	int num[max];
	
	while(1) {
		// max�� ��� ã�� 
		for(i=2; i<=max; ++i) {
			if(max%i==0){
				num[cnt++]=i;
			}	
		}
		//�ּҰ���� ���ϱ� 
		for(i=0; i<cnt; ++i) {
			if((a==num[i])||(b==num[i])||(c==num[i])) {
				charm++;	
			}
		}
		if(charm==3) {
			printf("�ּҰ����: %d\n", max);
			break;	
		}
		else {
			cnt=0;	
			charm=0;
			max++;
		}
	}
}
