#include <stdio.h>
#include <stdlib.h>

void comp (int num) {
	if((num<3)||(num>1000))	exit(1);
}

void main (void) {
	int i, j, max;
	
	printf("학생 수 입력(3~1000): ");
	scanf("%d", &max);	comp(max);	
	int score[max]; int rank[max];
	
	for(i=0; i<max; ++i) {
		rank[i] = 1;
	}
	
	printf("점수 입력: ");
	for(i=0; i<max; ++i) {
		scanf("%d", &score[i]); 
	}
	
	for(i=0; i<max; ++i) {
		for(j=0; j<max; ++j) {
			if(score[i]>score[j])	rank[j]++;	
		}
	}
	
	for(i=0; i<max; ++i) {
		printf("%d ", rank[i]);
	}
}
