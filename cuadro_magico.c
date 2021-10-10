#include<stdio.h>
int main(){
    int num, i,j, sum2=0, sum=0;

    scanf("%d",&num);
    int cuadro[num][num];

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            scanf("%d",&cuadro[i][j]);
        }
    }


    for(i=0;i<num;i++){
        sum+=cuadro[i][i];
        sum2+=cuadro[num-1-i][i];
    }

    if(sum!=sum2){
        printf("NO");
        return 0;
    }


    for(i=0;i<num;i++){
        sum2=0;
        for(j=0;j<num;j++){
             sum2+=cuadro[i][j];
        }

            if (sum2!=sum)
            {
                printf("NO");
                return 0;
            }
        
    }


        for(i=0;i<num;i++){
        sum2=0;
        for(j=0;j<num;j++){
             sum2+=cuadro[j][i];
        }

            if (sum2!=sum)
            {
                printf("NO");
                return 0;
            }
        
    }


    printf("SI");
 


    return 0;
}
