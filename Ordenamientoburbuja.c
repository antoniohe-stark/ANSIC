#include<stdio.h>
#define TAM 100
int main(){
	int  A[TAM],n,contador,aux,contador2;

	do{
	printf("ingresa la cantidad de numeros a capturar: ");
	scanf("%d",&n);
	}while(n<1 || n>100);

	for(contador=0;contador<n;contador++){
		printf("ingresa un entero ");
		scanf("%d",&A[contador]);
	}

	for(contador2=0;contador2<n;contador2++){
		for(contador=1;contador<n-contador2;contador++){
		if(A[contador-1]>A[contador]){
			aux=A[contador-1];
			A[contador-1]=A[contador];
			A[contador]=aux;
		} 
	}
	}
	for(contador=0;contador<n;contador++){
	printf("A[%d]=%d\n",contador,A[contador]);
	}

return 0;
}
