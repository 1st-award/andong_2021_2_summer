/*
���̾Ƹ�� �迭
N�� �Է¹޾� N*N�� �Ʒ��� ���� �Է��� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
N�� Ȧ���� �Էµȴ�.
*/

#include <stdio.h>
#include <stdlib.h>

void comp(int num) {
	if((num<3)||(num>31)&&(num%2!=1))	exit(1);
} 

void main(void) {
	int i, j, max, cnt=1;
	
	printf("Ȧ�� �Է�(3~31): ");
	scanf("%d", &max);	comp(max);	int arr[max][max];
	
	for(i=0; i<max; ++i) {
		for(j=0; j<max; ++j) {
			arr[i][j] = 0;
		}
	}
	
	for(i=0; i<=max/2; ++i) {
		for(j=max/2-i; j<=max/2+i; ++j) {
			arr[i][j] = cnt++;
		}
	}
	
	for(i=max/2+1; i<max; ++i) {
		for(j=i%(max/2+1)+1; j<max-(i%(max/2+1)+1); ++j) {
			arr[i][j] = cnt++;
		}
	}
	puts("");		
	for(i=0; i<max; ++i) {
		for(j=0; j<max; ++j) {
			if(arr[i][j]!=0)	printf("%3d", arr[i][j]);
			else printf("   ");
		}
		puts("");
	}
}
