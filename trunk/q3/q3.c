#include <stdio.h>

int main(void) {
	freopen("e3.txt", "r", stdin);
	freopen("s3.txt", "w", stdout);
	int a, b, c, i, j, k, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		a = i * i;
		for (j = 1; j <= i; j++) {
			b = j * j;
			for (k = 1; k <= j; k++) {
				c = k * k;
				if (a == (b + c)) {
					printf("%d, %d, %d\n", i, k, j);
				}
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
