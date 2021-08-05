#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char str1[] = "C and C++\t language are best!";
	char *ptoken;
	char *delimiter = " ,\t!";
	// char *next_toekn; // strtok_s()에서 사용
	
	printf("문자열 \"%s\"을>>\n", str1);
	printf("구분자[%s]를 이용하여 토큰을 추출>>\n", delimiter);
	
	ptoken = strtok(str1, delimiter);
	// ptoken = strtok_s(str, delimiter, &next_token); // strtok_s()에서 사용 
	while(ptoken!=NULL) {
		printf("%s\n", ptoken);
		// 다음 토큰을 반환 
		ptoken = strtok(NULL, delimiter); 
		// ptoken = strtok_s(NULL, delimiter, &next_token);
	}
	return;
} 
