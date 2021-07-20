/*
다음과 같이 배열 요소들이 출력되었다. 결과를 보고 []부분에 코드를 삽입하여 프로그램을 완성하시오.
*/ 

#include <stdio.h>

void main(void) {
	int arr[5] = {10, 20, 30, 40, 50};
	// 이곳에 입력하세요. 
	int *ap = arr;
	//
	
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("%d %d %d %d %d\n", ap[0], ap[1], ap[2], ap[3], ap[4]);
}
