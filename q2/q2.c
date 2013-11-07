#include<stdio.h>




int main(void){
	freopen("e2.txt", "r", stdin);
	freopen("s2.txt", "w", stdout);

unsigned int x,y,z;


do{
	scanf("%u%u%u",&x,&y,&z);
if(x==0&&y==0&&z==0) break;
if(x+y+z!=180||x==0||y==0||z==0){
	printf("Triangulo inexistente\n");
}else{
	
	if(x==y&&y==z&&x==z) printf("Equilatero\n"); else
	if(x!=y&&y!=z&&x!=z) printf("Escaleno\n");else
	printf("Isosceles\n");
}


}while(x!=0||y!=0||z!=0);

    fclose(stdin);
    fclose(stdout);
    return 0;
}
