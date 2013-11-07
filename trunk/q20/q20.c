#include<stdio.h>
#include<math.h>

double nivel(int str, int vel, int tec) {
	double total;
	total = sqrt(2 * powf(str, 1) + powf(vel, 2) + 2 * powf(tec, 2));
	return total;
}

int main(void) {
	freopen("e20.txt", "r", stdin);
	freopen("s20.txt", "w", stdout);

	int i, n, jog, f, v, t;
	double nda, soma = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d%d", &jog, &f, &v, &t);
		nda = nivel(f, v, t);
		soma += nda;
		printf("%d %.2lf\n", jog, nda);
	}
	printf("media do time: %.2lf", (soma / n));
	fclose(stdin);
	fclose(stdout);
	return 0;
}
