#include<stdio.h>
int main(){
    int x, y;
    scanf("%d", &x);


if(x>0){
	
	
    if(x>=1000){
        y=x/1000;
        x= x - (y*1000);
        printf("%d billete(s) de 1000\n", y);
 
    }
    if(x>500 && x<1000){
    	y= x/500;
    	x = x - (y*500);
        printf("%d billete(s) de 500\n", y);
    }
    if(x<500 && x>=100){
    	y = x/100;
    	x = x -(y*100);
        printf("%d billete(s) de 100\n", y);
    }
    if(x<100 && x>=50){
    	y = x /50;
    	x = x - (y*50);
        printf("%d billete(s) de 50\n", y);
    }
    if(x<50 && x>=20){
    	y = x / 20;
    	x= x - (y * 20);
        printf("%d billete(s) de 20\n", y);
    }
    if(x<20 && x>=10){
    	y=x/10;
    	x = x-(y*10);
        printf("%d moneda(s) de 10\n", y);
    }
    if(x<10 && x>=5){
    	y = x/5;
    	x=x-(y*5);
        printf("%d moneda(s) de 5\n", y);
    }
    if(x<5 && x>=2){
    	y = x/2;
    	x = x - (y*2);
        printf("%d moneda(s) de 2\n", y);
    }
    if(x<2 && x>=1){
    	y=x;
 
        printf("%d moneda(s) de 1\n", y);
    }

	
}

    return 0;
}