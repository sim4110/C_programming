#define _CRT_SECURE_NO_WARNINGS
//1065�� �Ѽ� 
#include<stdio.h>

void han_soo();

int main() {
	int N;

	scanf("%d", &N);

	han_soo(N);

	return 0;
}

void han_soo(int n) {
	if (n < 100) {
		printf("%d", n);
	}

	else {
		int n1, n2, n3;
		int count = 0;

		n1 = n % 10;			//���� �ڸ�
		n2 = (n / 10) % 10;		//���� �ڸ�
		n3 = n / 100;				//���� �ڸ�

		if (n1 - n2 == n2 - n3) {
			count++;
		}
		printf("%d", count);
	}
}
