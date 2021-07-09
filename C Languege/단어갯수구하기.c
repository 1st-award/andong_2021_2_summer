#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void comp(int num) {
	if((num<3)||(num>30))	exit(1);
}

void main(void) {
	int i, j, max, alphaCnt[26];
	char alpha[100];
	
	printf("단어 갯수 입력(3~30): ");
	scanf("%d", &max);	comp(max);
	
	for(i=0; i<26; ++i)	alphaCnt[i] = 0;
	
	for(i=0; i<max; ++i) {
		scanf("%s", alpha);
		for(j=0; j<strlen(alpha); ++j) {
			alphaCnt[toupper(alpha[j])-'A']++;
		}
		puts("");
	}
	
	for(i=0; i<26; ++i) {
		if(alphaCnt[i]!=0)	printf("%c : %d\n", 'A'+i, alphaCnt[i]);
	}
}
