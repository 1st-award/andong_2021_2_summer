// 5명의 이름과 키, 몸무게를 입력받아 키가 작은 순으로 정렬하여 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <string.h>

typedef struct UserInfo {
	char name[20];
	int tall;
	double weight;
} UserInfo;

UserInfo *InputInfo(void);
void down(UserInfo *);
void main(void) {
	down(InputInfo());
} 

UserInfo *InputInfo(void) {
	static UserInfo input[5];
	char name[20];
	int i;
	for(i=0 ;i<5; ++i) {
		scanf("%s %d %lf", name, &input[i].tall, &input[i].weight);
		strcpy(input[i].name, name);
	}
	return input;
}
void down(UserInfo *_getInfo) {
	char tempName[20];
	int tempTall;
	double tempWeight;
	int i, j;

	for(i=0; i<5; ++i) {
		for(j=i+1; j<5; ++j) {
			if(_getInfo[j].tall<_getInfo[i].tall) {
				// temp <- _getInfo[i]
				strcpy(tempName, _getInfo[i].name);
				tempTall = _getInfo[i].tall;
				tempWeight = _getInfo[i].weight;
				// _getInfo[i] <- _getInfo[j]
				strcpy(_getInfo[i].name, _getInfo[j].name);
				_getInfo[i].tall = _getInfo[j].tall;
				_getInfo[i].weight = _getInfo[j].weight;
				// _getInfo[j] <- temp
				strcpy(_getInfo[j].name, tempName);
				_getInfo[j].tall = tempTall;
				_getInfo[j].weight = tempWeight;
			}
		}
	}
	printf("====오름차순====\n");
	for(i=0; i<5; ++i) {
		printf("%s %d %.1f\n", _getInfo[i].name, _getInfo[i].tall, _getInfo[i].weight);
	}
}
