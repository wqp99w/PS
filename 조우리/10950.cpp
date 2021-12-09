#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[100000];
int main() {
	int a, b, T,i;
	scanf("%d", &T);
	for (i = 0;i < T;i++) {
		scanf("%d%d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0;i < T;i++) {
		printf("%d\n", arr[i]);
	}
}