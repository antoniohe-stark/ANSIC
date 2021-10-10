#include<stdio.h>
int main(){
    int tam, num,i,j, band=0;
    scanf("%d",&tam);
    int A[tam];

    for(i=0;i<tam;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&num);

    for(i=0;i<tam;i++){
        if(A[i]==num){
           band=1;
           break;
            }
    }

    if (band==1)
    {
        printf("Si");
    }else{
        printf("No");
    }
    
    return 0;
}
