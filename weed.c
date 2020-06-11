#include <stdio.h>

int main() {
	int a;
	int b;
	printf("a : ");
	scanf("%d", &a);

	for(int i = 0; i < a; i++) {
		for(int j = a; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	printf("\nb : ");
	scanf("%d", &b);

	for(int i = 0; i < b; i++) {
		for(int j = 0; j <= i; j++) {
			printf("#");
		}
		printf("\n");
	}

	return 0;
}
