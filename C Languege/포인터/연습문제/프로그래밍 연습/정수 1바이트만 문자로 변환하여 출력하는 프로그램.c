// ������ �迭�� ����Ǿ� �ִ� �������� �պκ� 1����Ʈ����\
���ڷ� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

void setarray(int *, int);
void main(void) {
	int a[26], i;
	void *ptr = a;
	
	setarray(a, 26);
	// printf("%d\n", sizeof(ptr));
	for(i=0; i<26*sizeof(int); ++i) {
		if(i%sizeof(int)==0)	printf("%c ", *(int*)(ptr++));
		else					*(int*)ptr++;
	}
} 
void setarray(int *_a, int _size) {
	int i;
	for(i=0; i<_size; ++i) {
		_a[i] = 65+i;
	}
}
