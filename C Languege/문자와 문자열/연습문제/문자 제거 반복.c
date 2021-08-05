/*
	문자열을 입력받은 후 정수를 입력받아 해당위치의 문자를 제거하고
	출력하는 작업을 반복하다가 문자 1개가 남으면 종료하는 프로그램을 작성하시오. 
	(첫 번째 문자의 위치는 1이며, 
	만약 입력받은 번호가 문자열의 길이 이상이면 마지막 문자를 제거한다.) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void RemoveAlpha(char *, int);
void main(void) {
	char *str = GetString();
	int position;
	while(strlen(str)!=1) {
		scanf("%d", &position);
		RemoveAlpha(str, position);
		printf("%s\n", str);
	}
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	getchar();
	return str;
}
void RemoveAlpha(char *_getString, int _getPosition) {
	int getLength = strlen(_getString);
	if(getLength<=_getPosition) {
		_getString[getLength-1] = '\0';
		return;
	}
	// printf("%d %s %d\n", getLength, _getString, _getPosition); 
	int i;
	for(i=_getPosition-1; i<getLength-1; ++i) {
		_getString[i] = _getString[i+1];
		_getString[i+1] = '\0';
	}
}
