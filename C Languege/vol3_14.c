#include <stdio.h>
#include <stdlib.h>

void comp (int num) {
	if((num<3)||(num>31))	exit(1);
}

void main (void ){
	int i, j, max, cnt=1;
	
	printf("자연수 입력(3~31): ");
	scanf("%d", &max);	comp(max);	int arr[max][max];
	
	for(i=0; i<max; ++i) {
		for(j=0; j<max; ++j) {
			arr[i][j]=0;
		}
	}
	
	for(i=0; i<max/2; ++i) {
		for(j=i; j<max-i; ++j) {
			arr[i][j] = cnt++;
		}	
	}
	
	for(i=(max/2); i<max; ++i) {
		for(j=max-i-1; j<=i; ++j) {
			arr[i][j] = cnt++;
		}
	}
	
	
	
	for(i=0; i<max; ++i) {
		for(j=0; j<max; ++j) {
			if(arr[i][j]!=0)	printf("%3d", arr[i][j]);
			else printf("   ");
		}
		puts("");
	}
}
