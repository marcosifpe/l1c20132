#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double calculapi(int n){
	double m;
	m=(double)n;
	if (m==0)
	return (powf(16,-m)*((4/(8*m+1))-(2/(8*m+4))-(1/(8*m+5))-(1/(8*m+6))));
	else
	return(powf(16,-m)*((4/(8*m+1))-(2/(8*m+4))-(1/(8*m+5))-(1/(8*m+6)))+calculapi(m-1));
	
}

int main(void){
	freopen("e10.txt", "r", stdin);
	freopen("s10.txt", "w", stdout);
int n;
double erro,relat;
scanf("%d",&n);
printf("PI: %.15lf\n",calculapi(n));
erro=M_PI-calculapi(n);
relat=erro/M_PI;
if(relat<0) relat=-relat;
printf("Erro: %.15lf\n",relat);

    fclose(stdin);
    fclose(stdout);
    return 0;
}
