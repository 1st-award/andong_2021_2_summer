/*
	종목은 태권도, 500m 달리기, 사격 경기를 하려 합니다. 종목별 점수 산출 방식은 다음과 같습니다.
	=====
	태권도 		-> 25경기 이상 승리하면 250점. 그 외에는 승리당 8점
	500m 달리기 -> 60초 완주 시 250점. 빠르면 1초당 +5점 느리면 1초당 -5점
	사격		-> 10번 사격해 과녁에 적힌 숫자의 합만큼 점수 획득. 7번 이상 10점에 맞추면 추가 점수 100점 
	=====
	선수가 획득한 총 점수를 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *, int *);
int solution(int taekwondo, int running, int *shooting, int shooting_len) {
	int i, point = 0, shooting_bonus_count = 0;
	// 태권도 		-> 25경기 이상 승리하면 250점. 그 외에는 승리당 8점
	point += taekwondo >= 25 ? 250 : taekwondo*8;
	// 500m 달리기 -> 60초 완주 시 250점. 빠르면 1초당 +5점 느리면 1초당 -5점
	point += 250 + (60-running)*5;
	// 사격		-> 10번 사격해 과녁에 적힌 숫자의 합만큼 점수 획득. 
	for(i=0; i<10; ++i) {
		if(!shooting[i])
			continue;
		// 7번 이상 10점에 맞추면 추가 점수 100점
		else if(shooting[i] == 10) {
			shooting_bonus_count++;	
			point += shooting[i];
		}
		else
			point += shooting[i];
	}
	if(shooting_bonus_count >= 7)
		point += 100;
	return point;
}

void main(void) {
	int taekwondo;
	int running;
	// shooting_len 항상 10 
	int *shooting = (int*)malloc(sizeof(int)*10);
	int shooting_len = 10;
	SetINFO(&taekwondo, &running, shooting);
	printf("Result Solution: %d\n", solution(taekwondo, running, shooting, shooting_len));
}	
void SetINFO(int *taekwondo, int *running, int *shooting) {
	int num, i;
	puts("====태권도 점수 입력====");
	scanf("%d", &num);
	// 태권도는 0 ~ 35
	if(num<0 || num>35)
		exit(1);
	else
		*taekwondo = num;
	puts("====달리기 점수 입력====");
	scanf("%d", &num);
	// 달리기 기록은 40 ~ 120
	if(num<40 || num>120)
		exit(1);
	else
		*running = num;
	puts("====사격 점수 입력====");
	for(i=0; i<10; ++i) {
		scanf("%d", &num);
		// 과녁에는 0 ~ 10 
		if(num<0 || num>10)
			exit(1);
		else
			shooting[i] = num;
	} 
}
