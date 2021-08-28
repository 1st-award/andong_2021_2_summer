/*
	ü�������� ���� �ɻ������� ���� �� ���� ���� ���� �ϳ��� ���� ���� ���� �ϳ��� �����ϰ� ������ ��������
	����� ����Ͽ� ���������� �޽��ϴ�. (��, �̶� �Ҽ��� ������ ���� �����ϴ�.)
*/
#include <stdio.h>
#include <stdlib.h>

void InputINFO(int *, int *);
// �ִ밪 ���ϱ� 
int func_a(int *scores, int scores_len) {
	int max = scores[0], i;
	for(i=1; i<scores_len; ++i) {
		if(max<scores[i])
			max = scores[i];
	}
	return max;
}
// �ּҰ� ���ϱ� 
int func_b(int *scores, int scores_len) {
	int min = scores[0], i;
	for(i=0; i<scores_len; ++i) {
		if(min>scores[i]) 
			min = scores[i];
	}
	return min;
}
int solution(int *scores, int scores_len) {
	int max = func_a(scores, scores_len);
	int min = func_b(scores, scores_len);
	int i, sum = 0, count = 0;
	if(max == min)
		return scores[0];
	for(i=0; i<scores_len; ++i) {
		if(max==scores[i] || min==scores[i])
			continue;
		else {
			sum+=scores[i];
			count++;
		}
	}
	printf("%d\n", sum);
	return sum/count;
} 

void main(void) {
	// scores_len 3~100 
	int *scores = (int*)calloc(100, sizeof(int));
	int scores_len;
	InputINFO(scores, &scores_len);
	printf("Solution Result: %d\n", solution(scores, scores_len));
}
void InputINFO(int *scores, int *scores_len) {
	int i, num;
	printf("���� �Է�: ");
	for(i=0;i<100;++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(num<0 || num>100)
			exit(1);
		else
			scores[i] = num;
	}
	if(i<3 || i==100)
		exit(1);
	*scores_len = i;
} 
