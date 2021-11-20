#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int nb;
    int i;
    int p=2;
   
    
    printf("entrez un nombre:   ");
    scanf("%d",&nb);
    
    for(i=2;i<=nb;i++)
       
        {
        
            for(p=2;p<i;i++)
            {
                
                if(i%p==0)
                {
               
                break;
                
                }
                 if(i%p==1)
            printf("les nombres premiere est  %d est \n",i);
            }
           
        }
      return 0; 
