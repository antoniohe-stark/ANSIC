#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

struct fecha{
	int dia;
	int mes;
	int anio;
};

struct jugador{
	char nombre[50];
	char alias[10];
	int puntos;
	struct fecha diaNacimiento;
};

void adyacenteUNO(int **M, int x, int y){
    if(M[x][y]!=-1)
    {
 		M[x][y]+=1;
	}
}

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

void destapar(int x, int y , int op, int **M, char **B){
	
	switch (op)
	{
	
	case 'd':
	if(M[x][y]!=0 && M[x][y]!=-1){
    B[x][y]=M[x][y]+48;
		}
    	if(M[x][y]==-1){
    		B[x][y]='*';
			}
		if(M[x][y]==0){
			 adyacente(x,y,M,B);
			}
		
		break;
		
	case 'b':
		break;
		
	case'q':
		break;
		
	
		
		default:
			break;
		
		}
}


int main(){
	char caux, aux[25];
	FILE *fp, *fp2;;
	
	
	system("color 80");
	int Lost=0, win=0,iaux;
	
	
    int **m,i,n,x,y,j, nrx, nry, primeravez=0;
    char **b, c, op;
    struct jugador gamer;
    
    int hora = time(NULL); 
    srand(hora);  
    
    printf("\t\tBIENVENIDO AL JUEGO DE BUSCAMINAS");
     printf("\n\tIngrese los datos del jugador");
    printf("\nNombre completo:");
    gets(gamer.nombre);
    printf("Alias:");
    gets(gamer.alias);
    printf("Feha de nacimiento:");
    scanf("%d %d %d", &gamer.diaNacimiento.dia, &gamer.diaNacimiento.mes, &gamer.diaNacimiento.anio); 
    printf("Indique la cantidad de columnas y renglones del tablero  <3 hasta 10>:");
    scanf("%d",&n);
    n+=2;//compenzando margenes
 
 
    m=(int**)malloc(sizeof(int*)*n);//reservando memoria para matriz int
    m[0]=(int*)malloc(sizeof(int)*n*n);
for(i=1;i<n;i++){
    m[i]=m[0]+i*n;
}
    b=(char**)malloc(sizeof(char*)*n);//reservando memoria para matriz char
    b[0]=(char*)malloc(sizeof(char)*n*n);
for(i=1;i<n;i++){
    b[i]=b[0]+i*n;
}


//para llenar matriz incluyendo margenes
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        m[i][j]=5; //valor cualquiera
    }
}
 
for(i=1;i<n-1;i++){ //rellenar matriz int con 0
    for(j=1;j<n-1;j++){
        m[i][j]=0;
    }
}

for(i=1;i<n-1;i++){ //llenando matriz char con #
    for(j=1;j<n-1;j++){
    b[i][j]='#';
    }
    
}
 
for(i=1;i<n-1;i++){
    for(j=1;j<n-1;j++){
    printf("%c ",b[i][j]);
    }
    printf("\n");
}

