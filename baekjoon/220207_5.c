#define _CRT_SECURE_NO_WARNINGS
//1065�� �Ѽ� 
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

			n1 = i % 10;			//���� �ڸ�
			n2 = (i / 10) % 10;		//���� �ڸ�
			n3 = i / 100;				//���� �ڸ�

			if (n1 - n2 == n2 - n3) {
				count++;
			}
		}
		printf("%d", count);
	}

