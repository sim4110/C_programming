#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int up, down, v, h = 0, day = 0;

	scanf("%d %d %d", &up, &down, &v);

	while (1) {
		h += up;
		day++;
		if (h >= v) {
			printf("%d", day);
			return 0;
		}
		h -= down;
	}
}