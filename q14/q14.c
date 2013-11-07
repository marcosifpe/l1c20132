#include<stdio.h>

double desconto(double preco, char cliente) {
	switch (cliente) {
	case 'C':
		return preco;
		break;
	case 'A':
		return (preco * 0.9);
		break;
	case 'V':
		return (preco * 0.8);
		break;
	default:
		return preco;
	}
}
double conta(double horas, char tipo) {

	int cont;

	while (horas > 3) {
		horas -= 1;
		cont++;
	}

	switch (tipo) {
	case 'X':
		return (3 + cont * 0.5);
		break;
	case 'Y':
		return (5 + cont);
		break;
	case 'Z':
		return (7 + cont * 1.5);
		break;
	}
}

int main(void) {
	freopen("e14.txt", "r", stdin);
	freopen("s14.txt", "w", stdout);
	double hs, pc, tt = 0;
	char cl, tp, op;

	do {
		scanf("%lf %c %c %c", &hs, &tp, &cl, &op);
		pc = conta(hs, tp);
		pc = desconto(pc, cl);
		printf("%.2lf\n", pc);
		tt = tt + pc;
	} while (op != 'N');
	printf("Total: %.2lf\n", tt);
	fclose(stdin);
	fclose(stdout);

	return 0;
}
