#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char name[20], univ[30];
	//char *name, *univ; 실행오류 발생 (malloc으로 크기를 정해주면 이용가능) 
	
	printf("%s", "이름입력>> ");
	scanf("%s", name);
	printf("%s", "학교입력>> ");
	scanf("%s", univ);
	printf("출력: %10s %10s\n", name, univ);
	return; 
}
