#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int K, n;
	int count = 0;
	scanf("%d", &K);

	n = K;
	
	while (1) {
		n = K % 5;
		if (n == 0) {
			count += K / 5;
			break;
			}

		K -= 3;
		count++;
		if (K <= 0) {
			break;
		}
	}

	if (K < 0) {
		printf("-1");
	}
	else printf("%d", count);


	return 0;
}

