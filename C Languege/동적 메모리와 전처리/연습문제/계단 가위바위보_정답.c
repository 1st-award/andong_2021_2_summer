// ��� ���������� ����
#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h>

int func(int record) {
	if(record == 0)		return 1;
	else if(record == 1)return 2;
	return 0;
} 

int solution(int *recordA, int recordA_len, int *recordB, int recordB_len) {
	int cnt = 0;
	int i;
	for(i=0; i<recordA_len; ++i) {
		// ����� �� 
		if(recordA[i] == recordB[i])	continue;
		// �̰��� �� ���� �� �� == (������ �� ��+1)%3
		else if(recordA[i] == func(recordB[i])) cnt+=3;
		// ���� �� cnt == 0: continue | cnt>0: cnt <- cnt-1 
		else cnt = 0 < cnt -1 ? cnt-1 : 0;
	}
	return cnt;
}

void main(void) {
	int recordA[] = {2, 0, 0, 0, 0, 0, 1, 1, 0, 0};
	int recordA_len = 10;
	int recordB[] = {0, 0, 0, 0, 2, 2, 0, 2, 2, 2};
	int recordB_len = 10;
	printf("Result Solution: %d\n", solution(recordA, recordA_len, recordB, recordB_len));
}
