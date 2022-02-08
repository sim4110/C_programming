#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int factorial(int num);

int main() {
	int n, k, bin;
	int n_fac, k_fac, nk_fac;
	scanf("%d %d", &n, &k);
	
	n_fac = factorial(n);
	k_fac = factorial(k);
	nk_fac = factorial(n - k);;

	bin = n_fac / (k_fac * nk_fac); //이항계수 구하기

	printf("%d", bin);

	return 0;
}

int factorial(int num) {		//재귀함수 사용해 팩토리얼 구하기
	if (num > 0) {
		return num * factorial(num - 1);
	}
	else return 1;
}