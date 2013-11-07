#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool ehPrimo(unsigned int a){
	int i,cont=0;
	if (a<2)
	return false;
	else{
	
	for(i=2;i<=a;i++){
	if(a%i==0){
		cont++;
	}
	}
	if(cont==1)
	return true;
	else return false;
}
}
double fatorial(unsigned int a){
	if(a<=1)
	return 1;
	else
	return a*fatorial(a-1);
	
}


int main(void){
	freopen("e11.txt", "r", stdin);
	freopen("s11.txt", "w", stdout);

unsigned int i,n,x;
double soma;
bool teste;
do{
soma=0;
scanf("%u%u",&n,&x);
if(n==0&&x==0)
break;
while(n>0){
teste=ehPrimo(x);
if(teste==true){
		soma+=fatorial(x);
		n--;
		}
	x++;
	
}
printf("%0.lf\n",soma);

}while(x!=0||n!=0);

    fclose(stdin);
    fclose(stdout);
    return 0;
}
