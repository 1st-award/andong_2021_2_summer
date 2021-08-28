/*
	XX ��Ʈ���� ������ ������ 3�� �����̸� �ҷ� ���뿡��, �׷��� ������ �Ϲ� ���뿡�� ����ؾ� �մϴ�.
	�� ���� ��� ���� �� ���� ����ϴ� �� 1���� �ɸ��ϴ�.
	��� ������ ����ϴµ� �ɸ��� �ð��� ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int *stuffs, int stuffs_len) {
	int i; 
	int small_counter = 0;
	int nomal_counter = 0;
	for(i=0; i<stuffs_len; ++i) {
		if(stuffs[i]<=3)
			small_counter+=stuffs[i];
		else
			nomal_counter+=stuffs[i];
	}
	return small_counter > nomal_counter ? small_counter : nomal_counter;
} 

void main(void) {
	// stuffs_len 1 ~ 100
	int *stuffs = (int*)malloc(sizeof(int)*100);
	int stuffs_len;
	SetINFO(stuffs, &stuffs_len);
	printf("Result Solution: %d\n", solution(stuffs, stuffs_len));
}
void SetINFO(int *stuffs, int *stuffs_len) {
	int i, num;
	puts("==== ���� ���� �Է�====");
	for(i=0; i<100; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		// �մ��� ������ ������ 1 ~ 20
		else if(num<1 || num>20)
			exit(1); 
		else
			stuffs[i] = num;
	}
	*stuffs_len = i;
}
