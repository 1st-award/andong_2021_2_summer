/*
	�־��� �迭�� ������ ���������� �մϴ�.
	���� ��� �־��� �迭�� [1, 4, 2, 3]�̸�, ������ ������ �迭�� [3, 2, 4, 1]�Դϴ�.
*/
#include <stdio.h>
#include <stdlib.h>

void SetArray(int *, int *);
void PrintReverseArray(int *, int );
void main(void) {
	// arr_len�� 1~100 �ڿ����Դϴ�. 
	int *arr = (int*)calloc(100, sizeof(int));
	int arr_len;
	SetArray(arr, &arr_len);
	PrintReverseArray(arr, arr_len);	
}

void SetArray(int *_setArr, int *_setLen) {
	int i, num;
	for(i=0; ; ++i) {
		printf("-100~100 ������ �ڿ��� �Է� (���� �� �ڿ��� �Է½� ����) >> ");
		scanf("%d", &num);
		if((num<-100)||(num>100)) {
			*_setLen = i;
			break;
		}
		else 
			*(_setArr+i) = num;
	}
}
void PrintReverseArray(int *_getArray, int _getLen) {
	int i;
	for(i=_getLen-1; i>=0; --i) {
		printf("%d ", *(_getArray+i));
	}
}
