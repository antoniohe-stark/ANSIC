#include<stdio.h>
int main(){
    int num1, num2, sum=0;
    scanf("%d %d",&num1, &num2);
 

    while(num1>0 && num2>0){ 
	   
        if(num1%10 + num2%10 > 9){
            sum++;
        }
        
        num1/=10;
		num2/=10;
    }
    printf("%d",sum);
    return 0;
}
