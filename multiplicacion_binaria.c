#include <stdio.h>
#include <math.h>

int aDecimal(){
 
    int i,j,k=0;
    char cad[101];
    gets(cad);
    for(i=0;cad[i]!='\0';i++);
    i--; 

    for(j=i;j>=0;j--){
         if( cad[i-j]-48 ==1){
             k+=pow(2,j);
         }
    }
    
    return k;
}


void aBinario(int num){
	int i,j=0;
	char cad[101];
	for(i=0;num>0; num/=2,j++){
		if(num%2!=0){
			cad[j]='1';
		}else{
			cad[j]='0';
		}
	}
	j--;
	
	for(;j>=0;j--){
		printf("%c",cad[j]);
	}	
		
}

int main(){
	int num1, num2;
        
    num1=aDecimal();
    num2=aDecimal();
    aBinario(num1*num2);

    return 0;
}
