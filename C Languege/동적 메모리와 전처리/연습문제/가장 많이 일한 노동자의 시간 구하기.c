/*
	n���� �ð�ǥ�� ���� ���� �ٹ��� ���ϴ�. �̶� ���� ���� ���� ����� �� �ð� ���ߴ��� �˾Ƴ��� �մϴ�.
	�ٹ� ������ ù ��° ������� n��° ��� ������ �մϴ�. n�� ����� ���� �� �ڿ��� �ٽ� ù ��° ������� ���� �մϴ�.
	���� ���� ���� ����� �� �ð� ���ߴ��� ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *, int *);
int solution(int *time_table, int time_table_len, int n) {
	int i, max = 0;
	// �뵿�� �ο� ����ŭ �迭 ���� 
	int *worker = (int*)calloc(n, sizeof(int));
	// �뵿 �ð� ���ϱ� 
	for(i=0; i<time_table_len; ++i)
		// ù ��° �ٹ��� ���� n��° �ٹ��ڱ��� time_table ������� �ٹ��ð��� ���ϱ�. 
		worker[i%n] += time_table[i];
	// ���� �ٹ��� ���� �� ��� ���ϱ� 
	for(i=0; i<n; ++i)
		if(worker[i]>max)
			max = worker[i];
	return max;
} 

void main(void) {
	// time_table_len�� 1 ~ 100 
	int *time_table = (int*)malloc(sizeof(int)*100);
	int time_table_len;
	int n;
	SetINFO(time_table, &time_table_len, &n);
	printf("Result Solution: %d\n", solution(time_table, time_table_len, n));
}
void SetINFO(int *time_table, int *time_table_len, int *n) {
	int num, i;
	puts("====�ð�ǥ �Է�====");
	for(i=0; i<100; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		// time_table�� ���Ҵ� 1 ~ 100 
		else if(num<1 || num>100)
			exit(1);
		else
			time_table[i] = num;
	}
	*time_table_len = i;
	puts("====�ٹ��� �� �Է�====");
	scanf("%d", n);
	// n�� 1 ~ time_table_len
	if(*n<1 || *n> *time_table_len)
		exit(1); 
}
