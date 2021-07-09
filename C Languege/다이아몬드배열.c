/*
다이아몬드 배열
N을 입력받아 N*N에 아래와 같이 입력한 다음 출력하는 프로그램을 작성하세요.
N은 홀수만 입력된다.
*/

#include <stdio.h>
#include <stdlib.h>

void comp(int num) {
	if((num<3)||(num>31)&&(num%2!=1))	exit(1);
} 

void main(void) {
	int i, j, max, cnt=1;
	
	printf("홀수 입력(3~31): ");
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
