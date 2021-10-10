#include<stdio.h>
int main(){
	int num;
    
	scanf("%d",&num);

   
	printf("%d",sigma(num));
	return 0;
}


int sigma(int num){

     int i,j,sum=0;
	int matrix[num][num];	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
		for(i=0;i<num;i++){
			for(j=0;j<num;j++){
			
				if(i==0 || i==num-1){
					sum+=matrix[i][j];
				}else if(j==0 || j==num-1){
					sum+=matrix[i][j];
				}	
		}
	}	

    return sum;

}
