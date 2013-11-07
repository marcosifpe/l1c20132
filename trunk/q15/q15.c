#include <stdio.h>
#include <stdlib.h>

char conceito(int nota) {
	if (nota < 31)
		return 'E';
	if (nota < 51)
		return 'D';
	if (nota < 71)
		return 'C';
	if (nota < 91)
		return 'B';
	else
		return 'A';
}

int main(void) {

	freopen("e15.txt", "r", stdin);
	freopen("s15.txt", "w", stdout);
	int i, n, notas;
	char c;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &notas);
		c = conceito(notas);
		printf("%c ", c);
		if (c == 'B' || c == 'A') {
			printf("A\n");
		} else {
			printf("R\n");
		}
	}

	fclose(stdin);
	fclose(stdout);

	return 0;
}

