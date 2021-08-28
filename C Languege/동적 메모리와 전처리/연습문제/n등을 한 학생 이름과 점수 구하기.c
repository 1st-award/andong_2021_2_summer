/*
	�л����� �̸��� ���� ������ �־��� ��, K ���� �� �л��� �̸��� ã���� �մϴ�. 
	(��, ���� ������ ���� �л��� ���ٰ� �����մϴ�.) 
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
	// ����ü �迭 �л� �� ��ŭ �ʱ�ȭ 
	struct Student *student = (Student*)malloc(sizeof(Student)*names_len);
	// ����ü �迭�� �л� ���� �Է� 
	int i, j;
	for(i=0; i<names_len; ++i) {
		// �̸� ���� 
		strcpy(student[i].name, names[i]);
		// ���� ���� 
		student[i].score = scores[i];
	}
	// ������ �������� 
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
	// k��° �л� return 
	return student[k-1].name;
} 
void main(void) {
	// names_len�� 5 ~ 100 
	char **names = (char**)malloc(sizeof(char*)*100);
	int names_len;
	// scores_len�� 5 ~ 100 
	int *scores	= (int*)calloc(100, sizeof(int));
	int scores_len;
	int k;
	SetINFO(names, &names_len, scores, &scores_len, &k);
	printf("Result Solution: %s\n", solution(names, names_len, scores, scores_len, k));
} 
void SetINFO(char **names, int *names_len, int *scores, int *scores_len, int *k) {
	int i, score;
	char name[15];
	puts("====�̸� �Է�====");
	for(i=0; ; ++i) {
		// ��� �л��� �̸��� ���ĺ� �ҹ��ڷθ� �̷���� �ְ�, ���̴� 2 ~ 15
		names[i] = (char*)malloc(sizeof(char)*16);
		scanf("%s", name);
		// 0 �Է½� Ż�� 
		if(!strcmp(name, "0"))
			break;
		else
			strcpy(names[i], name);
	} 
	*names_len = i;
	puts("====���� �Է�====");
	for(i=0; ; ++i) {
		scanf("%d", &score);
		if(score == -1)
			break;
		// ���� ������ 0 ~ 100 
		else if(score<0 || score>100)
			exit(1);
		else
			scores[i] = score;
	}
	*scores_len = i;
	// �л� ���� ���� ������ ���ƾ� �Ѵ�. 
	if(*names_len != *scores_len)
		exit(1);
	puts("====n��° �л� �Է�====");
	scanf("%d", k);
	if(*k<1 || *k>*scores_len)	
		exit(1);
}
