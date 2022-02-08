#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int up, down, v, day;

	scanf("%d %d %d", &up, &down, &v);
	day = (v - down - 1) / (up - down) + 1;
	printf("%d", day);
	return 0;
}