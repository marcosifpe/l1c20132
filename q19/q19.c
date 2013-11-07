#include<stdio.h>
#include<math.h>

int insensi(int a, int b, int c, int d){
	a=abs(a-c);
	b=abs(b-d);
return(a*a+b*b);
}

int main(void){
	freopen("e19.txt", "r", stdin);
	freopen("s19.txt", "w", stdout);
int i,j,k,n,soma=0,x1,y1,x2,y2;
scanf("%d",&n);
for(k=0;k<n;k++){
scanf("%d",&j);
for(i=0;i<j;i++){
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
soma+=insensi(x1,y1,x2,y2);
}
printf("%d\n",soma);
soma=0;
}
    fclose(stdin);
    fclose(stdout);
    return 0;

}
