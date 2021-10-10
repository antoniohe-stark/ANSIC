#include<stdio.h>
#include<string.h>
int main(){
    int aux, band2=0, cont=0, i=0,j=0, band=0, lm, ln;
    char m[1001], n[11];

    gets(n);
    gets(m);

	ln=strlen(n); 	
	lm=strlen(m);

    for(i=0;i<=lm;i++){
        
        j=0;
        band=0;
        if(m[i]==n[j]){
        	aux=i;
            for(j=0; (i<=lm && j<ln) ;i++,j++){
          
                if(m[i]!=n[j]){
                    band=1;
                }
            }
             if(band==0){
             	    printf("%d\n",aux);
             	    band2=1;
            }         
        }      
    }
    if(band2==0){
    	printf("-1");
	}
    return 0;
}
