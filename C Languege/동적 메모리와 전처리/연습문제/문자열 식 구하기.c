/*
	문자열 형태의 식을 계산하려 합니다. 식은 2개의 자연수와 1개의 연산자(+, -, * 중 하나)로 이루어져 있습니다. 
	예를 들어 주어진 식이 123+123라면 이를 계산한 결과는 135입니다. 식의 답을 구하세요. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetINFO(char *);

int solution(char *expression) {
	// 연산자 구하기 
	char symbol;
	int i;
	for(i=0; i<strlen(expression); ++i)
		if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*')
			symbol = expression[i];
	// 왼쪽 오른쪽 식 구하기  
	char *ptoken;
	char *delimiter = "+-*";
	char first_num[5];
	char end_num[5];
	ptoken = strtok(expression, delimiter);
	strcpy(first_num, ptoken);
	ptoken = strtok(NULL, delimiter);
	strcpy(end_num, ptoken);
	// 연산하기
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
	// 숫자는 1 ~ 10000 -> 5 1 5 => 11
	char *expression = (char*)malloc(sizeof(char)*11);
	SetINFO(expression);
	printf("Result Solution: %d\n", solution(expression));
}
void SetINFO(char *expression) {
	puts("식 입력");
	scanf("%s", expression);
}
