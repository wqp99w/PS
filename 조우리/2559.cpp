#include<stdio.h>
int ary[100000];
int ary1[10000];
int main() {
	int n = 0, k = 0,i,s;
	scanf_s("%d %d", &n ,&k );

	for (i = 0; i < n; i++) {
		scanf_s("%d", &ary[i]);
	}
	printf("12");

	for (i = 0; i < k; i++) {
		scanf_s("%d", &ary1[i]);
	}
	printf("123");
	return 0;
	
}