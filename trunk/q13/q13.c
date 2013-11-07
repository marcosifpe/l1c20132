#include<stdio.h>

int somaRec(int a, int b, int c) {
	if (a == 0) {
		return a;
	}

	if (a % c == 0) {
		return a + somaRec(a - 1, b, c);
	} else {
		return somaRec(a - 1, b, c);
	}

}

int main(void) {
	freopen("e13.txt", "r", stdin);
	freopen("s13.txt", "w", stdout);

	int x, y, z;
	char c;

	do {
		scanf("%d %d %d %c", &x, &y, &z, &c);
		printf("%d\n", somaRec(x, y, z));

	} while (c != 'N');

	fclose(stdin);
	fclose(stdout);

	return 0;
}
