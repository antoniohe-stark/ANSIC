#include <stdio.h>
int main(){
	
	int i, j, k,l,num;
	
	scanf("%d",&num);
 	
	if(num>=3 && num<= 40)
	{ 
	 
	 l=num;
		 
	for(i=1;i<=num;i++,l-- )
	{
	 
		for(j=0;j<=i;j++)
		{
			if(j>1)
			{
				printf(" ");	
			}
		}
		printf("*");	
	 		
	 	
				for(k=1;k<l;k++){
				printf(" ");
			}
			
			for(k=1;k<l-1;k++){
				printf(" ");
			}
			
		if(i<num)
		{
			printf("*");
		}
		
		printf("\n");
		
	 
		}
	}
	
	
	return 0;
}