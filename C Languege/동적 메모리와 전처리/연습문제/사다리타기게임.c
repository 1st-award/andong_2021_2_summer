/*
	6���� ��ٸ������� �� ��, �� ���� ��ġ���� �����ϴ� ����� ��ǰ�� Ÿ���� �˰� �ͽ��ϴ�.
	�������� �׻� ������ �����ٸ� ������ �� ������ �־��� ������� ���������� �����մϴ�.
	win���� ���� ��ȣ�� ���ϼ���. 
*/ 
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int **, int *, int *);
// ���μ�: 1, ���μ�: 2, �¸�: 0 
int solution(int **ladders, int ladders_len, int win) {
	// ��ȣ ���� + ���� ��ٸ� ���� + �¸� ���� 
	int arr[ladders_len+2][6];
	int i, j;
	// ��ȣ ���� �ʱ�ȭ 
	for(i=0; i<6; ++i)
		arr[0][i] = i+1;
	// arr �ʱ�ȭ (���δ� 1)
	for(i=1; i<ladders_len+2; ++i)
		for(j=0; j<6; ++j)
			arr[i][j] = 1;
	// arr�� ���� ��ٸ� �߰� (���δ� 2) 
	for(i=1; i<=ladders_len; ++i) {
		arr[i][ladders[i-1][0]-1]++;
		arr[i][ladders[i-1][1]-1]++;
	}
	// ������ ���� �¸� �߰� (�¸��� 0) 
	arr[ladders_len+1][win-1] = 0;
	// ��ٸ� gui 
	for(i=0; i<ladders_len+2; ++i) {
		for(j=0; j<6; ++j) {
			// ��ȣ ���� ��� 
			if(i==0)
				printf("%d ", j+1);
			// ��� ���� ��(L) ��� 
			else if(i==ladders_len+1 && arr[i][j])
				printf("L ");
			// ���μ� ��� 
			else if(arr[i][j] == 1)
				printf("| ");
			// ���μ� ��� 
			else if(arr[i][j] == 2)
				printf("- ");
			// ���(W) ��� 
			else
				printf("W ");
		}
		puts("");
	}
	// �¸� ���� return (2�� ������ �� �������� �ٽ� �Ųٷ� �ö�) 
	for(i=win-1; i<=6; ++i) {
		// printf("%d ", ladders_len);
		for(j=ladders_len; j>=1; --j) {
			// ���� �ö󰡴ٰ� 2�� ������ �� 
			if(arr[j][i] == 2) {
				// printf("2 ");
				// �������� �̾����ٸ� 
				if(arr[j][i-1] == 2) {
					// printf("left ");
					i -= 2;
					ladders_len = j-1;  
					break;
				}
				// ���������� �̾����ٸ� 
				else {
					// printf("right ");
					ladders_len = j-1;
					break;
				}
			}
		}
		// printf("%d\n", ladders_len);
		// j�� ��ȣ ����(0)�̶�� 
		if(!j)
			return arr[0][i];			
	}
}

void main(void) {
	// ladders_len�� 1 ~ 20 
	int **ladders = (int**)malloc(sizeof(int*) * 20);
	int ladders_len;
	int win;
	SetINFO(ladders, &ladders_len, &win);
	printf("Result Solution: %d\n", solution(ladders, ladders_len, win));
}
void SetINFO(int **ladders, int *ladders_len, int *win) {
	int i;
	puts("====��ٸ� �迭 �Է�====");
	for(i=0; i<20; ++i) {
		ladders[i] = (int*)malloc(sizeof(int)*2);
		scanf("%d %d", &ladders[i][0], &ladders[i][1]);
		if(!ladders[i][0])
			break;
		else if(ladders[i][1] - ladders[i][0] != 1)
			exit(1);
	}
	*ladders_len = i;
	puts("====�¸� ���� �Է�====");
	scanf("%d", win);
	// win�� 1 ~ 6 
	if(*win<1 || *win>6)
		exit(1);
	puts("======================");
}
