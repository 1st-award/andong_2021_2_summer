#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char str[] = "JAVA 2013 go c#";
	printf("%d\n", strlen("java"));	// java의 길이: 4 
	printf("%s, ", strlwr(str));	// 모두 소문자로 변환 
	printf("%s\n", strupr(str));	// 모두 대문자로 변환 
	
	// 문자열 VA가 시작되는 포인터 반환: VA 2013 GO C#
	printf("%s, ", strstr(str, "VA"));
	// 문자 A가 처음 나타나는 포인터 반환: AVA 2013 GO c#
	printf("%s\n", strchr(str, 'A'));
	return;	 
} 
