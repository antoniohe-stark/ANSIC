#include<stdio.h>
int main(){
	   int num,i,j,sum=0;
	scanf("%d",&num);
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
	
	
	printf("%d",sum);
	return 0;
}