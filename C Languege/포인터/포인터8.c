#include <stdio.h>

void main (void) {
	int i, j;
	int imsi[3][2] = {{5, 27}, {65, 2}, {87, 45}};
	int (*imsip)[2] = imsi;
	
	puts("use dimention");
	for(i=0; i<3; ++i) {
		for(j=0; j<2; ++j) {
			printf("imsip[%d][%d] = %d\n", i, j, imsip[i][j]);
		}
	}
	
	puts("use pointer");
	for(i=0; i<3; ++i) {
		for(j=0; j<2; ++j) {
			printf("imsip[%d][%d] = %d\n", i, j, *(*(imsip+i)+j));
		}
	}
}
