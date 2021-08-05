/* "학교명", "학년"을 저장할 수 있는 구조체로 2개의 변수를 선언한 후, 
	한 개의 변수는 학교명에 "제주초등학교" ,학년에 6으로 각각 초기화하고
	다른 변수에는 새로운 학교와 학년을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>
#include <string.h>

typedef struct UserInfo {
	char schoolName[20];
	int grade;
} UserInfo;

void InputInfo(UserInfo *);

void main(void) {
	UserInfo info[2];
	strcpy(info[0].schoolName, "제주초등학교");
	info[0].grade = 6;
	
	InputInfo(&info[1]);
	printf("%12s %d학년\n", info[0].schoolName, info[0].grade);
	printf("%12s %d학년\n", info[1].schoolName, info[1].grade);
}
void InputInfo(UserInfo *_getInfo) {
	printf("학교이름 학년 입력 : ");
	scanf("%s %d", &_getInfo->schoolName, &_getInfo->grade);
}
