#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int arr1[1000000];
int arr2[1000000];

int compare(const void* a, const void* b)    // �������� �� �Լ� ����
{
	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 > num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ
}
int main() {
	int n, k,i;
	scanf_s("%d%d", &n, &k);

	for (i = 0;i < n;i++) {
		scanf_s("%d", &arr1[i]);
	}
	for (i = n;i <n + k;i++) {
		scanf_s("%d", &arr1[i]);
	}
	qsort(arr1, n+k, sizeof(int), compare);
	for (i = 0;i < n + k;i++) {
		printf("%d ", arr1[i]);
	}
}