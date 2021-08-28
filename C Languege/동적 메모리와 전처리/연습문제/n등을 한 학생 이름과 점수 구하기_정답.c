// n등을 한 학생의 이름과 점수 구하기 정답
#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	char name[20];
	int score;
}Student;
// qsort
int compare(const void *a, const void *b) {
	Student first = *(Student *)a;
	Student second = *(Student *)b;
	if(first.score > second.score)
		return -1;
	else if(first.score < second.score)
		return 1;
	else
		return 0;
}

char* solution(char* names[], int names_len, int scores[], int socres_len, int K) {
	int len = names_len;
	Student* students = (Student*)malloc(sizeof(Student)*len);
	int i;
	for(i=0; i<len; ++i) {
		strcpy(students[i].name, names[i]);
		students[i].score = scores[i];
	}
	qsort(students, len, sizeof(Student), compare);
	return students[K-1].name;
}

void main(void) {
	char *names[] = {"lukas", "james", "levi", "eli", "max"};
	int names_len = 5;
	int scores[] = {30, 20, 50, 40, 10};
	int scores_len = 5;
	int K = 2;
	printf("Result Solution: %s\n", solution(names, names_len, scores, scores_len, K));
}
