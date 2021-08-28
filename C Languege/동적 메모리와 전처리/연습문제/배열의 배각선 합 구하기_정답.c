// �迭�� �밢�� �� ���ϱ�
#include <stdio.h> 
int pane[103][103];
// ���� �ȿ� �ִ��� Ȯ�� 
int inRange(int i, int j, int n) {
	return 0<=i && i<n && 0<=j && j<n;
}
// ��, ��, ��, ��� ������ �� �Ʒ� �迭�� ���� �̵� 
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
int solution(int n) {
	int ci = 0, cj = 0;
	int num = 1;
	int i, j, k;
	int ni, nj;
	
	while(inRange(ci, cj, n) && pane[ci][cj] == 0) {
		for(k=0; k<4; ++k) {
			// ��ġ ���� ������ ���� ���ų� ��ġ ���� ���� �迭�� �ε��� ���� 0�� �ƴҰ�� break 
			if(!inRange(ci, cj, n) || pane[ci][cj] != 0)	break;
			while(1) {
				pane[ci][cj] = num++;
				// ������ ������ ��ġ�� �ӽÿ� �־ ���� 
				ni = ci + dy[k];
				nj = cj + dx[k];
				// ������ ����ԵǸ� ������ ������ ��ġ�� ������ Ż��(k=0: y+=1, x+=0 | k=1: y+=1, x+=0 | k=2: y+=0, x-=1 | k=3: y-=1, x+=0)
				if(!inRange(ni, nj, n) || pane[ni][nj] != 0) {
					ci += dy[(k+1)%4];
					cj += dx[(k+1)%4];
					break;
				}
				// ���� �ȿ� ������ �ӽÿ� �־������� �ٽ� �� ���� ���� 
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
	// �� ��� ���� 
	int ans = 0;
	for(i=0; i<n; ++i)	ans+= pane[i][i];
	return ans;
}

void main(void) {
	int n = 10;
	printf("Result Solution: %d\n", solution(n));
}
