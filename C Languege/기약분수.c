/*
���м�
�ϳ��� �м��� �ԷµǸ� ���м��� �ٲپ� ����ϴ� ���α׷��� �ۼ��ϼ���.
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b) {
	if((a>100)||(b>100))	exit(1);
}

void main (void) {	
	int a, b, max, i, numCnt=0, num[numCnt];
	
	printf("���� �и� �Է�(100����): ");
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
