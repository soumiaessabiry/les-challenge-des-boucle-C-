#include<stdio.h>
#include<math.h>
int main (){
//	int i;
	int base;//X
	int expo,P;// n pow(X,n)
	
	printf("entrez la base : ");
	scanf("%d",&base);
	printf("entrez le expo : ");
	scanf("%d",&expo);
	 
	 while(base<0 || expo<=0){
	 	if(base<0){
	 	printf("entrez une base superieur a 0");
	scanf("%d",&base);
	 }else if(expo<0)
	 printf("entrez une expo superieur ou egale 0");
	scanf("%d",&expo);
	  
	 }
	  P=pow(base,expo);
		printf("la puissance d'un nombre est %d ",P);
	 	
	
	return 0;
	

    
}
