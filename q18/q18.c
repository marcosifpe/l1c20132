#include<stdio.h>
#include<math.h>

int menor(int a, int b) {
	if (a > b)
		return b;
	else
		return a;
}
int maior(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int terceiro(int a, int b, int c, int d) {
	int aux;
	if (a < b) {
		aux = a;
		a = b;
		b = aux;
	}
	if (b < c) {
		aux = b;
		b = c;
		c = aux;
	}
	if (c < d) {
		aux = c;
		c = d;
		d = aux;
	}
	a = menor(a, b);
	a = menor(a, c);
	a = maior(a, d);
	return (a);
}
int main(void) {
	freopen("e18.txt", "r", stdin);
	freopen("s18.txt", "w", stdout);
	int i, j, t1, t2, t3, t4;
	scanf("%d", &i);
	for (j = 0; j < i; j++) {
		scanf("%d%d%d%d", &t1, &t2, &t3, &t4);
		printf("%d\n", terceiro(t1, t2, t3, t4));
	}
	fclose(stdin);
	fclose(stdout);
	return 0;

}
