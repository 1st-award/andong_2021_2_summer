/*
	앞에서부터 읽을 때와 뒤에서부터 읽을 떄 똑같은 단어 또는 문장을 팬린드롬이라고 합니다.
	예를 들어서 racecar, noon은 팰린드롬 단어입니다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetString(char *);
int PrintPalindrome(char *);
void main(void) {
	char *str = (char*)calloc(100, sizeof(char));
	SetString(str);
	printf("palindrome? >> %s\n", PrintPalindrome(str) ? "true" : "false");
} 

void SetString(char *_setString) {
	fgets(_setString, 100, stdin);
}
int PrintPalindrome(char *_getString) {
	char startWord, endWord; 
	int length = strlen(_getString)-2;
	
	// 문자열 마지막이 '.'나 ' '으로 끝난다면 앞에있는 단어를출력 
	if(_getString[length] == '.' || _getString[length] == ' ')
		--length;
	startWord = _getString[0];
	endWord = _getString[length];
	
	printf("%c %c\n", startWord, endWord);
	if(startWord == endWord)
		return 1;
	else
		return 0;	
}
