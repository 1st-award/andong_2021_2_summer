#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int i, max, closeAvg=0, diff=101;
	double avg=0.0;
	
	printf("�ڿ��� �����Է�(100����): ");
	scanf("%d", &max);
	if(max>100)	{
		printf("100���ϰ� �ƴմϴ�.\n");
		exit(1);
	} 
	
	int arr[max];
	printf("�ڿ��� �Է�: ");
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
