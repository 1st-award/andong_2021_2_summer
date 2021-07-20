// 정수형 배열에 저장되어 있는 정수에서 앞부분 1바이트만을\
문자로 변환하여 출력하는 프로그램을 작성하시오.
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
