// ǥ���Է����� ���� �� �Ǽ��� ��Ģ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

void add(double , double , double *);
void sub(double , double , double *);
void mul(double , double , double *);
void div(double , double , double *);
void main(void) {
	char str[][7] = {"���ϱ�", "����", "���ϱ�", "������"};
	char op[4] = {'+', '-', '*', '/'}; 
	double numA, numB, result=0;
	int select;
	void (*calc[4])(double , double , double *) = {add, sub, mul, div};
	
	puts("��Ģ������ ���Ͽ� �� ���꿡 ���� ��ȣ�� �Է��ϼ���. >>");
	printf("[���ϱ�]: 0, [����]: 1, [���ϱ�]: 2, [������]: 3 >> "); 
	scanf("%d", &select);
	printf("\n��Ģ������ ������ �Ǽ� 2���� �Է��ϼ���. >> ");
	scanf("%lf %lf", &numA, &numB);

	calc[select](numA, numB, &result);
	printf("%s ���� : ", *(str+select));
	printf("%lf %c %lf == %lf\n", numA, op[select], numB, result);
	/*
	if(select == 0) {
		calc[0](numA, numB, &result);
		printf("���ϱ� ���� : %lf + %lf == %lf\n", numA, numB, result);
	}
	else if(select == 1) {
		calc[1](numA, numB, &result);
		printf("���� ���� : %lf - %lf == %lf\n", numA, numB, result);
	}
	else if(select == 2) {
		calc[2](numA, numB, &result);
		printf("���ϱ� ���� : %lf * %lf == %lf\n", numA, numB, result);
	}
	else if(select == 3) {
		calc[3](numA, numB, &result);
		printf("������ ���� : %lf / %lf == %lf\n", numA, numB, result);
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

