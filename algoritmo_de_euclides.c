#include <stdio.h>
int main(){

    int m, n,r;
    scanf("%d %d",&m,&n);

    do{
        r=m%n;
        if(r==0){
            printf("%d",n);
            break;
    } 
        m=n;
        n=r;
    }while(r!=0);


    return 0;
}