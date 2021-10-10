#include<stdio.h>


void delSpace(char matrix[]){

int i,j,k, band=0;
	for(i=0;matrix[i]!=0;i++);
	for(j=0;matrix[j]==32;j++);	
	for(k=i-1;matrix[k]==32;k--);
		
		
		for(i=j;i<=k;i++){
		
		if(matrix[i]!=32){
			printf("%c",matrix[i]);
			band=1;	
		}
		else 
		if(band==1 && j+1<k ){
			printf(" ");
			band=0;
		}	
	}
}

int main(){
	
	char matrix[101];
	gets(matrix);
	delSpace(matrix);
	return 0;
}

