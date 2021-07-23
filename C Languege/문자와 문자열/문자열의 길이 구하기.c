// 다음과 같이 "우리나라 대한민국!"을 문자형 배열에 초기화하고\
길이를 구하여 출력하는 프로그램을 작성하시오. 
#include <stdio.h>
#include <string.h>

int GetLength(char *);
void PrintLength(int);
void main(void) {
	char *str = "우리나라 대한민국!";
	PrintLength(GetLength(str));
}

int GetLength(char *_getString) {
	return strlen(_getString);
}
void PrintLength(int _getLength) {
	printf("위 문자열의 길이는 %d입니다.\n", _getLength); //한글이 2byte라서 총 18(한글 8자 기타 2자) 인식
}
