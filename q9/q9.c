#include <stdio.h>

int main(void) {

	freopen("e9.txt", "r", stdin);
	freopen("s9.txt", "w", stdout);

	double conta = 7.00;
	int i, m3;

	do {
		conta = 7.00;
		scanf("%d", &m3);
		if (m3 < 0) {
			continue;
		}
		for (i = 0; i <= m3; i++) {
			if (i > 10 && i <= 30) {
				conta++;
			}
			if (i > 30 && i <= 100) {
				conta += 2;
			}
			if (i > 100) {
				conta += 5;
			}
		}
		printf("%.2f\n", conta);

	} while (m3 >= 0);

	fclose(stdin);
	fclose(stdout);
	return 0;
}
