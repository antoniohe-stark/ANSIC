#include <stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d %d",&n,&m);
    int matrix[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(j=0;j<m;j++){               //filas
        for(i=n-1;i>=0;i-- ){          //columnas
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
