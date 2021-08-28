/*
	영어 단어를 외우기 위해 단어를 반복하여 타이핑합니다. 
	그런데, 타이핑하고 보니 오타가 많습니다. 오타를 수정하려면 문자를 몇 개 바꿔야 하는지 구하려 합니다. 
	바꾸어야 할 단어의 개수를 구하시오.
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
	puts("====문자 입력====");
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
	puts("==== 치려 한 단어====");
	scanf("%s", word);
}
