#include<stdio.h>
#include<math.h>
int main(){

    float x, fx;
    scanf("%f",&x);


    if(x<3){
        fx= (pow(x,2))+(9*x)-2;
    }else

    if(x>=3 && x<100){
        fx=(pow(x,3))*(x-1)/(x-2)+2*x;
    }else

    if(x>=100 && x<1000){
        fx=3*(pow(x,(1.5))) - sqrt(( (9*x)/2)-5 );
    }else

    if(x>=1000){
        fx= pow(x-1000,2)*((x-1)/(x-2));
    }

    printf("%.4f",fx);

    return 0;
}