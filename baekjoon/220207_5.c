#define _CRT_SECURE_NO_WARNINGS
//1065번 한수 
#include<stdio.h>

void han_soo();

int main() {
	int N;

	scanf("%d", &N);

	han_soo(N);

	return 0;
}

void han_soo(int n) {
	int count = 0;
	int n1, n2, n3;

	if (n < 100) {
		printf("%d", n);
	}

	else if( n  <1000) {
		count += 99;
		for (int i = 100; i < n; i++) {

			n1 = i % 10;			//일의 자리
			n2 = (i / 10) % 10;		//십의 자리
			n3 = i / 100;				//백의 자리

			if (n1 - n2 == n2 - n3) {
				count++;
			}
		}
		printf("%d", count);
	}
}
