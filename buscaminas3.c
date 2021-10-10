#include<stdio.h>
#include<stdlib.h>

void adyacente(int x, int y, int **mi, char **mc){

	mc[x][y]=mi[x][y]+48; 
		
	
	if(mi[x-1][y-1]!=0){mc[x-1][y-1]=mi[x-1][y-1]+48;}
	else if(mc[x-1][y-1]=='#' && mc[x-1][y-1]!='&'){ adyacente(x-1,y-1,mi,mc);}
	
	if(mi[x-1][y]!=0){ mc[x-1][y]=mi[x-1][y]+48;}
	else if(mc[x-1][y]=='#' && mc[x-1][y]!='&'){ adyacente(x-1,y, mi, mc);}
	
	if(mi[x-1][y+1]!=0){ mc[x-1][y+1]=mi[x-1][y+1]+48;}
	else if(mc[x-1][y+1]=='#' && mc[x-1][y+1]!='&'){ adyacente(x-1,y+1, mi,mc);}
	

	
	if(mi[x][y-1]!=0){ mc[x][y-1]=mi[x][y-1]+48;}
	else if(mc[x][y-1]=='#' && mc[x][y-1]!='&'){ adyacente(x,y-1,mi,mc);}
	
	if(mi[x][y+1]!=0){ mc[x][y+1]=mi[x][y+1]+48;}
	else if(mc[x][y+1]=='#' && mc[x][y+1]!='&'){ adyacente(x,y+1,mi,mc);}
	

	
	if(mi[x+1][y-1]!=0){ mc[x+1][y-1]=mi[x+1][y-1]+48;}
	else if(mc[x+1][y-1]=='#' && mc[x+1][y-1]!='&'){ adyacente(x+1,y-1,mi,mc);}
	
	if(mi[x+1][y]!=0){ mc[x+1][y]=mi[x+1][y]+48;}
	else if(mc[x+1][y]=='#' && mc[x+1][y]!='&'){ adyacente(x+1,y,mi,mc);}
	
	if(mi[x+1][y+1]!=0){ mc[x+1][y+1]=mi[x+1][y+1]+48;}
	else if(mc[x+1][y+1]=='#' && mc[x+1][y+1]!='&'){ adyacente(x+1,y+1,mi,mc);}
}


void destapar(int x, int y, int **M, char **B){
    if(M[x][y]!=0 && M[x][y]!=-1){
    B[x][y]=M[x][y]+48;
}
    	if(M[x][y]==-1){
    		B[x][y]='*';
			}
		if(M[x][y]==0){
			 adyacente(x,y,M,B);
			}
}


int main(){
    int **m,i,n,x,y,j;
    char **b, c;
    scanf("%d",&n);
    n+=2;
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


//para rellenar matriz incluyendo margenes
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        m[i][j]=5; //valor cualquiera
    }
}



 
for(i=1;i<n-1;i++){
    for(j=1;j<n-1;j++){
        scanf("%d",&m[i][j]);
    }
}




for(i=1;i<n-1;i++){
    for(j=1;j<n-1;j++){
    b[i][j]='#';
    }
    
}

    scanf("%d %d %c", &x, &y, &c);
    x++;
    y++;
    destapar(x,y, m, b);

for(i=1;i<n-1;i++){
    for(j=1;j<n-1;j++){
    printf("%c ",b[i][j]);
    }
    printf("\n");
}




free(m[0]);
free(m);
free(b[0]);
free(b);
	return 0;
}
