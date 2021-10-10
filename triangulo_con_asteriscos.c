#include <stdio.h>
int main(){

	int num, i, j, k, cspace, cont=0;

	scanf("%d",&num);
	cspace=num;
	num*=2;

	for ( i = 0; i <num; i++)
	{

		if (i%2==0)
		{
			for (k=cspace-cont;k>1; k-- )
			{
				printf(" ");
			}
			

		 	for ( j=0; j<=i; j++)
		 	{
		 		printf("*");
		 	}

		 printf("\n"); cont++;
		}
	}

	return 0;
}