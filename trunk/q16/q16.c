#include<stdio.h>

unsigned int fibonacci(unsigned int n) {
	unsigned int f1 = 0, f2 = 1, f3, i;
	for (i = 0; i < n; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f1;
}

int main(void) {
	freopen("e16.txt", "r", stdin);
	freopen("s16.txt", "w", stdout);
	unsigned int i, j, x, y, soma = 0;
	scanf("%u %u", &x, &y);
	for (i = y; i < x; i++) {
		for (j = 0; j < x; j++) {
			if (i == fibonacci(j)) {
				printf("%u ", i);
				soma += i;
			}
		}
	}
	printf("\nsoma: %u", soma);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
