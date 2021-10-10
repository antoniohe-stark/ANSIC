#include<stdio.h>
float mediana(int);

int main(){
	int num;
	
	scanf("%d",&num);
	mediana(num);
	return 0;
}

float mediana(int num){
	int band=0,j,i;
	float aux2,aux=0;
	
	float A[num];
	
	for(i=0;i<num;i++){
		scanf("%f",&A[i]);
	}
	
	while(band==0){	
	
	 	band=1;
		for(j=0;j<i;j++){
		if(A[j]>A[j+1] && j<(i-1)){
		 	aux=A[j+1];
			A[j+1]=A[j];
			A[j]=aux;
			band=0;
		}
	}
	}
	
	if(num%2==0){ //par
	
 
	aux2=A[num/2]+A[(num/2)-1];
	aux2/=2;
	printf("%.1f",aux2);
		
	}else if(num%2!=0){ //impar
		printf("%.1f",A[num/2]);
	}
	
}
