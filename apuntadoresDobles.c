#include<stdio.h>
#include<stdlib.h>
int main(){
    int ren=5, col=6, cont;
    int **matriz;
    matriz=(int **)malloc(sizeof(int *)* ren);
    matriz[0]=(int *)malloc(sizeof(int)+ren+col);

    for (cont =1; cont < ren; cont++)
    {
        matriz[cont]=matriz[0]+cont*col;
    }
    matriz[0][2]=69;
    free(matriz[0]);
    free(matriz);
    

    return 0;
}