/* 
	공백을 포함한 문자열을 입력받아 다음과 같이 분리하여
	번호와 함께 출력하는 프로그램을 작성하시오. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void PrintSeparateString(char *);
void main(void) {
	PrintSeparateString(GetString());
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	fgets(str, 30, stdin);
	return str;
}
void PrintSeparateString(char *_getString) {
	int getLength = strlen(_getString);
	int i=0, cnt=1;
	// Separate Start
	while(i!=getLength) {
		printf("%d. ", cnt);
		// Word Print
		for(i; i<getLength; ++i) {
			// word == space
			if(isspace(_getString[i])) {
				i++;
				cnt++;
				break;
			}
			// word != space
			else
				printf("%c", _getString[i]);
		}
		puts("");
	}
}
