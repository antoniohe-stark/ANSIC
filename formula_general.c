#include<stdio.h>
#include<math.h>
int main(){

	float a,b,c,x1, x2;

    scanf("%f %f %f",&a,&b,&c);
	x1 = ( ((-1)*b)+ sqrt(  (b*b)-(4*a*c)) )/(2*a);
    x2 = ( ((-1)*b)- sqrt(  (b*b)-(4*a*c)) )/(2*a);
	printf("%.2f %.2f", x1,x2);

return 0;

}