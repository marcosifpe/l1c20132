#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	freopen("e8.txt", "r", stdin);
	freopen("s8.txt", "w", stdout);

	srand(time(NULL));
	int a, b, c, i, j, k;
	scanf("%d", &j);
	for (k = 0; k < j; k++) {

		i = (rand() % 900 + 100);
		a = i / 100;
		b = (i % 100 - i % 10) / 10;
		c = i % 10;
		printf("%d %d%d%d\n", i, c, b, a);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
