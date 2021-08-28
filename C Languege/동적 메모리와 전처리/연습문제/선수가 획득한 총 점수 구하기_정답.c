// ¼±¼ö°¡ È¹µæÇÑ ÃÑ Á¡¼ö ±¸ÇÏ±â Á¤´ä
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int taekwondo, int running, int shooting[], int shooting_len) {
	int answer = 0;
	if(taekwondo >= 25)
		answer += 250;
	else
		answer += taekwondo * 8;
	answer += 250 + (60-running) * 5;
	int count = 0;
	int i;
	for(i=0; i<shooting_len; ++i) {
		answer +=shooting[i];
		if(shooting[i] == 10)
			count++;
	}
	if(count >= 7)
		answer += 100;
	return answer;
}

void main(void) {
	int taekwondo = 27;
	int running = 63;
	int shooting[] = {9, 10, 8, 10, 10, 10, 7, 10, 10, 10};
	int shooting_len = 10;
	int ret = solution(taekwondo, running, shooting, shooting_len);
	printf("Result Solution: %d\n", ret);
} 
