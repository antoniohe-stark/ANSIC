#include<stdio.h>
#include<math.h>
#define M_PI acos(-1.0)
int main(){

    float radio ;
    radio=0;
    scanf("%f",&radio);


    printf("%.2f %.2f", (M_PI*pow(radio,2)), (2*M_PI*radio)  );
 

    return 0;
}