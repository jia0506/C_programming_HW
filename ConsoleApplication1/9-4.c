#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random() {
	static int inited = 0;
	if (inited == 0) {
		printf("초기화 실행\n");
		inited = 1;
		srand((unsigned)time(NULL));
	}
	return rand();
}

int main() {
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d", get_random());

	return 0;
}