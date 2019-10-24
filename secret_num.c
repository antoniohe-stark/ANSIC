#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int num, aleatorio, cont=0;
	srand(time(NULL));
	aleatorio=rand()%100+1;

	printf("adivina el numero (%d) secreto entre 1 y 100\n",aleatorio);
 
	
	do{
		scanf("%d",&num);
		if(num>aleatorio){
			printf("el número es menor\n");
		}else if(num<aleatorio){
			printf("el numero es mayor\n");
		}
		cont++;
		
	}while(num!=aleatorio);

	printf("adivinaste en %d intentos\n", cont);

	return 0;
}