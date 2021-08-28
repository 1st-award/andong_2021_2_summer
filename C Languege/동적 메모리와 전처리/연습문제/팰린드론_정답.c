// 팰린드롬 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(char* sentence) {
	char *str = (char*)malloc(sizeof(char)*103);
	int len = 0, i;
	for(i=0; i<strlen(sentence); ++i) {
		char ch = sentence[i];
		if(ch!= ' ' && ch != '.')	str[len++] = ch;
	}
	printf("%s\n", str);
	for(i=0; i<len/2; ++i) {
		printf("%c %c\n", str[i], str[len-1-i]);
		if(str[i]!= str[len-1-i])	return false;
	}
	return true;
}

int main() {
	char sentence1[19] = "never odd or even";
	bool ret1 = solution(sentence1);
	printf("Solution: return value of the function is %s.\n", ret1 == true ? "true" : "false");
	
	char sentence2[19] = "palindrome";
	bool ret2 = solution(sentence2);
	printf("Solution: return value of the function is %s.\n", ret2 == true ? "true" : "false");
} 
