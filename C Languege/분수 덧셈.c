/*
�м� ����
�� ���� �м��� �ԷµǸ� �м� ������ �Ͽ� ����ϼ���.
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b) {
	if((a>100)||(b>100))	exit(1);
}

void main (void) {	
	int a, b, calc[2][2], max, i, numCnt=0, num[numCnt];
	
	for(i=0; i<2; ++i) {
		printf("%d��° ���� �и� �Է�(100����): ", i+1);
		scanf("%d %d", &calc[i][0], &calc[i][1]);
		comp(calc[i][0], calc[i][1]); 
	}
	
	calc[0][0]*=calc[1][1]; // ù ��° ���� * �� ��° �и� 
	calc[1][0]*=calc[0][1]; // �� ��° ���� * ù ��° �и� 
	calc[0][1]*=calc[1][1]; // ù ��° �и� * �� ��° �и� 
	
	a = calc[0][0] + calc[1][0]; // ù ��° ���� + �� ��° ���� 
	b = calc[0][1];				 // ù ��° �и� 
	
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
