/*
	자연수가 들어있는 배열이 있습니다. 이 배열에서 가장 많이 등장하는
	숫자의 개수는 가장 적게 등장하는 숫자 개수의 몇 배인지 구하려 합니다.
	이를 위해 다음과 같이 간단히 프로그램 구조를 작성했습니다.
*/
#include <stdio.h>
#include <stdlib.h>

void SetArray(int *, int *);
void CountNumber(int *, int *, int *);
void PrintMaxMin(int *);

void main(void) {
	// arr에는 1~1000 자연수가 들어있습니다. 
	int *arr = (int*)calloc(1000, sizeof(int));
	int *count = (int*)calloc(1000, sizeof(int));
	// arr_len은 3~1000 자연수입니다. 
	int arr_len = 0;
	SetArray(arr, &arr_len);
	CountNumber(arr, &arr_len, count);
	PrintMaxMin(count);
} 
void SetArray(int *_setArr, int *_setLen) {
	int i, num;
	for(i=0; ;++i) {
		printf("배열에 들어갈 자연수 입력(-1입력시 종료) >> ");
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
	printf("%d이(가) %d보다 %.1lf배 많이 들어있습니다.\n", maxIndex, minIndex, (double)max/min);
}
