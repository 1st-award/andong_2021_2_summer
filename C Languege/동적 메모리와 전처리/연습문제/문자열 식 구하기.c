/*
	���ڿ� ������ ���� ����Ϸ� �մϴ�. ���� 2���� �ڿ����� 1���� ������(+, -, * �� �ϳ�)�� �̷���� �ֽ��ϴ�. 
	���� ��� �־��� ���� 123+123��� �̸� ����� ����� 135�Դϴ�. ���� ���� ���ϼ���. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetINFO(char *);

int solution(char *expression) {
	// ������ ���ϱ� 
	char symbol;
	int i;
	for(i=0; i<strlen(expression); ++i)
		if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*')
			symbol = expression[i];
	// ���� ������ �� ���ϱ�  
	char *ptoken;
	char *delimiter = "+-*";
	char first_num[5];
	char end_num[5];
	ptoken = strtok(expression, delimiter);
	strcpy(first_num, ptoken);
	ptoken = strtok(NULL, delimiter);
	strcpy(end_num, ptoken);
	// �����ϱ�
	switch(symbol) {
		case '+':
			return atoi(first_num) + atoi(end_num);
		case '-':
			return atoi(first_num) - atoi(end_num);
		case '*':
			return atoi(first_num) * atoi(end_num);
	} 
}

void main(void) {
	// ���ڴ� 1 ~ 10000 -> 5 1 5 => 11
	char *expression = (char*)malloc(sizeof(char)*11);
	SetINFO(expression);
	printf("Result Solution: %d\n", solution(expression));
}
void SetINFO(char *expression) {
	puts("�� �Է�");
	scanf("%s", expression);
}
