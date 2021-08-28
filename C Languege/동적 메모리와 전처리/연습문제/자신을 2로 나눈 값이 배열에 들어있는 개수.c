/*
	�迭 ������ �ڽ��� 2�� ���� ���� �迭�� �ִ� ���� ������ ���Ϸ��� �մϴ�.
	���� ���, �迭�� [4, 8, 3, 2, 6, 7]�� ���, 6/2 = 3, 8/2 = 4�̹Ƿ� �ڽ��� 2�� ��������
	�迭�� ����ִ� ���� ������ �� 2���Դϴ�.
*/ 
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int *arr, int arr_len) {
	int i, j, count = 0;
	for(i=0; i<arr_len; ++i) {
		for(j=0; j<arr_len; ++j) {
			if((double)arr[i]/2.0 == arr[j])
				++count;
		}
	}
	return count;
} 

void main(void) {
	// arr_len�� 1~1000 
	int *arr = (int*)calloc(1000, sizeof(int));
	int arr_len;
	SetINFO(arr, &arr_len);
	printf("Result Solution: %d\n", solution(arr, arr_len));
}
void SetINFO(int *arr, int *arr_len) {
	int num, i;
	puts("====�迭 �Է�====");
	for(i=0; ; ++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(num<1 || num>1000)
			exit(1);
		else
			arr[i] = num;
	}
	*arr_len = i;
}
