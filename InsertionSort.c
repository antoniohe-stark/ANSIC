#include<stdio.h>
#define TAM 100
int main(){
	int  A[TAM],n,contador,aux,contador2,mayor;

	do{
	printf("ingresa la cantidad de numeros a capturar: ");
	scanf("%d",&n);
	}while(n<1 || n>100);

	for(contador=0;contador<n;contador++){
		printf("ingresa un entero ");
		scanf("%d",&A[contador]);
	}

    for(contador=0;contador2<n-1;contador2++){
        mayor=0;
        for (contador=1; contador < n-contador2; contador++)
        {
             mayor=contador;
        }
         aux=A[mayor];
    A[mayor]=A[n-1-contador2];
    A[n-1-contador2]=aux;

    }

    //insertionSort
 for(contador2=1;contador2<n;contador2++)
    aux=A[contador2]
    for(contador=contador2-1;contador>=0 && A[contador]>aux;contador--){
        A[contador+1]=A[contador]
    }
    A[contador+1]=aux;

    for(contador=0;contador<n;contador++){
        printf("A[%d]=%d\n",contador,A[contador]);

    }
   
 
return 0;
}