do{


fflush(stdin);
printf("<d> destapar <b>bandera <q> quitar bandera <g>guardar <r>restaurar <s>salir");
printf("\n\t Elija una opci%cn:\n",162);
scanf("%c",&op);
switch(op){
 
		case 'd':
			do{
			printf("ingresa el n%cmero de rengl%cn y columna:", 163, 162);
			scanf("%d %d",&x, &y);
			x++;
    		y++;
			}while(x<1 || x>(n-2) || y<1 || y>(n-2) || b[x][y]=='&'); 
			 
		 if(primeravez==0){
		 	
		 	
		 	int cont=1;
		 	
    				while(cont<n-1){
    				nrx =rand()%(n-2);
    				nrx++;
    				nry =rand()%(n-2);
    				nry++;
 
    	 	       if((x!=nrx || y!=nry)){
    					if(m[nrx][nry]!=-1){
					
							m[nrx][nry]=-1;
    						cont++;
    						
    				    adyacenteUNO(m,nrx,nry+1);
  						adyacenteUNO(m,nrx,nry-1);
  		
  						adyacenteUNO(m,nrx-1,nry-1);
  						adyacenteUNO(m,nrx-1,nry);
  						adyacenteUNO(m,nrx-1,nry+1);
 
  	 					adyacenteUNO(m,nrx+1,nry-1);
  	 					adyacenteUNO(m,nrx+1,nry);
  	 					adyacenteUNO(m,nrx+1,nry+1);
					
					  	}   					
					}
					
					   
 
					}
					
					
					
					
			 } 
		primeravez++;
		 destapar(x,y ,op,m, b);
		break;
		
		case 'b':
		
				do{
			printf("ingresa el n%cmero de rengl%cn y columna:", 163, 162);
			scanf("%d %d",&x, &y);
			x++;
    		y++;
			}while(x<1 || x>(n-2) || y<1 || y>(n-2));
			
			
			if(b[x][y]=='#'){
			b[x][y]='&';
		}
			
		break;
		
		case 'q':
		
				do{
			printf("ingresa el n%cmero de rengl%cn y columna:", 163, 162);
			scanf("%d %d",&x, &y);
			x++;
    		y++;
			}while(x<1 || x>(n-2) || y<1 || y>(n-2));
			 
			 if(b[x][y]=='&')
			 {
				b[x][y]='#';
		     }
			
		break;
		
		case 'g':
			
			
			
			strcpy(aux,gamer.alias);
			strcat(aux,".txt"); 
				fp=fopen(aux,"w+"); 
				
				
			for(i=1;i<n-1;i++){ //imprime matriz  
    		for(j=1;j<n-1;j++){
   				 fprintf(fp,"%d ",m[i][j]);
    		}
               fprintf(fp,"\n");    
			}
			fclose(fp);
			
			
 
			strcpy(aux,gamer.alias);
			strcat(aux,".game");
 			 
				fp=fopen(aux,"w+"); 
				
				
			for(i=1;i<n-1;i++){ //imprme matriz en txt
    		for(j=1;j<n-1;j++){
   				 fprintf(fp,"%c",b[i][j]); 
    		}
              //fprintf(fp,"\n");    
			}
			fclose(fp);
			
 
			printf("PARTIDA GUARDADA CORRECTAMENTE");
			system("pause");
			
		break;
		
		case 'r':
			
			strcpy(aux,gamer.alias);
			strcat(aux,".game");
 			 
				fp=fopen(aux,"r"); 
	 
			if(fp!=NULL){
				
				
 					for(i=1;i<n-1;i++){ //llena matriz  BBBBBB
    			       for(j=1;j<n-1;j++)
					   {
					   		b[i][j] = fgetc(fp);
					   } 
					   }	
					fclose(fp);
 	
			strcpy(aux,gamer.alias);
			strcat(aux,".txt");
 			 fp=fopen(aux,"r"); 
 			 
 			 for(i=1;i<n-1;i++){ //llena matriz  de int
    			       for(j=1;j<n-1;j++)
					   {
					   	fscanf(fp,"%d",&iaux);
					   	m[i][j]=iaux;
					   } 
					   }	
					fclose(fp);
				primeravez=1;
			}
			else{	
				printf("no se puede restaurar el juego :(\n");
			}
			
		break;
		
		case 's':
			return 0;
		break;
		
		default:
		break;	
}
 
 for(i=1;i<n-1;i++){ //verificar que no haya pisado una mina
    for(j=1;j<n-1;j++){
   		if(b[i][j]=='*'){
   			Lost=1;
   			
   			   			int k, l;
   			for(k=1;k<n-1;k++)
			   {  
   			
			    for(l=1;l<n-1;l++)
					{
						if(m[k][l]==-1)
						{
							b[k][l]='*';	
						}
					}	
			}
			
		   }
    }
   
}

system("cls");
 
printf("\n");
for(i=1;i<n-1;i++){ //imprime matriz char con #  
    for(j=1;j<n-1;j++){
    printf("%c ",b[i][j]);
    }
      printf("\n");    
}

 
win=0;
for(i=1;i<n-1;i++){ //verificar que solo existan minas
    for(j=1;j<n-1;j++){
   		if(b[i][j]=='#' || b[i][j]=='&'){
  				win++;
		   }
    }
   
}



}while(Lost==0 && win!=(n-2));


if(Lost!=0){
	printf("JUEGO TERMINADO!!! \a");
}else if(win==(n-2)){
	printf("LO LOGRASTE, FELICIDADES!!! \a");
}



free(m[0]);
free(m);
free(b[0]);
free(b);
	return 0;
}
