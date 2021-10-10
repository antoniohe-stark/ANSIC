#include <stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    char A[num][num];
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            gets(A[i]);
        }
    }


    return 0;
}
