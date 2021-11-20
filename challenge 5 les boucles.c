#include<stdio.h>
#include<stdlib.h>

int main(){
		int a;
	int nombre;
	int inverse=0;
		printf("entrer un nombre:\n");
		scanf("%d",&nombre);
	
	
	do {
		a=nombre%10;
    	inverse=inverse*10+a;
		nombre=nombre/10;
		
	
		
		
	}while(nombre!=0);
	
	
	printf("l'inverce de nombre est %d ",inverse);	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
