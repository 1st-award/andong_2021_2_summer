#include <stdio.h>
#include <stdlib.h>

void comp (int num) {
	if((num<1)||(num>1000000)) exit(1);
}

int main (void) {
	int i, j, cnt, max;
	
	printf("자연수 입력(1~1,000,000): ");
	scanf("%d", &max);	comp(max);
	
	for(i=2; i<=max; ++i) {
		for(j=1; j<=i; ++j) {
			if(i%j==0)	++cnt;
		}
		if(cnt<3)	printf("%d ", i);
		cnt=0;
	}
}
