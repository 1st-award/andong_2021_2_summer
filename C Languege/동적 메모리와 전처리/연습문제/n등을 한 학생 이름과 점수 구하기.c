/*
	학생들의 이름과 시험 점수가 주어질 떄, K 등을 한 학생의 이름을 찾으려 합니다. 
	(단, 시험 점수가 같은 학생은 없다고 가정합니다.) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	char name[20];
	int score;
}Student;

void SetINFO(char**, int*, int*, int*, int*);
char* solution(char **names, int names_len, int scores[], int scores_len, int k) {
	// 구조체 배열 학생 수 만큼 초기화 
	struct Student *student = (Student*)malloc(sizeof(Student)*names_len);
	// 구조체 배열에 학생 정보 입력 
	int i, j;
	for(i=0; i<names_len; ++i) {
		// 이름 복사 
		strcpy(student[i].name, names[i]);
		// 점수 복사 
		student[i].score = scores[i];
	}
	// 성적별 내림차순 
	char name_temp[15];
	int score_temp;
	for(i=0; i<names_len; ++i) {
		for(j=i; j<names_len; ++j) {
			if(student[i].score<student[j].score) {
				strcpy(name_temp, student[i].name);
				strcpy(student[i].name, student[j].name);
				strcpy(student[j].name, name_temp);
				student[i].score = student[i].score ^ student[j].score;
				student[j].score = student[j].score ^ student[i].score;
				student[i].score = student[i].score ^ student[j].score;
			}
		}
	} 
	// k번째 학생 return 
	return student[k-1].name;
} 
void main(void) {
	// names_len은 5 ~ 100 
	char **names = (char**)malloc(sizeof(char*)*100);
	int names_len;
	// scores_len은 5 ~ 100 
	int *scores	= (int*)calloc(100, sizeof(int));
	int scores_len;
	int k;
	SetINFO(names, &names_len, scores, &scores_len, &k);
	printf("Result Solution: %s\n", solution(names, names_len, scores, scores_len, k));
} 
void SetINFO(char **names, int *names_len, int *scores, int *scores_len, int *k) {
	int i, score;
	char name[15];
	puts("====이름 입력====");
	for(i=0; ; ++i) {
		// 모든 학생의 이름은 알파벳 소문자로만 이루어져 있고, 길이는 2 ~ 15
		names[i] = (char*)malloc(sizeof(char)*16);
		scanf("%s", name);
		// 0 입력시 탈출 
		if(!strcmp(name, "0"))
			break;
		else
			strcpy(names[i], name);
	} 
	*names_len = i;
	puts("====점수 입력====");
	for(i=0; ; ++i) {
		scanf("%d", &score);
		if(score == -1)
			break;
		// 시험 점수는 0 ~ 100 
		else if(score<0 || score>100)
			exit(1);
		else
			scores[i] = score;
	}
	*scores_len = i;
	// 학생 수와 점수 개수가 같아야 한다. 
	if(*names_len != *scores_len)
		exit(1);
	puts("====n번째 학생 입력====");
	scanf("%d", k);
	if(*k<1 || *k>*scores_len)	
		exit(1);
}
