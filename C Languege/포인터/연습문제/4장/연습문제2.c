/*
다음과 같이 배열 요소들이 출력되었따. 결과를 보고 [] 부분에 코드를 삽입하여 프로그램을 완성하시오.
*/

#include <stdio.h>

void main(void) {
	int arr[2][2] = {{10, 20}, {100, 200}};
	// 이곳에 입력하세요.
	int (*ap)[2] = arr; 
	//
	
	printf("%d %d %d %d\n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
	printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
} 
