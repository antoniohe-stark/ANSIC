#include<stdio.h>>
int main(){
	int  a;
	scanf("%d",&a);
	
	if(a%4==0){
		if(a%100==0){
			if(a%400==0){
				printf("%d es bisiesto",a);
			} else{
				printf("%d no es bisiesto",a);
			}
		}else{
				printf("%d es bisiesto",a);
		} 
		
	}else{
		printf("%d no es bisiesto",a);
	}
	
	return 0;
}
