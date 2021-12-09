#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int X = 0;
	scanf("%d", &X);
	for (int i = X;i >= 1;i--) {
		printf("%d\n", i);
	}
}