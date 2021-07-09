#include <stdio.h>
#include <stdlib.h>

int main () {
	int max, min=999, arrNum, i;
	
	printf("최대값 입력(5 ~ 100): ");
	scanf("%d", &max);
	if((max<5)||(max>100)){
		printf("최대값이 5미만 100 초과입니다.\n");
		exit(0);	
	}
	
	int arr[max];
	printf("자연수 입력: ");
	for(i=0; i<max; i++){
		scanf("%d", &arr[i]);
		min = min<arr[i] ? min:arr[i];
		if(arr[i] == min)	arrNum = i+1;
	}
	
	printf("%d %d\n", min, arrNum);
	return 0;
}
