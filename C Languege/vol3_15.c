/* 
������ ���� 
N(1<=N<=50)���� ���� �ܾ �Է¹޾� �� �ܾ ��� �ִ� ���ĺ��� ������ ����Ͽ� �Է��ϴ� ���α׷��� �ۼ��ϼ���.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void comp(int num) {
	if((num<1)||(num>50))	exit(1);
}

void main (void) {
	int i, j, cnt[26], max;
	char word[100];
	
	for(i=0; i<26; ++i) {
		cnt[i] = 0;
	}
	
	printf("�ܾ� �����Է�(1~50): ");
	scanf("%d", &max);	comp(max);	
	
	for(i=0; i<max; ++i) {
		scanf("%s", word);
		for(j=0; j<strlen(word); ++j) {
			cnt[toupper(word[j])-'A']++;
		}
	}
	
	for(i=0; i<26; ++i) {
		if(cnt[i]!=0)	printf("%c : %d\n", 'A'+i, cnt[i]);
	}
}
