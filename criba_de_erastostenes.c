#include<stdio.h>
#include<math.h>
int main(){
    int cad1[1001], n, i,j,k;
    
	scanf("%d",&n);
    
	for(i=0;i<n;i++){
        cad1[i]=i+1;
       
    }
    cad1[i]=0;
    
    for(j=0;j<n-1; j++){
        
    	if((j*j)<n && j>1){
    	 
			for(k=0;k<n-1;k++){
				if(cad1[k]%j==0 && cad1[k]!=j){
					cad1[k]=0;
				}
			}

        }
         
	}
	
	for(i=1;i<n-1;i++){
		if(cad1[i]!=0){
			printf("%d ",cad1[i]);	
		}
	}

     
    
	return 0;
}
