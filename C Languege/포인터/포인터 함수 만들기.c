#include <stdio.h> 

void main(void) {
	void print_element(int(*)[3]);
	int temp[][3] = {{5, 7, 4}, {10, 54, 8}};
	
	print_element(temp);
}

void print_element(int(*temp)[3]) {
	int i, j;
	
	puts("첫 번째 방법");
	for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("1. [%d][%d] = %d\n", i, j, temp[i][j]);
		}
	}
	
	puts("두 번째 방법");
	for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("2. [%d][%d] = %d\n", i, j, *(temp[i] + j));
		}
	}
	
	puts("세 번째 방법");
	for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("3. [%d][%d] = %d\n", i, j, *(*(temp+i)+j));
		}
	} 
}
