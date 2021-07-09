#include <stdio.h>

void main (void) {
	int a[4] = {1, 3, 6};
	int *pa = &a[0];
	
	printf("%d %d %d\n", *(pa), *(pa+1), *(pa+2));
	printf("%d %d %d\n", pa[0], pa[1], pa[2]);
} 
