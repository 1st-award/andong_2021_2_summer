#include <stdio.h>

void main(void) {
	int i=20;
	int *pi = &i;
	int **dpi = &pi;
	
	printf("%p %p %p\n", &i, pi, *dpi);
	
	*pi = i+2;
	printf("%d %d %d\n", i, *pi, **dpi);	// 참조한 횟수만큼 간접연산자 사용 
	
	**dpi = *pi+2;
	printf("%d %d %d\n", i, *pi, **dpi); 	// 참조한 횟수만큼 간접연산자 사용 
}
