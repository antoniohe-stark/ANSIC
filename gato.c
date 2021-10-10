#include<stdio.h>
#include<stdlib.h>

int valdar(int **Matriz, int num, int lado){

    int i,j,k, cent=0;

 
    for (i=0;i<lado;i++)
    {
    	cent=0;
        for(j=0;j<lado;j++)
        {
            if(Matriz[i][j]!=num){ cent=1;}
        }
        if(cent==0){ return 1;}
    }
    
    



    for (i=0;i<lado;i++)
    {
    	cent=0;
        for(j=0;j<lado;j++)
        {
 
            if(Matriz[j][i]!=num){ cent=1;}
        }
  
        if(cent==0){ return 1;}
    }
 
    
	cent=0;
     for ( i =0;i<lado;i++)
    {
            if(Matriz[i][i]!=num){ cent=1;} 
    }
    if(cent==0){ return 1;}
 

	cent=0;
     for ( i = 0;i< lado;i++)
    {
            if(Matriz[i][(lado-1)-i]!=num){ cent=1;} 
       
    }
    if(cent==0){ return 1;}




    if(cent==1){
    	return 0;
	}
}


int main(){
int n, lado, i,j,k;
int **matriz;

scanf("%d",&n);
scanf("%d",&lado);

matriz=(int**)malloc(sizeof(int*)*lado);
matriz[0]=(int*)malloc(sizeof(int)*lado*lado);
for(i=1;i<lado;i++){
	matriz[i]=matriz[0]+i*lado;
}

for ( i = 0; i < lado; i++)
{
    for(j=0;j<lado;j++){
        scanf("%d",&k);
        matriz[i][j]=k;
    }
} 

i=valdar(matriz, n, lado);
printf("%d",i);

    return 0;
}
