/*
	���� �ܾ �ܿ�� ���� �ܾ �ݺ��Ͽ� Ÿ�����մϴ�. 
	�׷���, Ÿ�����ϰ� ���� ��Ÿ�� �����ϴ�. ��Ÿ�� �����Ϸ��� ���ڸ� �� �� �ٲ�� �ϴ��� ���Ϸ� �մϴ�. 
	�ٲپ�� �� �ܾ��� ������ ���Ͻÿ�.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetINFO(char **, int*, char*);
int solution(char **words, int words_len, char *word) {
	int i, j, count=0;
	for(i=0; i<words_len; ++i) {
		for(j=0; j<strlen(words[i]); ++j) {
			if(words[i][j] != word[j])
				++count;
		}
	}
	return count;
}

void main(void) {
	char *words[15];
	int words_len;
	char *word = (char*)malloc(sizeof(char)*10);
	SetINFO(words, &words_len, word);
	printf("Result Solution: %d\n", solution(words, words_len, word));
}
void SetINFO(char **words, int *words_len, char *word) {
	int i;
	puts("====���� �Է�====");
	for(i=0; i<15; ++i) {
		char *str = (char*)malloc(sizeof(char)*10);
		scanf("%s", str);
		if(strcmp(str, "-1") == 0)
			break;
		else if(strlen(str) == 10)
			exit(1);
		else
			words[i] = str;
	}
	*words_len = i;
	puts("==== ġ�� �� �ܾ�====");
	scanf("%s", word);
}
