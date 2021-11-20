#include<stdio.h>
#include<stdlib.h>
int main(){
	int nb;
	int s=0;
	int max=0;
	
	printf("entrez un nombre\n");
	
	while(nb!=0){
		
		scanf("%d",&nb);
		while((nb<0) || (nb>=100)){
		    
		    printf(" veulliez entrez un nombre entre 1 et 100");
		    scanf("%d",&nb);
		}
	
	
		
		s=s+nb;
		
		if(nb>max){
		max=nb;
		}
	}
	
	printf("la somme est %d\n",s);
	printf("le max est %d\n",max);
	
return 0;	
	
}
