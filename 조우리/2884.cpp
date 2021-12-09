#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int H = 0, M = 0;
	scanf("%d%d", &H, &M);
	if (M < 45) {
		if (H == 0)
			printf("%d %d", 23, 60 + (M - 45));
		else
			printf("%d %d", H - 1, 60 + (M - 45));
	}
	else
		printf("%d %d", H, M - 45);
}