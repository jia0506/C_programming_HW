#include <stdio.h>

sum(n);

int main(void) {
	
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("1���� %d������ ������ ��: %d", n, sum(n));

	return 0;
}

int sum(int n) {

	if (n == 1)
		return n;
	else
		return n * n + sum(n - 1);
}