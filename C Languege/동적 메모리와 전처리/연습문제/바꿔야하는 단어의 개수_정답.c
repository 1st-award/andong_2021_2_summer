// 바꿔야하는 단어의 개수 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
 
int solution(char *words[], int words_len, char *word) {
	int count = 0;
	int i, j;
	for(i=0; i<words_len; ++i) {
		for(j=0; j<strlen(words[i]); ++j) {
			if(words[i][j] != word[j])
				count++;
		}
	}
	return count;
}

void main(void) {
	char *words[3] = {"CODE", "COED", "CDEO"};
	int words_len = 3;
	char *word = "CODE";
	int ret = solution(words, words_len, word);
	printf("Result Solution: %d\n", ret);
} 
