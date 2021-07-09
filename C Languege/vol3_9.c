#include <stdio.h>

int a[6][6];
int main() {
	int i, j, k=1;
	for(i=0; i<5; ++i) {
		for(j=4; j>=0; j--) {
			a[i][j]=k;
			k++;
		}
	}
	
	for(i=0; i<5; ++i) {
		for(j=0; j<5; ++j) {
			printf("%3d", a[i][j]);
		}
		puts("");
	}
	return 0;
}
