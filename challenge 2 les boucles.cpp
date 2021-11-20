#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int L;
	int i,j=0,k;
	printf("entrez le nombre de ligne	  : 	");
	scanf("%d",&L);
	
	for (i=1;i<L;i++){
					printf("  ");
			for(j=1;j=L-i-1;j++){
				printf(" ");	
		
								}
		
		while(k!=2*i-1){
			
			printf("* ");
			k++;	
			
		}
		
		printf("\n");
	}
	
	return 0;

}

