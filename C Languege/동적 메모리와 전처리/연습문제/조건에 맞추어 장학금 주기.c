/*
	�� �б������� �бⰡ ���� ������ ���б��� �ݴϴ�. 
	�̶� ���л��� �� ������ ���Ϸ��� �ϴϴ�. ���б��� �ִ� ������ ������ �����ϴ�.
	
	1. �̹� �б� ������ 80�� �̻�(100�� ����)�̸鼭 ������ ���� 10% �̳��� �л�
	2. �̹� �б� ������ 80�� �̻��̸鼭 1���� �л�
	3. ���� �б� ��� ������ ���� ���� ���� �л�(���� ���� ��� �ش� �л� ����)
	
	��, ������ �л����� ����� ������, �ߺ� ������ �Ұ��մϴ�.
*/
#include <stdio.h>
#include <stdlib.h>

void InputINFO(int *, int *, int *, int *);
// �̹� �б� �������� �ϱ� 
int *func_a(int *current_grade, int current_grade_len) {
	int *rank = (int*)calloc(current_grade_len, sizeof(int));
	int i, j;
	// ���� ���ϱ�
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
// ���� �б� ��� ������ ���� ���� ���� �л� ���ϱ� 
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
		// �̹� �б� ������ 80�� �̻��̸鼭 ������ ���� 10% �̳��� �л� 
		if(current_grade[i]>=80 && rank[i]<=current_grade_len*0.1)
			++count;
		// �̹� �б� ������ 80�̻��̸鼭 1���� �л�
		else if(current_grade[i]>=80 && i==0)
			++count;
		// ���� �б� ��� ������ ���� ���� ���� �л�(���� ���� ��� �ش� �л� ����) 
		else if(current_grade[i] - last_grade[i] == max_score)
			++count;
		else
			continue;
	}
	return count;
}

int main(void) {
	// current_grade_len�� last_grade_len�� ������ 1~200
	int *current_grade = (int*)calloc(200, sizeof(int));
	int *last_grade = (int*)calloc(200, sizeof(int));
	int current_grade_len;
	int last_grade_len;
	InputINFO(current_grade, &current_grade_len, last_grade, &last_grade_len);
	printf("Solution Result: %d\n", solution(current_grade, current_grade_len, last_grade, last_grade_len));
}
void InputINFO(int *current_grade, int *current_grade_len, int *last_grade, int *last_grade_len) {
	int i, num;
	printf("�� �б� ����: "); 
	for(i=0; i<200; ++i) {
		scanf("%d", &num);
		if(num == -1) 
			break;
		else 
			current_grade[i] = num;
	}
	printf("�� �б� ����: ");
	for(i=0; i<200; ++i) {
		scanf("%d", &num);
		if(num == -1) 
			break;
		else 
			last_grade[i] = num;
	}
	*current_grade_len = *last_grade_len = i;
} 
