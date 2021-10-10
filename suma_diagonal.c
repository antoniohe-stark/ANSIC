#include <stdio.h>
int main(){
    
    int tam,i,j,sum=0,aux;
    scanf("%d",&tam);
    int cad[tam][tam];

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("matriz[%d][%d]: ",i,j);
            scanf("%d",&cad[i][j]);
        }
    }

        aux=(tam-1)%2;
   if(aux!=0){
       sum-=cad[aux][aux];
   }

    for(i=0,j=0;i<tam;i++){
         sum+=cad[i][i];
                printf("%d",cad[i][i]);
        
           printf(" + ");
       
    }
 
   // sum=0;
    for(i=tam-1,j=0;i>=0;i--,j++){
       sum+=cad[i][j];
       printf("%d",cad[i][j]);
       if(i>0){
           printf(" + ");

   }



       } 



     }
    printf(" \n ");




   printf("sumatoria 2: %d",sum);
    return 0;
}