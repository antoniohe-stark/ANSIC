#include<stdio.h>
#include<stdlib.h>
int main(){
	
    int i,j=0,k=1;
    char cad[251], subcad[251];
    gets(cad);

    for (i=0;cad[i]!='\0';i++)
    {
         if(cad[i+1]==0){
            subcad[j]=cad[i];
           j++;
        }
       if(cad[i]!='.' && cad[i]!='-'  && cad[i+1]!=0){
           subcad[j]=cad[i];
           j++;
       }else{ 
           subcad[j]='\0';
		   j=0;
          //  puts(subcad);
          printf("%c",atol(subcad)/k);
           if(cad[i]=='-'){
               printf(" ");
           }
           k++;
       }
    }
    return 0;
}
