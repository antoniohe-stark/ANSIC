#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i, A[num], sum=0;

    for(i=0;i<num;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
    }

    printf("%d",sum);


    return 0;
}