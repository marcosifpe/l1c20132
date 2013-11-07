#include <stdio.h>

int main(void) {
	freopen("e5.txt", "r", stdin);
	freopen("s5.txt", "w", stdout);
	unsigned int i, numprod, quant, somaitens = 0;
	double somapreco = 0;
	do {
		scanf("%u %u", &numprod, &quant);
		for (i = 0; i < quant; i++) {
			switch (numprod) {
			//case 0:break;
			case 1:
				somapreco += 2.9;
				somaitens += 1;
				break;
			case 2:
				somapreco += 5.9;
				somaitens += 1;
				break;
			case 3:
				somapreco += 12.9;
				somaitens += 1;
				break;
			case 4:
				somapreco += 16.75;
				somaitens += 1;
				break;
			case 5:
				somapreco += 27.5;
				somaitens += 1;
				break;
			default:
				printf("erro\n");
			}
		}
	} while (numprod != 0 && quant != 0);
	printf("total de itens: %u\npreco total: %.2lf\n", somaitens, somapreco);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
