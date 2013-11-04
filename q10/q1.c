#include<stdio.h>


int main(void){
	freopen("e1.txt", "r", stdin);
	freopen("s1.txt", "w", stdout);

int i,n;
double t,soma=0,media=0;

scanf("%d",&n);

for(i=0;i<n;i++){
	scanf("%lf",&t);
	t=1/t;
	soma+=t;
}
media=n/soma;

printf("%.4lf",media);

 	fclose(stdin);
    fclose(stdout);

    return 0;
}
