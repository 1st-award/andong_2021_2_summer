/*
	주어진 배열의 순서를 뒤집으려고 합니다.
	예를 들어 주어진 배열이 [1, 4, 2, 3]이면, 순서를 뒤집은 배열은 [3, 2, 4, 1]입니다.
*/
#include <stdio.h>
#include <stdlib.h>

void SetArray(int *, int *);
void PrintReverseArray(int *, int );
void main(void) {
	// arr_len은 1~100 자연수입니다. 
	int *arr = (int*)calloc(100, sizeof(int));
	int arr_len;
	SetArray(arr, &arr_len);
	PrintReverseArray(arr, arr_len);	
}

void SetArray(int *_setArr, int *_setLen) {
	int i, num;
	for(i=0; ; ++i) {
		printf("-100~100 사이의 자연수 입력 (범위 밖 자연수 입력시 종료) >> ");
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
