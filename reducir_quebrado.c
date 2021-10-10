#include <stdio.h>
int main(){

    int a, b, cont;
    scanf("%d %d",&a,&b);
    if(a>b){
    	cont=a;
	}else{
		cont=b;
	}
	
	if(a<0 && b<0){
		a*=(-1);
		b*=(-1);
	}
    
	for( cont; cont>0; cont--){

   	 if(a%2==0 && b%2==0){
        	a/=2;
        	b/=2;
    	}else if(a%3==0 && b%3==0){
        	a/=3;
        	b/=3;
    	}else if(a%5==0 && b%5==0){
        	a/=5;
        	b/=5;
    	}else if(a%7==0 && b%7==0){
        	a/=7;
        	b/=7;
    	}
	}
	
	if(a/b==1){
		printf("1/1");
	}

    printf("%d/%d",a,b);

    return 0;
}