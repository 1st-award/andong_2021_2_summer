/*
 ���ڿ��� �����ϰ� ������ ���� "ȫ�浿"�̶�� �̸��� �����Ͽ� 
 ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputName(char *);
void PrintName(char *);
void main(void) {
	char *name = (char*)malloc(sizeof(char)*20);
	InputName(name);
	PrintName(name);
} 

void InputName(char *_getName) {
	scanf("%s", _getName);
}
void PrintName(char *_getName) {
	printf("%s", _getName);
}
