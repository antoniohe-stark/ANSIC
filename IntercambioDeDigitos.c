#include<stdio.h>
int main(){
	
	int m,n, cad1[10], cad2[10], cadaux[10],i=0,j=0,aux=0, band=0,contn=0, contm=0;
	scanf("%d %d",&n,&m );
	int n1=n,m1=m;
 //transformar int a cadena (descendente)
	while(n>0){
		cadaux[i]= n%10;
		n/=10;
		i++;
	}	
//voltear cadena (ascendente)
	for(j=0;j<i;j++){
		cad1[j]=cadaux[(i-j-1)];
	}
		
//ordenamiento	
	while(band==0){	
	
	 	band=1;
		for(j=0;j<i;j++){
		if(cad1[j]>cad1[j+1] && j<(i-1)){
			contn++;
			aux=cad1[j+1];
			cad1[j+1]=cad1[j];
			cad1[j]=aux;
			band=0;
		}
	}
	}
/*para m*/
  i=0,j=0,aux=0, band=0;
 //transformar int a cadena (descendente)
	while(m>0){
		cadaux[i]= m%10;
		m/=10;
		i++;
	}	
	
	//voltear cadena (ascendente)
	for(j=0;j<i;j++){
		cad2[j]=cadaux[(i-j-1)];
	}
	
	//ordenamiento	
	while(band==0){	
	
	 	band=1;
		for(j=0;j<i;j++){
		if(cad2[j]>cad2[j+1] && j<(i-1)){
			contm++;
			aux=cad2[j+1];
			cad2[j+1]=cad2[j];
			cad2[j]=aux;
			band=0;
		}
	}
	}
	
	
	
	if(contm<contn){
		printf("%d-%d\n%d-%d",m1,contm,n1,contn);
		
		
	} else{
		printf("%d-%d\n%d-%d",n1,contn,m1,contm);
		
	}

	
	return 0;
}
