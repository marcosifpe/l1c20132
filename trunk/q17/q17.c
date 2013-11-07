#include<stdio.h>
#include<math.h>

int mdc(int x,int y){
	if(y==0)
	return x;
	else
	return mdc(y,x%y);
	
}
int mmc(int x, int y){
	int aux;
	if(x>y){
	aux=y;
	y=x;
	x=aux;
	}
	if(y==0)
	return x;
	else{
		return ((x*y)/(mdc(x,y)));
	}
}

int main(void){
	freopen("e17.txt", "r", stdin);
	freopen("s17.txt", "w", stdout);
int a,b;
do{
scanf("%d%d",&a,&b);
if(a==0&&b==0)
break;
printf("%d\n",(mmc(a,b)+mdc(a,b)));
}while(a!=0&&b!=0);

    fclose(stdin);
    fclose(stdout);
    return 0;

}
