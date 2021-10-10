#include<stdio.h>
int main(){
    int a,b,c,d, e, f, g, h, i,j;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    printf("(%d)x^8+(%d)x^7+(%d)x^6+(%d)x^5+(%d)x^4+(%d)x^3+(%d)x^2+(%d)x+(%d)",(a*f),(a*b*f*g*2),(a*b*c*f*g*h*3),(a*b*c*d*f*g*h*i*4),(a*b*c*d*e*f*g*h*i*j*5),(b*c*d*e*g*h*i*j*4),(c*d*e*h*i*j*3),(d*e*i*j*2),(e*j));
    return 0;
}