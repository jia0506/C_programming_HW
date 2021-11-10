#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double f_rand();

int main(void) {

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		printf("%lf  ", f_rand());
	}

}

double f_rand() {

	return rand() / (double)RAND_MAX * 2.2 - 0.5;
}