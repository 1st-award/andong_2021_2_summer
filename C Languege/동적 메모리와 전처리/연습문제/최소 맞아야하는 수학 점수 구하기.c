/*
	���� ���� ������ ���� ���� ������ ���Խ��ϴ�. 
	�̶� ����, ����, ����, ������ ����� 70�� �̻��̷��� ���� ���� ������ �ּ� �� �� �̾�� �ϴ��� �˰� �ͽ��ϴ�. 
	�ּ� ���� ������ ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int korean, int english) {
	// ��� ���ϴ� ���� (a+b+c)/3 = 70 -> a+b+c = 210 -> abs(a+b-210) = abs(-c)
	int math = 210-(korean+english);
	// ���� ������ 100�� �޾Ƶ� ��� 70���� ���� �ʴ� ��쿡�� -1�� return �մϴ�. 
	if(math>100)
		return -1;
	else
		return math; 
} 

void main(void) {
	int korean;
	int english;
	SetINFO(&korean, &english);
	printf("Result Solution: %d\n", solution(korean, english));
}
void SetINFO(int *korean, int *english) {
	puts("====���� ���� �Է�====");
	scanf("%d", korean);
	puts("====���� ���� �Է�====");
	scanf("%d", english);
	// korean�� english�� 0~100
	if(*korean<0 || *english<0 || *korean>100 || *english>100) 
		exit(1);
}
