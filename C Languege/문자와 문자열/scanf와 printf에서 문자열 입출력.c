#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void) {
	char name[20], univ[30];
	//char *name, *univ; ������� �߻� (malloc���� ũ�⸦ �����ָ� �̿밡��) 
	
	printf("%s", "�̸��Է�>> ");
	scanf("%s", name);
	printf("%s", "�б��Է�>> ");
	scanf("%s", univ);
	printf("���: %10s %10s\n", name, univ);
	return; 
}
