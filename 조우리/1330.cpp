	#include<stdio.h>

	int main() {
		int a = 0;
		int b = 0;
		scanf_s("%d %d", &a, &b);
		int c = a - b;
		if (c > 0){
			printf(">");
		}
		else if (c < 0) {
			printf("<");
		}
		else {
			printf("==");
		}
		return 0;
	}