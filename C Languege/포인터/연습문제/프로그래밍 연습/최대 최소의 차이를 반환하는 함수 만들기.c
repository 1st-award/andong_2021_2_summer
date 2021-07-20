// double형 일차원 배열에서 가장 큰 값과 가장 작은 값을 찾고,\
그 값의 차이를 반환하는 함수를 만들어 결과를 알아보는 프로그램을 작성하시오.
#include <stdio.h>
double diff(double *, double *, double *);
void main(void) {
	double arr[5] = {3.12, 5.14, 7.25, 7.48, 5.91};
	double max=arr[0], min=arr[0], result=0.0;
	result = diff(arr, &max, &min);
	printf("%.2lf - %.2lf = %.2lf\n", max, min, result);
} 
double diff(double *_arr, double *_max, double *_min) {
	int i;
	for(i=1; i<5; ++i) {
		if(*_max<_arr[i])	*_max = _arr[i];
		else if(*_min>_arr[i])	*_min = _arr[i];
		else	continue;
	}
	return *_max - *_min;
}
