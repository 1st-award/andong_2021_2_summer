/*
	�����̶� ���� �ð� ���̿� ������ ���� ���  �ð��Դϴ�. 
	�ð�ǥ�� �־��� �� ������ �� �� �ð����� ���Ϸ� �մϴ�. 
	�ð�ǥ �� ������ �ִ� �ð��� 1��, ������ ���� �ð��� 0���� ǥ���մϴ�. 
	��� ������ ������ ������ 1�ð� �ڿ� �����ϴ�. 
	���� �ð��� ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int *time_table, int time_table_len) {
	int i, first_class = -1, end_class, class_len = 0, class_count = 0, non_class = 0;
	// ��ü ���� �ð� ���ϱ� 
	for(i=0; i<time_table_len; ++i)
		if(time_table[i])
			++class_len;
	// ù ������ �� ���� ���ϱ� 
	for(i=0; i<time_table_len; ++i) {
		if(first_class == -1 && time_table[i]) {
			first_class = i;
			++class_count;
		}
		else if(time_table[i] && class_count == class_len-1) {
			end_class = i;
			break;
		}
		else if(time_table[i])
			++class_count;	
	}
	// ���� ���ϱ� 
	for(i=first_class; i<end_class; ++i)
		if(!time_table[i])
			++non_class;
	return non_class;
}
void main(void) {
	// time_table_len 5~15
	int *time_table = (int*)malloc(sizeof(int)*15);
	int time_table_len;
	SetINFO(time_table, &time_table_len);
	printf("Result Solution: %d\n", solution(time_table, time_table_len));
}
void SetINFO(int *time_table, int *time_table_len) {
	int i, num;
	puts("====�ð�ǥ �Է�====");
	for(i=0; i<15; ++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(0>num || num>1)
			exit(1);
		else
			time_table[i] = num;
	}
	*time_table_len = i;	
}
