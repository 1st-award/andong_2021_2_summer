#include <stdio.h>
#include <stdlib.h>

void comp(int num) {
	if((num<3)||(num>30))	exit(1);
}

void main (void) {
	int i, j, max, cnt;
	
	printf("�ڿ��� �Է�(3~30): ");
	scanf("%d", &max);	comp(max);	int arr[max][max];	cnt = max;
	
	for(i=0; i<max; ++i) {
		for(j=0; j<=i; ++j) {
			arr[i][j] = cnt--;
			printf("%3d", arr[i][j]);
		}
		cnt = 5;
		puts("");
}
