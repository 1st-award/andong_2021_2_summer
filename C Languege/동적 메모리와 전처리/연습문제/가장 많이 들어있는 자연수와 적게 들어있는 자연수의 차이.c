/*
	�ڿ����� ����ִ� �迭�� �ֽ��ϴ�. �� �迭���� ���� ���� �����ϴ�
	������ ������ ���� ���� �����ϴ� ���� ������ �� ������ ���Ϸ� �մϴ�.
	�̸� ���� ������ ���� ������ ���α׷� ������ �ۼ��߽��ϴ�.
*/
#include <stdio.h>
#include <stdlib.h>

void SetArray(int *, int *);
void CountNumber(int *, int *, int *);
void PrintMaxMin(int *);

void main(void) {
	// arr���� 1~1000 �ڿ����� ����ֽ��ϴ�. 
	int *arr = (int*)calloc(1000, sizeof(int));
	int *count = (int*)calloc(1000, sizeof(int));
	// arr_len�� 3~1000 �ڿ����Դϴ�. 
	int arr_len = 0;
	SetArray(arr, &arr_len);
	CountNumber(arr, &arr_len, count);
	PrintMaxMin(count);
} 
void SetArray(int *_setArr, int *_setLen) {
	int i, num;
	for(i=0; ;++i) {
		printf("�迭�� �� �ڿ��� �Է�(-1�Է½� ����) >> ");
		scanf("%d", &num);
		if(num == -1) {
			*_setLen = i;
			break;
		}
		else
			*(_setArr+i) = num;
	}
}
void CountNumber(int *_getArr, int *_getLen, int *_getCount) {
	int i;
	for(i=0; i<*_getLen; ++i) {
		_getCount[*(_getArr+i)-1]++;
	}
}
void PrintMaxMin(int *_getCount) {
	int i, min = *(_getCount+0), max = *(_getCount+0), minIndex=1, maxIndex=1;
	for(i=1; i<1000; ++i) {
		if (*(_getCount+i) == 0) {
			continue;
		}
		else if(*(_getCount+i) < min) {
			minIndex = i+1;
			min = *(_getCount+i);
		}
		else if(*(_getCount+i) > max) {
			maxIndex = i+1;
			max = *(_getCount+i);
		}
	}
	printf("%d��(��) %d���� %.1lf�� ���� ����ֽ��ϴ�.\n", maxIndex, minIndex, (double)max/min);
}
