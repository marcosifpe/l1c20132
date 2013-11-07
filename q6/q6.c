#include <stdio.h>

int main(void) {
	freopen("e6.txt", "r", stdin);
	freopen("s6.txt", "w", stdout);
	double x1, x2, b, c;
	char resp;
	do {

		scanf("%lf %lf", &x1, &x2);
		scanf(" %c", &resp);
		b = -(x1 + x2);
		if (b == 0)
			b = 0;
		c = x1 * x2;
		if (c == 0)
			c = 0;
		if (b >= 0 && c >= 0)
			printf("x2+%.2lfx+%.2lf=0\n", b, c);
		else if (b < 0 && c >= 0)
			printf("x2%.2lfx+%.2lf=0\n", b, c);
		else if (b >= 0 && c < 0)
			printf("x2+%.2lfx%.2lf=0\n", b, c);
		else
			printf("x2%.2lfx%.2lf=0\n", b, c);
	} while (resp != 'N');
	fclose(stdin);
	fclose(stdout);
	return 0;
}
