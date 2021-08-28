/*
	공강이란 수업 시간 사이에 수업이 없이 비는  시간입니다. 
	시간표가 주어질 때 공강은 총 몇 시간인지 구하려 합니다. 
	시간표 상에 수업이 있는 시간은 1로, 수업이 없는 시간은 0으로 표시합니다. 
	모든 수업은 정각에 시작해 1시간 뒤에 끝납니다. 
	공강 시간을 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int *time_table, int time_table_len) {
	int i, first_class = -1, end_class, class_len = 0, class_count = 0, non_class = 0;
	// 전체 수업 시간 구하기 
	for(i=0; i<time_table_len; ++i)
		if(time_table[i])
			++class_len;
	// 첫 수업과 끝 수업 구하기 
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
	// 공강 구하기 
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
	puts("====시간표 입력====");
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
