/* 
	���ĺ� ���ڿ��� �־��� ��, �����ϴ� �ߺ� ���ڸ� �����Ϸ��� �մϴ�.
	���� ���, "senteeeeeeencccccccceeeeeeee"��� ���ڿ��� �־����ٸ�.
	"sentence"��� ������� ���ɴϴ�.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetString(char *);
char *Deduplication(char *);
void main(void) {
	char *characters = (char*)calloc(100, sizeof(char));
	SetString(characters);
	printf("Result >> %s\n", Deduplication(characters));
}

void SetString(char *_setString) {
	scanf("%s", _setString);
	if(strlen(_setString)<10 || strlen(_setString)>100) {
		puts("��������");
		exit(1);
	}
}
char *Deduplication(char *_getString) {
	int length = strlen(_getString);
	int i, resultLength=0;
	char *result = (char*)calloc(100, sizeof(char));
	char word;
	for(i=0; i<length; ++i) {
		if(word != _getString[i]){
			word = _getString[i];
			result[resultLength++] = word;
		}
	}
	return result;
}
