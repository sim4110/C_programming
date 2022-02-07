#define _CRT_SECURE_NO_WARNINGS
/*
문제 1259 팰린드롬수 
*/

#include<stdio.h>
#include<string.h>

int main() {
	char num[5], change[5];
	int i, n, count = 0;
	int len;

	while (1) {
		scanf("%s", num);
		if (num[0] == '0') break;
		len = strlen(num);

		count = 0;
		n = len - 1;

		for (i = 0; i < len; i++) {
			change[n] = num[i];
			n--;
		}
		
		for (i = 0; i < len; i++) {
			if (change[i] == num[i]) {
				count++;
			}
		}

		if (count == len) {
			printf("yes\n");
		}
		else printf("no\n");
	}
	return 0;
}