// 표준입력으로 받은 두 실수의 사칙연산을 수행하는 프로그램을 작성하시오.
#include <stdio.h>

void add(double , double , double *);
void sub(double , double , double *);
void mul(double , double , double *);
void div(double , double , double *);
void main(void) {
	char str[][7] = {"더하기", "빼기", "곱하기", "나누기"};
	char op[4] = {'+', '-', '*', '/'}; 
	double numA, numB, result=0;
	int select;
	void (*calc[4])(double , double , double *) = {add, sub, mul, div};
	
	puts("사칙연산을 위하여 각 연산에 대한 번호를 입력하세요. >>");
	printf("[더하기]: 0, [빼기]: 1, [곱하기]: 2, [나누기]: 3 >> "); 
	scanf("%d", &select);
	printf("\n사칙연산을 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &numA, &numB);

	calc[select](numA, numB, &result);
	printf("%s 수행 : ", *(str+select));
	printf("%lf %c %lf == %lf\n", numA, op[select], numB, result);
	/*
	if(select == 0) {
		calc[0](numA, numB, &result);
		printf("더하기 수행 : %lf + %lf == %lf\n", numA, numB, result);
	}
	else if(select == 1) {
		calc[1](numA, numB, &result);
		printf("빼기 수행 : %lf - %lf == %lf\n", numA, numB, result);
	}
	else if(select == 2) {
		calc[2](numA, numB, &result);
		printf("곱하기 수행 : %lf * %lf == %lf\n", numA, numB, result);
	}
	else if(select == 3) {
		calc[3](numA, numB, &result);
		printf("나누기 수행 : %lf / %lf == %lf\n", numA, numB, result);
	}
	*/
} 

void add(double _numA, double _numB, double *_result)	{
	*_result = _numA + _numB;
}
void sub(double _numA, double _numB, double *_result) {
	*_result = _numA - _numB;
}	
void mul(double _numA, double _numB, double *_result)	{
	*_result = _numA * _numB;
}
void div(double _numA, double _numB, double *_result)	{
	*_result = _numA / _numB;
}

