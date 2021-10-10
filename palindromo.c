#include<stdio.h>
#include <string.h>
#define TAM 100
int main(){
    char cadena1[TAM], cadena2[TAM];
    int i=0,j=0, k=0,aux=0;
    fgets(cadena1,TAM-1,stdin);

    for(i=0;cadena1[i]!=0;i++){
        if (cadena1[i]!=32 && cadena1[i]!=10)
        {
            cadena1[j]=cadena1[i];
            j++;
        }        
    }
    cadena1[j]=0;
    for(i=strlen(cadena1)-1,j=0;i>=0;i--){
        cadena2[j]=cadena1[i];
        j++;
    }
    

    puts(cadena1);

    puts(cadena2);
    for(i=0;cadena1[i]!=0;i++){
        if(cadena1[i]!=cadena2[1]){
           aux=1;
        }
    }

    if (aux==0)
    {
        printf("es palindromo");
    }else{
        printf("no es palindromo");
    }
    
 
    return 0;
 }