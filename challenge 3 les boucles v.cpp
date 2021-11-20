#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int nb;
    int i;
    printf("entrez un nombre:   ");
    scanf("%d",&nb);
    
    for(i=2;i<nb;i++){
    
    if(nb%i==0){
      
        
        printf("le nombre est non premiere"); 
        return 0 ;
    }
      
}
printf("le nombre est  premiere");

  return 0;  
   

}
