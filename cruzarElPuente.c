#include<stdio.h>
int main(){
	
	int num,i,band=0,j,aux, sumatoria =0;
	scanf("%d",&num);
	int TimePeople[num];
	for(i=0;i<num;i++){
		scanf("%d",&TimePeople[i]);
	}
	
		while(band==0){	
	
	 	band=1;
		for(j=0;j<i;j++){
		if(TimePeople[j]>TimePeople[j+1] && j<(i-1)){
		 	aux=TimePeople[j+1];
			TimePeople[j+1]=TimePeople[j];
			TimePeople[j]=aux;
			band=0;
		}
	}
	}
	 
	
	sumatoria = (num/2)*(TimePeople[1]); //(n/2)*(a+b)
	if(num%2!=0){
	
	sumatoria+= (num/2)*TimePeople[0];
	}else{
		sumatoria+= ((num-1)/2)*TimePeople[0];
	}
					//(n/2)*A
	sumatoria+= ((num/2)-1)*TimePeople[1];			//((n/2)-1)*b
													//sum 2 - n
	
	for(j=num-1;j>1;j-=2){
		
		if(TimePeople[j]>TimePeople[j-1]){
			sumatoria+=TimePeople[j];	
		}else{
			sumatoria+=TimePeople[j-1];	
		}
		
		
	}	
	
 
	 
	
	printf("%d",sumatoria);
 
	
	return 0;
}
