// �迭 ���Ҹ� �����ϴ� �Լ� �����
#include <stdio.h>

void arraycopy(int *, int *, int);
void arrayprint(int *, int);
void main(void) {
	int to[] = {13, 34, 28, 56, 73, 45};
	int from[] = {3, 5, 1, 6, 7};
	arraycopy(from, to, 5);
	arrayprint(to, 6);
} 
// From�� �迭 ���Ҹ� size���� To�� �����ϴ� �Լ� 
void arraycopy(int *_arrFrom, int *_arrTo, int _size) {
	int i;
	for(i=0; i<_size; ++i) _arrTo[i] = _arrFrom[i];
}
// arr�� ����ϴ� �Լ� 
void arrayprint(int *_arr, int _size) {
	int i;
	for(i=0; i<_size; ++i)	printf("%d ", _arr[i]);
}
