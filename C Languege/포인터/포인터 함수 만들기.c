#include <stdio.h> 

void main(void) {
	void print_element(int(*)[3]);
	int temp[][3] = {{5, 7, 4}, {10, 54, 8}};
	
	print_element(temp);
}

void print_element(int(*temp)[3]) {
	int i, j;
	
	puts("ù ��° ���");
	for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("1. [%d][%d] = %d\n", i, j, temp[i][j]);
		}
	}
	
	puts("�� ��° ���");
	for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("2. [%d][%d] = %d\n", i, j, *(temp[i] + j));
		}
	}
	
	puts("�� ��° ���");
	for(i=0; i<2; ++i) {
		for(j=0; j<3; ++j) {
			printf("3. [%d][%d] = %d\n", i, j, *(*(temp+i)+j));
		}
	} 
}
