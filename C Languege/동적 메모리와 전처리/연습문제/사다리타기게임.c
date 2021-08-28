/*
	6명이 사다리게임을 할 댸, 몇 번쨰 위치에서 시작하는 사람이 상품을 타는지 알고 싶습니다.
	가로줄은 항상 인접한 세로줄만 연결할 수 있으며 주어진 순서대로 위에서부터 연결합니다.
	win으로 가는 번호를 구하세요. 
*/ 
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int **, int *, int *);
// 세로선: 1, 가로선: 2, 승리: 0 
int solution(int **ladders, int ladders_len, int win) {
	// 번호 라인 + 가로 사다리 길이 + 승리 라인 
	int arr[ladders_len+2][6];
	int i, j;
	// 번호 라인 초기화 
	for(i=0; i<6; ++i)
		arr[0][i] = i+1;
	// arr 초기화 (세로는 1)
	for(i=1; i<ladders_len+2; ++i)
		for(j=0; j<6; ++j)
			arr[i][j] = 1;
	// arr에 가로 사다리 추가 (가로는 2) 
	for(i=1; i<=ladders_len; ++i) {
		arr[i][ladders[i-1][0]-1]++;
		arr[i][ladders[i-1][1]-1]++;
	}
	// 마지막 라인 승리 추가 (승리는 0) 
	arr[ladders_len+1][win-1] = 0;
	// 사다리 gui 
	for(i=0; i<ladders_len+2; ++i) {
		for(j=0; j<6; ++j) {
			// 번호 라인 출력 
			if(i==0)
				printf("%d ", j+1);
			// 우승 라인 꽝(L) 출력 
			else if(i==ladders_len+1 && arr[i][j])
				printf("L ");
			// 세로선 출력 
			else if(arr[i][j] == 1)
				printf("| ");
			// 가로선 출력 
			else if(arr[i][j] == 2)
				printf("- ");
			// 우승(W) 출력 
			else
				printf("W ");
		}
		puts("");
	}
	// 승리 라인 return (2를 만나면 그 라인으로 다시 거꾸로 올라감) 
	for(i=win-1; i<=6; ++i) {
		// printf("%d ", ladders_len);
		for(j=ladders_len; j>=1; --j) {
			// 위로 올라가다가 2를 만났을 때 
			if(arr[j][i] == 2) {
				// printf("2 ");
				// 왼쪽으로 이어졌다면 
				if(arr[j][i-1] == 2) {
					// printf("left ");
					i -= 2;
					ladders_len = j-1;  
					break;
				}
				// 오른쪽으로 이어졌다면 
				else {
					// printf("right ");
					ladders_len = j-1;
					break;
				}
			}
		}
		// printf("%d\n", ladders_len);
		// j가 번호 라인(0)이라면 
		if(!j)
			return arr[0][i];			
	}
}

void main(void) {
	// ladders_len은 1 ~ 20 
	int **ladders = (int**)malloc(sizeof(int*) * 20);
	int ladders_len;
	int win;
	SetINFO(ladders, &ladders_len, &win);
	printf("Result Solution: %d\n", solution(ladders, ladders_len, win));
}
void SetINFO(int **ladders, int *ladders_len, int *win) {
	int i;
	puts("====사다리 배열 입력====");
	for(i=0; i<20; ++i) {
		ladders[i] = (int*)malloc(sizeof(int)*2);
		scanf("%d %d", &ladders[i][0], &ladders[i][1]);
		if(!ladders[i][0])
			break;
		else if(ladders[i][1] - ladders[i][0] != 1)
			exit(1);
	}
	*ladders_len = i;
	puts("====승리 라인 입력====");
	scanf("%d", win);
	// win은 1 ~ 6 
	if(*win<1 || *win>6)
		exit(1);
	puts("======================");
}
