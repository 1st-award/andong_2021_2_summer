/*
	�տ������� ���� ���� �ڿ������� ���� �� �Ȱ��� �ܾ� �Ǵ� ������ �Ҹ�����̶�� �մϴ�.
	���� �� racecar, noon�� �Ӹ���� �ܾ��Դϴ�.
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
	
	// ���ڿ� �������� '.'�� ' '���� �����ٸ� �տ��ִ� �ܾ��� 
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
