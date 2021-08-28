/*
	ü������ ����Ʈ�� �� ĭ ����(�����ε� ����) �� �밢������ �� ĭ �̵��� �����ϹǷ� �� 8���� �� �Ѱ����� �̵��� �����մϴ�.
	����Ʈ�� ��ġ�� �־����� �̵� ������ ������ ���� ���ϼ���.
*/ 
#include <stdio.h>
#include <stdlib.h>

void SetINFO(char*);
int solution(char pos[]) {
	char pos_x = pos[0];
	char pos_y = pos[1];
	int i, count = 0;
	// ����Ʈ�� �̵��ϴ� ��ǥ 
	int arr[][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
	// ����ó�� ���� 
	for(i=0; i<8; ++i) {
		// �̵��ϴ� ��ǥ x, y ���ϱ� 
		pos_x += arr[i][0];
		pos_y += arr[i][1];
		// �������� ����� ������ count 
		if(!(pos_x<'A' || pos_x>'H' || pos_y<'1' || pos_y>'8'))
			count++;
		// ���� ������ �ʱ�ȭ 
		pos_x = pos[0];
		pos_y = pos[1];
	}
	// �� �̵��Ÿ� return 
	return count;
}

void main(void) {
	char str[2];
	SetINFO(str);
	printf("Result Solution: %d\n", solution(str));
} 
void SetINFO(char *str) {
	scanf("%s", str);
	// ü�� ��ǥ ����ó�� 
	if(str[0]<'A' || str[0]>'H' || str[1]<'1' || str[1]>'8')
		exit(1);
}
