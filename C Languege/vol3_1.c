#include <stdio.h>
#include <stdlib.h>

int main () {
	int max, min=999, arrNum, i;
	
	printf("�ִ밪 �Է�(5 ~ 100): ");
	scanf("%d", &max);
	if((max<5)||(max>100)){
		printf("�ִ밪�� 5�̸� 100 �ʰ��Դϴ�.\n");
		exit(0);	
	}
	
	int arr[max];
	printf("�ڿ��� �Է�: ");
	for(i=0; i<max; i++){
		scanf("%d", &arr[i]);
		min = min<arr[i] ? min:arr[i];
		if(arr[i] == min)	arrNum = i+1;
	}
	
	printf("%d %d\n", min, arrNum);
	return 0;
}
