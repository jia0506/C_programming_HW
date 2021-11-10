#include<stdio.h>

fib(int n);

int main(void) {
	for (int n = 0; n <= 10; n++) {
			printf("fib(%d) = %d\n", n, fib(n));
	}
}

int fib(int n) {

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}