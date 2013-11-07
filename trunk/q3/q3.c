#include <stdio.h>

int main(void){
	freopen("e3.txt", "r", stdin);
	freopen("s3.txt", "w", stdout);
int a,b,c,i,j,k,n,cont=0;
scanf("%d",&n);
for (i=1;i<=n;i++){
a=i*i;
for (j=1;j<=20;j++){
                    b=j*j;
                    for(k=1;k<=n;k++){
                                       c=k*k;
                                       if(a==(b+c)&&cont==0){
                                                   printf("%d, %d, %d\n",i,j,k);
                                                   cont=1;
                                                   }
                                       }
                    }
cont=0;
}
 	fclose(stdin);
    fclose(stdout);
return 0;
}
