// �� ������ �迭�� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

void arraymerge(int *, int, int *, int, int *);

void main(void) {
	int a[] = {1, 2, 5, 7, 9, 14};
	int b[] = {2, 3 ,6, 8, 13};
	int c[11];
	int i;
	// a�迭�� b�迭�� c�迭�� �����ϴ� �Լ�
	arraymerge(a, 6, b, 5, c);
	// c�迭 ���
	for(i=0; i<11; ++i)	printf("%d ", c[i]); 
} 
void arraymerge(int *_arrA, int _sizeA, int *_arrB, int _sizeB, int *_arrC) {
	int i, j, cnt=0, temp;
	// �迭A -> �迭C���� 
	for(i=0; i<_sizeA; ++, ++cnt)	_arrC[cnt] = _arrA[i];
	// �迭B -> �迭C���� 
	for(i=0; i<_sizeB; ++i, ++cnt)	_arrC[cnt] = _arrB[i];
	// �迭C �������� ���� 
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
