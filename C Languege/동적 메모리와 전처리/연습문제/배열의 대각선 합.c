/*
	������ó�� ���� ��ġ�Ǿ��ִٸ� �̸� n-�ҿ뵹�� ����� �θ��ϴ�.
	n-�ҿ뵹�� ���� �밢���� �����ϴ� ������ ���� return�� �ּ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*);
int in_range(int y, int x, int n) {
	return y<n && x<n && 0<=y && 0<=x;
}
int solution(int n) {
	// 0���� �迭 �ʱ�ȭ 
	int (*arr)[n] = (int(*)[n])calloc(n*n, sizeof(int));
	// �ֱ� �� ���� �迭 y x
	int rotate_pos[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	// ����, �ӽ� ��ǥ �ʱ�ȭ 
	int current_y = 0, current_x = 0, temp_y, temp_x;
	// �ֱ�� ī��Ʈ ���� �ʱ�ȭ 
	int i, count = 1;
	// current_pos�� �����ȿ� �ְ� ���� �迭 �ȿ� ���Ұ� 0�� �� ���� 
	while(in_range(current_y, current_x, n) && !arr[current_y][current_x]) {
		// ��, ��, ��, �谡 �� �ֱ�
		for(i=0; i<4; ++i) {
			//  ���� �ۿ� �ְų� ���� �迭 �ȿ� 0�� �� ��������� break 
			if(!in_range(current_y, current_x, n) || arr[current_y][current_x])	break;
			while(1) {
				arr[current_y][current_x] = count++;
				printf("%d %d %d\n", current_y, current_x, arr[current_y][current_x]);
				// �ӽ� ������ ���� ��ġ�� �־� ������ ���Ұ� 0���� Ȯ�� 
				temp_y = current_y + rotate_pos[i][0];
				temp_x = current_x + rotate_pos[i][1];
				// ���� ��ġ�� ���� ���̰ų� ���Ұ� 0�� �ƴҶ� ���� rotate_pos�� current�� ���� 
				if(!in_range(temp_y, temp_x, n) || arr[temp_y][temp_x]) {
					current_y += rotate_pos[(i+1)%4][0];
					current_x += rotate_pos[(i+1)%4][1];
					break;
				}
				// ���� ���̰ų� ���� �ε����� ���Ұ� 0�� �� current <- temp 
				current_y = temp_y;
				current_x = temp_x;
			}
		} 
	} 
	// �밢�� �� ���ϱ� 
	int sum = 0;
	for(i=0; i<n; ++i)
		sum+=arr[i][i];
	return sum;
}	

void main(void) {
	int n;
	SetINFO(&n);
	printf("Result Solution: %d\n", solution(n));
} 
void SetINFO(int *n) {
	scanf("%d", n);
	// n�� 1 ~ 100 
	if(*n < 1 || *n > 100)
		exit(1);
}
