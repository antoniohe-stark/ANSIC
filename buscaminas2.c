#include <stdio.h>
#include<stdlib.h>
void move(int x,int y,char c, int **m, char **b){
    switch (c)
    {
    case 'd':
       if (m[x][y]==-1)
       {
            b[x][y]='*';
       }else{
            b[x][y]=m[x][y]+48;
       }
	break;
       case 'b':
       b[x][y]='&';
       
        break;
    
    default:
        break;
    }
}
int main(){
    int **m,i,n;
    char **b;
    scanf("%d",&n);
    m=(int**)malloc(sizeof(int*)*n);
    m[0]=(int*)malloc(sizeof(int)*n*n);
for(i=1;i<n;i++){
    m[i]=m[0]+i*n;
}
    b=(char**)malloc(sizeof(char*)*n);
    b[0]=(char*)malloc(sizeof(char)*n*n);
for(i=1;i<n;i++){
    b[i]=b[0]+i*n;
}
int j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&m[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    b[i][j]='#';
    }
}

int nt;
scanf("%d", &nt);
int x, y;
char c;
for ( i = 1; i <=nt; i++)
{
    x=y=0;
    scanf("%d %d %c", &x, &y, &c);
    move(x,y,c,m,b);

}

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("%c ", b[i][j]);
    }
    printf("\n");
}


    return 0;
}
