#include<stdio.h>
#include<stdlib.h>
int main(){
	
int i,nb;
int s=0;	


	for(i=0;i<10;i++){
		printf("entrez un nombre    :   	");
    	scanf("%d",&nb);
	if(nb<0)
	continue;
	s=s+nb;	
		
		
		
	}
	
	printf("la somme et %d",s);
	
	
	
	return 0;
	
	
	
	
}
