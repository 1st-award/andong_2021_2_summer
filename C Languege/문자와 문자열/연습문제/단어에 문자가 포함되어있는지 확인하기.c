/*
	�Ʒ� �ҽ��� ���� ���ڿ� �迭�� �ʱ�ȭ�ϰ�, ���� 1���� �Է¹޾Ƽ� 
	�迭�� ����Ǿ��ִ� �ܾ���� �Է¹��� ���ڷ� �����ϴ� �ܾ 
	��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	���� ���� ���� "ã�� �ܾ �����ϴ�."��� ����Ͻÿ�.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FindSymbol(char);
void main(void) {
	char symbol;
	printf("���ڸ� �Է��ϼ���. "); 
	symbol = getchar();
	FindSymbol(symbol); 
} 

void FindSymbol(char _getSymbol) {
	char word[10][20] = {"champion", "tel", "pencil", "jungol", "olympiad"
						, "class", "information", "lesson", "book", "lion"};
	char *ptr;
	int i, cnt=0;
	for(i=0; i<10; ++i) {
		ptr = strchr(&word[i][0], _getSymbol);
		if(ptr == &word[i][0]) {
			cnt++;
			printf("%s\n", ptr);
		}
	}
	if(cnt==0)
		puts("ã�� �ܾ �����ϴ�.");
}
