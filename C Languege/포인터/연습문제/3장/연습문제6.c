// 다음 출력 결과를 쓰시오.
#include <stdio.h>

void main (void) {
	int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
	
	printf("%d %d %d\n", arr[0][0], *arr[0], **arr); // 10 10 10
	printf("%d %d %d\n", arr[0][1], *(arr[0]+1), *(*arr+1)); // 20 20 20
	printf("%d %d %d\n", arr[1][0], *arr[1], **(arr+1)); // 30 30 30
	printf("%d %d %d\n", arr[1][1], *(arr[1]+1), *(*(arr+1)+1)); // 40 40 40
}
