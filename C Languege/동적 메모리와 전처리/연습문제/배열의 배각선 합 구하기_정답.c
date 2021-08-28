// 배열의 대각선 합 구하기
#include <stdio.h> 
int pane[103][103];
// 범위 안에 있는지 확인 
int inRange(int i, int j, int n) {
	return 0<=i && i<n && 0<=j && j<n;
}
// →, ↓, ←, ↑로 움직일 때 아래 배열과 같이 이동 
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
int solution(int n) {
	int ci = 0, cj = 0;
	int num = 1;
	int i, j, k;
	int ni, nj;
	
	while(inRange(ci, cj, n) && pane[ci][cj] == 0) {
		for(k=0; k<4; ++k) {
			// 위치 값이 범위를 벗어 났거나 위치 값을 넣은 배열의 인덱스 값이 0이 아닐경우 break 
			if(!inRange(ci, cj, n) || pane[ci][cj] != 0)	break;
			while(1) {
				pane[ci][cj] = num++;
				// 다음에 실행할 위치를 임시에 넣어서 실행 
				ni = ci + dy[k];
				nj = cj + dx[k];
				// 범위를 벗어나게되면 다음에 실행할 위치를 저장후 탈출(k=0: y+=1, x+=0 | k=1: y+=1, x+=0 | k=2: y+=0, x-=1 | k=3: y-=1, x+=0)
				if(!inRange(ni, nj, n) || pane[ni][nj] != 0) {
					ci += dy[(k+1)%4];
					cj += dx[(k+1)%4];
					break;
				}
				// 범위 안에 있으면 임시에 넣엇던것을 다시 본 값에 저장 
				ci = ni;
				cj = nj;
			}
		}
	}
	for(i=0; i<n; ++i) {
		for(j=0; j<n; ++j)
			printf("%d ", pane[i][j]);
		puts("");
	}
	// 합 계산 실행 
	int ans = 0;
	for(i=0; i<n; ++i)	ans+= pane[i][i];
	return ans;
}

void main(void) {
	int n = 10;
	printf("Result Solution: %d\n", solution(n));
}
