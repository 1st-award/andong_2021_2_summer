#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int i, max, closeAvg=0, diff=101;
	double avg=0.0;
	
	printf("자연수 갯수입력(100이하): ");
	scanf("%d", &max);
	if(max>100)	{
		printf("100이하가 아닙니다.\n");
		exit(1);
	} 
	
	int arr[max];
	printf("자연수 입력: ");
	for(i=0; i<max; ++i) {
		scanf("%d", &arr[i]);
		avg += arr[i];
	}
	
	avg /= max;
	for(i=0; i<max; ++i) {
		if(diff > abs((int)avg-arr[i]))	{
			closeAvg = arr[i];
			diff = abs((int)avg-arr[i]);
		}
	}
	
	
	printf("%.0f, %d", avg, closeAvg);
	return 0;
}
