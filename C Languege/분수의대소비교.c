/*
�м��� ��Һ�
�� ���� �м��� �־����� �� �� ���� ū �м��� ����ϴ� ���α׷��� �ۼ��ϼ���. 
*/

#include <stdio.h>
#include <stdlib.h>

void comp (int a, int b) {
	if((a>100)||(b>100))	exit(1);
}

void main (void) {
	int num[2][2], i; 
	float calc[2]={0, 0};
	
	for(i=0; i<2; ++i) {
		printf("%d��° ���� �и� �Է�: ", i+1);
		scanf("%d %d", &num[i][0], &num[i][1]);
		calc[i] = num[i][0]/num[i][1];
	}
	
	if(calc[0]>calc[1])	printf("%d/%d\n", num[0][0], num[0][1]);
	else	printf("%d/%d\n", num[1][0], num[1][1]);
}
