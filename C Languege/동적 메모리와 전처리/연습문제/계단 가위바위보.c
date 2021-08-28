/*
	�� �л� A B�� ��� ������ �Ͽ����ϴ�.
	��� ������ ��Ģ�� �Ʒ��� �����ϴ�.
	====
	1. ��� ���� �Ʒ����� ������ �����մϴ�. (0��° ĭ)
	2. ������������ �մϴ�.
	3. �̱�� ��� �� ĭ�� �ö󰡰�, ���� �� ĭ�� ��������, ���� ���ڸ��� �ֽ��ϴ�.
	4. ��� ���� �Ʒ����� ���� ���ڸ��� �ֽ��ϴ�.
	5. 2 ~4 ������ �� �� �ݺ��մϴ�.
	====
	��� ������ ��ģ �Ŀ� A�� ��� �� �� ��° ĭ�� ��ġ�ϴ����� return�ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*, int*);
int solution(int recordA[], int recordA_len, int recordB[], int recordB_len) {
	// �� ĭ �ö󰬴��� counting ���� 
	int i, stair_count = 0;
	for(i=0; i<10; ++i) {
		// A�� �̰��� �� +3
		if(recordA[i] == (recordB[i]+1)%3) {
			stair_count += 3; 
		}
		// ����� �� 
		else if(recordA[i] == recordB[i])
			continue;
		// ���� ��
		else {
			// �� ĭ�̶� �ö����� -1
			if(stair_count>0)
				stair_count--;
		} 
	}
	return stair_count;
} 
void main(void) {
	int *recordA = (int*)calloc(10, sizeof(int));
	int recordA_len = 10;
	int *recordB = (int*)calloc(10, sizeof(int));
	int recordB_len = 10;
	SetINFO(recordA, recordB);
	printf("Result Solution: %d\n", solution(recordA, recordA_len, recordB, recordB_len));
} 
void SetINFO(int *recordA, int *recordB) {
	int i, num;
	puts("====A�� ���������� �Է�===="); 
	for(i=0; i<10; ++i) {
		scanf("%d", &recordA[i]);
		if(recordA[i]<0 || recordA[i]>2)
			exit(1);
	}
	puts("====B�� ���������� �Է�====");
	for(i=0; i<10; ++i) {
		scanf("%d", &recordB[i]);
		if(recordB[i]<0 || recordB[i]>2)
			exit(1);
	}
}
