#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char str1[] = "C and C++\t language are best!";
	char *ptoken;
	char *delimiter = " ,\t!";
	// char *next_toekn; // strtok_s()���� ���
	
	printf("���ڿ� \"%s\"��>>\n", str1);
	printf("������[%s]�� �̿��Ͽ� ��ū�� ����>>\n", delimiter);
	
	ptoken = strtok(str1, delimiter);
	// ptoken = strtok_s(str, delimiter, &next_token); // strtok_s()���� ��� 
	while(ptoken!=NULL) {
		printf("%s\n", ptoken);
		// ���� ��ū�� ��ȯ 
		ptoken = strtok(NULL, delimiter); 
		// ptoken = strtok_s(NULL, delimiter, &next_token);
	}
	return;
} 
