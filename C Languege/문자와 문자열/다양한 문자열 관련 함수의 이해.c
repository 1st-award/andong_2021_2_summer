#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char str[] = "JAVA 2013 go c#";
	printf("%d\n", strlen("java"));	// java�� ����: 4 
	printf("%s, ", strlwr(str));	// ��� �ҹ��ڷ� ��ȯ 
	printf("%s\n", strupr(str));	// ��� �빮�ڷ� ��ȯ 
	
	// ���ڿ� VA�� ���۵Ǵ� ������ ��ȯ: VA 2013 GO C#
	printf("%s, ", strstr(str, "VA"));
	// ���� A�� ó�� ��Ÿ���� ������ ��ȯ: AVA 2013 GO c#
	printf("%s\n", strchr(str, 'A'));
	return;	 
} 
