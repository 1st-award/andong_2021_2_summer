/*
	두 학생 A B는 계단 게임을 하였습니다.
	계단 게임의 규칙은 아래와 같습니다.
	====
	1. 계단 제일 아래에서 게임을 시작합니다. (0번째 칸)
	2. 가위바위보를 합니다.
	3. 이기면 계단 세 칸을 올라가고, 지면 한 칸을 내려가고, 비기면 제자리에 있습니다.
	4. 계단 제일 아래에서 지면 제자리에 있습니다.
	5. 2 ~4 과정을 열 번 반복합니다.
	====
	계단 게임을 마친 후에 A가 계단 위 몇 번째 칸에 위치하는지를 return하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*, int*);
int solution(int recordA[], int recordA_len, int recordB[], int recordB_len) {
	// 몇 칸 올라갔는지 counting 시작 
	int i, stair_count = 0;
	for(i=0; i<10; ++i) {
		// A가 이겼을 때 +3
		if(recordA[i] == (recordB[i]+1)%3) {
			stair_count += 3; 
		}
		// 비겼을 때 
		else if(recordA[i] == recordB[i])
			continue;
		// 졌을 때
		else {
			// 한 칸이라도 올라갔으면 -1
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
	puts("====A의 가위바위보 입력===="); 
	for(i=0; i<10; ++i) {
		scanf("%d", &recordA[i]);
		if(recordA[i]<0 || recordA[i]>2)
			exit(1);
	}
	puts("====B의 가위바위보 입력====");
	for(i=0; i<10; ++i) {
		scanf("%d", &recordB[i]);
		if(recordB[i]<0 || recordB[i]>2)
			exit(1);
	}
}
