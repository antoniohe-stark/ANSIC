#include<stdio.h>
int main(){
    int arreglo[101];
    
    int i=0,j=0, ent, num;
    
    for(i=0;i<=100;i++){
        arreglo[i]=0;
    }
    scanf("%d",&ent);
    
    for(i=0;i<ent;i++){
        scanf("%d",&num);
        arreglo[num]++;
    }

    for(i=0;i<=100;i++){
        if(arreglo[i]!=0){
            
            
            
            for(j=0;j<arreglo[i];j++){
                printf("%d ",i);

            }
            
            
            
        }
    }



    return 0;
}
