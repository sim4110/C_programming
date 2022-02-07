#define _CRT_SECURE_NO_WARNINGS
/*
문제 1259 팰린드롬수 
*/

#include<stdio.h>
#include<string.h>

int main() {
	char num[5], change[5];
	int i, n, count = 0;

	while (1) {
		scanf("%s", num);
		int len = strlen(num);

		if (num[0] == '0') break;
		n = len;
		for (i = 0; i < len; i++) {
			change[n] = num[i];
			n--;
		}
		
		n = len;
		for (i = 0; i < len; i++) {
			if (change[n] == num[i]) {
				count++;
				n--;
			}
		}

		if (count == len) {
			printf("yes\n");
		}
		else printf("no\n");
	}
	return 0;
}