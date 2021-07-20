// 두 일차원 배열을 병합한 결과를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

void arraymerge(int *, int, int *, int, int *);

void main(void) {
	int a[] = {1, 2, 5, 7, 9, 14};
	int b[] = {2, 3 ,6, 8, 13};
	int c[11];
	int i;
	// a배열과 b배열을 c배열에 병합하는 함수
	arraymerge(a, 6, b, 5, c);
	// c배열 출력
	for(i=0; i<11; ++i)	printf("%d ", c[i]); 
} 
void arraymerge(int *_arrA, int _sizeA, int *_arrB, int _sizeB, int *_arrC) {
	int i, j, cnt=0, temp;
	// 배열A -> 배열C병합 
	for(i=0; i<_sizeA; ++, ++cnt)	_arrC[cnt] = _arrA[i];
	// 배열B -> 배열C병합 
	for(i=0; i<_sizeB; ++i, ++cnt)	_arrC[cnt] = _arrB[i];
	// 배열C 오름차순 정렬 
	for(i=0; i<_sizeA+_sizeB; ++i) {
		for(j=0+i; j<_sizeA+_sizeB; ++j) {
			if(_arrC[i]>_arrC[j]) {
				temp = _arrC[i];
				_arrC[i] = _arrC[j];
				_arrC[j] = temp;
			}
		}
	}
}
