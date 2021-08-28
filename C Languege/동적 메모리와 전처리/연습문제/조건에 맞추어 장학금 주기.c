/*
	모 학교에서는 학기가 끝날 때마다 장학금을 줍니다. 
	이때 장학생이 몇 명인지 구하려고 하니다. 장학금을 주는 조건은 다음과 같습니다.
	
	1. 이번 학기 성적이 80점 이상(100점 만점)이면서 석차가 상위 10% 이내인 학생
	2. 이번 학기 성적이 80점 이상이면서 1등인 학생
	3. 직전 학기 대비 성적이 가장 많이 오른 학생(여러 명인 경우 해당 학생 전부)
	
	단, 동점인 학생들은 등수가 같으며, 중복 수혜는 불가합니다.
*/
#include <stdio.h>
#include <stdlib.h>

void InputINFO(int *, int *, int *, int *);
// 이번 학기 내림차순 하기 
int *func_a(int *current_grade, int current_grade_len) {
	int *rank = (int*)calloc(current_grade_len, sizeof(int));
	int i, j;
	// 석차 구하기
	for(i=0; i<current_grade_len; ++i) {
		rank[i]++;
		for(j=0; j<current_grade_len; ++j) {
			if(current_grade[i] > current_grade[j]) {
				rank[i]++;
			}
		}
	}
	return rank;
} 
// 직전 학기 대비 성적이 가장 많이 오른 학생 구하기 
int func_b(int *current_grade, int *last_grade, int last_grade_len) { 
	int i, max_score=0;
	for(i=0; i<last_grade_len; ++i) {
		if(current_grade[i]-last_grade[i] > max_score)
			max_score = current_grade[i]-last_grade[i];
	}
	return max_score;
}

int solution(int *current_grade, int current_grade_len, int *last_grade, int last_grade_len) {
	int i, max_score, count=0;
	int *rank = func_a(current_grade, current_grade_len);
	max_score = func_b(current_grade, last_grade, last_grade_len);
	for(i=0; i<current_grade_len; ++i) {
		// 이번 학기 성적이 80점 이상이면서 석차가 상위 10% 이내인 학생 
		if(current_grade[i]>=80 && rank[i]<=current_grade_len*0.1)
			++count;
		// 이번 학기 성적이 80이상이면서 1등인 학생
		else if(current_grade[i]>=80 && i==0)
			++count;
		// 직전 학기 대비 성적이 가장 많이 오른 학생(여러 명인 경우 해당 학생 전부) 
		else if(current_grade[i] - last_grade[i] == max_score)
			++count;
		else
			continue;
	}
	return count;
}

int main(void) {
	// current_grade_len과 last_grade_len은 같으며 1~200
	int *current_grade = (int*)calloc(200, sizeof(int));
	int *last_grade = (int*)calloc(200, sizeof(int));
	int current_grade_len;
	int last_grade_len;
	InputINFO(current_grade, &current_grade_len, last_grade, &last_grade_len);
	printf("Solution Result: %d\n", solution(current_grade, current_grade_len, last_grade, last_grade_len));
}
void InputINFO(int *current_grade, int *current_grade_len, int *last_grade, int *last_grade_len) {
	int i, num;
	printf("현 학기 점수: "); 
	for(i=0; i<200; ++i) {
		scanf("%d", &num);
		if(num == -1) 
			break;
		else 
			current_grade[i] = num;
	}
	printf("전 학기 점수: ");
	for(i=0; i<200; ++i) {
		scanf("%d", &num);
		if(num == -1) 
			break;
		else 
			last_grade[i] = num;
	}
	*current_grade_len = *last_grade_len = i;
} 
