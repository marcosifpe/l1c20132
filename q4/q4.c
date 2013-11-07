#include <stdio.h>

int main(void){
	freopen("e4.txt", "r", stdin);
	freopen("s4.txt", "w", stdout);
int a,b,n,i;
do{
scanf("%d",&n);
if(n==0)
break;
else{
printf("%d: ",n);
for (i=n;i>0;i--){
if(n%i==0){
           if(i!=1)
           printf("%d, ",i);
           else
           printf("%d\n",i);
           }
}
}
}while(n!=0);
 	fclose(stdin);
    fclose(stdout);
return 0;
}
