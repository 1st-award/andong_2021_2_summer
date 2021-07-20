/*
다음과 같이 배열 요소들이 출력되었다. 결과를 보고 []부분에 코드를 삽입하여 프로그램을 완성하시오.
*/

#include <stdio.h>

void main(void) {
	int arr[6] = {10, 20, 100, 200, 1000, 2000};
	// 이곳에 입력하세요.
	int (*ap)[2] = (int(*)[2])arr;
	//
	
	printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	printf("%d %d %d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1], ap[2][0], ap[2][1]);
}
