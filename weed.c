#include <stdio.h>

int main() {
	int a;
	int b;
	char ca;
	char cb;

	printf("/// Triangle ///\n\n");

	printf("a : ");
	scanf("%d", &a);

	printf("ca : ");
	scanf(" %c", &ca);

	for(int i = 0; i < a; i++) {
		for(int j = a; j > i; j--) {
			printf("%c", ca);
		}
		printf("\n");
	}

	printf("\nb : ");
	scanf("%d", &b);

	printf("cb : ");
	scanf(" %c", &cb);

	for(int i = 0; i < b; i++) {
		for(int j = 0; j <= i; j++) {
			printf("%c", cb);
		}
		printf("\n");
	}

	return 0;
}
