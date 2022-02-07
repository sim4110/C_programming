#define _CRT_SECURE_NO_WARNINGS
//1065번 한수 
#include<stdio.h>

void han_soo(int n);

int main() {
	int N;

	scanf("%d", &N);
	if (N < 100) {
		printf("%d", N);
	}
	else if (N >= 100) {
		han_soo(N);
	}

	return 0;
}

void han_soo(int n) {
	int count = 99;

		for (int i = 100; i <= n; i++) {
			int n1, n2, n3;

			n1 = i % 10;			//일의 자리
			n2 = (i / 10) % 10;		//십의 자리
			n3 = i / 100;				//백의 자리

			if (n1 - n2 == n2 - n3) {
				count++;
			}
		}
		printf("%d", count);
	}

