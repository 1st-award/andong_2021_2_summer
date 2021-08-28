/*
	0������ 0�ϸ��� �����½����� ���մϴ�. ���� ��� ���� 4������ ���ȴٸ�, ���� 4������ 4�� �ڿ� �����ϴ�.
	���ú��� a����� b���� ������ �����Ϸ� �մϴ�. ���� a, b�� �־����� ��, 
	a����� b������ ���� ������ ���� ��ĥ�� �� ���� �ִ��� ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int a, int b){
	int i; 
	// �ִ� a*b��ŭ�� �ϼ��� ��ٷ����� 
	int *day = (int*)calloc(a*b, sizeof(int));
	for(i=1; i<a*b; ++i) {
		if(!(i%a))
			++day[i];
		if(!(i%b))
			++day[i];
		if(day[i] == 2)
			return i;
	}
} 

void main(void) {
	int a;
	int b;
	SetINFO(&a, &b);
	printf("Result Solution: %d\n", solution(a, b));
}
void SetINFO(int *a, int *b) {
	puts("====ù ��° n���� �Է�====");
	scanf("%d", a);
	puts("====�� ��° n���� �Է�====");
	scanf("%d", b);
	// a�� b�� 1 ~ 30 
	if(*a<0 || *b<0 || *a>30 || *b>30)
		exit(1);
}
