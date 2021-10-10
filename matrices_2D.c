#include <stdio.h>
#define RENGLONES 3
#define COLUMNAS 3

int main(){
    int c1, c2;
    int matriz1[RENGLONES][COLUMNAS];
    int matriz2[RENGLONES][COLUMNAS];
    int matrizr[RENGLONES][COLUMNAS];


for(c1=0;c1<RENGLONES;c1++){
       
    for(c2=0;c2<COLUMNAS;c2++){
        printf("ingresa matriz1[%d][%d]",c1,c2,matriz1[c1][c2]);
        scanf("%d",&matriz1[c1][c2]);
    }
 
}

printf("\n");
for(c1=0;c1<RENGLONES;c1++){
       
    for(c2=0;c2<COLUMNAS;c2++){
        printf("ingresa matriz2[%d][%d]",c1,c2,matriz2[c1][c2]);
        scanf("%d",&matriz2[c1][c2]);
    }
 }


for(c1=0;c1<RENGLONES;c1++){
  
    for(c2=0;c2<COLUMNAS;c2++){
        matrizr[c1][c2]=matriz1[c1][c2]+matriz2[c1][c2];
    }
}

 printf( "SUMA\n");

for(c1=0;c1<RENGLONES;c1++){
       printf("\n");
    for(c2=0;c2<COLUMNAS;c2++){
        printf(" matrizR[%d][%d]=%d " ,c1,c2,matrizr[c1][c2]);
    }
     printf("\n");
}

for(c1=0;c1<RENGLONES;c1++){
  
    for(c2=0;c2<COLUMNAS;c2++){
        matrizr[c1][c2]=matriz1[c1][c2]-matriz2[c1][c2];
    }
}

 printf( "RESTA\n");

for(c1=0;c1<RENGLONES;c1++){
       printf("\n");
    for(c2=0;c2<COLUMNAS;c2++){
        printf(" matrizR[%d][%d]=%d " ,c1,c2,matrizr[c1][c2]);
    }
     printf("\n");
}

 printf(" Multiplicacion\n");

if(RENGLONES!=COLUMNAS){
    printf("no se puede realizar la mutiplicacion");
}else{
    for(i=0; i< RENGLONES;i++){
        for(j=0;j<COLUMNAS;j++){
            for(k=acumulador=0;k<COLUMNAS;k++){
                acumulador+=matriz1[i][k]*matriz2[k][j];
            }
            matrizr[i][j]=acumulador;
        }
    }
}


for(c1=0;c1<RENGLONES;c1++){
       printf("\n");
    for(c2=0;c2<COLUMNAS;c2++){
        printf(" matrizR[%d][%d]=%d " ,c1,c2,matrizr[c1][c2]);
    }
     printf("\n");
}

    return 0;
}


//getchar