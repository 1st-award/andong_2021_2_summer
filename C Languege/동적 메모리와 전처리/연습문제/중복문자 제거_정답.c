// 중복 문자 제거 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
 
char *solution(char *characters) {
	char *result = malloc(sizeof(char)*strlen(characters));
	int result_len = 0, i;
	result[0] = characters[0];
	result_len++;
	for(i=1; i<strlen(characters); ++i) {
		if(characters[i-1] != characters[i]) {
			result[result_len] = characters[i];
			result_len++;
		}
	} 
	result[result_len] = NULL;
	return result;
}

int main() {
	char *characters = "sentencccceeee";
	char *ret = solution(characters);
	
	printf("Solution: return value of the funcion is %s.\n", ret);
} 
