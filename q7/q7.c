#include<stdio.h>
#include<math.h>

int main(void) {
	freopen("e7.txt", "r", stdin);
	freopen("s7.txt", "w", stdout);
	float dist, soma = 0;
	char dirt;
	int coord = 0;

	scanf("%c%f", &dirt, &dist);
	while (dirt != 'Q' && dist != 0) {
		if (dirt != '\n') {
			soma += dist;
			if (dirt == 'D') {
				coord += 1;
				if (coord == 4)
					coord = 0;
			}
			if (dirt == 'E') {
				coord -= 1;
				if (coord == -1)
					coord = 3;
			}
			scanf("%c%f", &dirt, &dist);
		} else {
			scanf("%c%f", &dirt, &dist);
		}
	}

	printf("%.2f ", soma);
	switch (coord) {
	case 0:
		printf("Norte");
		break;
	case 1:
		printf("Leste");
		break;
	case 2:
		printf("Sul");
		break;
	case 3:
		printf("Oeste");
		break;
	default:
		printf("nao funfou :(");
		break;
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}
