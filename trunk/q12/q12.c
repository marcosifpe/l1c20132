#include <stdio.h>
#include <stdlib.h>

int produto(int a,int b){
if (b==1)
return a;
else
return produto(a,b-1)+a;
}


int main(void){

    freopen("e12.txt","r",stdin);
    freopen("s12.txt","w",stdout);
int i,n,x,y;

scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&x,&y);
printf("%d\n",produto(x,y));
}

fclose(stdin);
fclose(stdout);

  return 0;
}

