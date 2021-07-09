#include <stdio.h>
#include <stdlib.h>

void comp (int num) {
	if((num<3)||(num>30))	exit(1);
}

void main (void) {
	int i, j, max, cnt=1;
	
	printf("자연수 입력(3~30): ");
	scanf("%d", &max);	comp(max);	int arr[max][max];
	
	for(i=0; i<max; ++i) {
		for(j=0; j<max; ++j) {
			arr[i][j]=0;
		}
	}
	
	for(i=max-1; i>=0; --i) {
		for(j=max-1 ; j>=i; --j) {
			arr[j][i]=cnt++;
		}
	}
	
	for(i=0; i<max; ++i) {
		for(j=0; j<max; ++j) {
			if(arr[i][j]!=0)	printf("%3d", arr[i][j]);
		}
		puts("");
	}
}
