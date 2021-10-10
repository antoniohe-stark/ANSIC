#include<stdio.h>
#include<stdlib.h>

void adyacente(int **M, int x, int y){
    if(M[x][y]!=-1)
    {
 		M[x][y]+=1;
	}
}

int main(){
    int **matriz, **MDasteriscos;
    int lado,i,j, nminas, x,y;
    scanf("%d",&lado);
    lado+=2;

MDasteriscos=(int**)malloc(sizeof(int*)*lado);
MDasteriscos[0]=(int*)malloc(sizeof(int)*lado*lado);
for(i=1;i<lado;i++){
	MDasteriscos[i]=MDasteriscos[0]+i*lado;
}
    
matriz=(int**)malloc(sizeof(int*)*lado);
matriz[0]=(int*)malloc(sizeof(int)*lado*lado);
for(i=1;i<lado;i++){
	matriz[i]=matriz[0]+i*lado;
}
    
    for ( i=1; i<lado-1; i++)
    {
        for (j=1; j<lado-1; j++)
        {
            matriz[i][j]=0;
        }
    }

     scanf("%d",&nminas); 
     
     for(i=1;i<=nminas;i++){
        scanf("%d %d",&x,&y);
        x++;
        y++;
        
		matriz[x][y]=-1;
   		adyacente(matriz,x,y+1);
  		adyacente(matriz,x,y-1);
  		
  		adyacente(matriz,x-1,y-1);
  		adyacente(matriz,x-1,y);
  		adyacente(matriz,x-1,y+1);
 
  	 	adyacente(matriz,x+1,y-1);
  	 	adyacente(matriz,x+1,y);
  	 	adyacente(matriz,x+1,y+1);
 
    }
 
    
	
	
	
	 for (i=1; i<lado-1; i++)
    {
        for (j=1; j<lado-1; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
free(matriz[0]);
free(matriz);

free(MDasteriscos[0]);
free(MDasteriscos);

    return 0;
}
