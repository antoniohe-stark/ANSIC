#include <stdio.h>
#define TAM 100
int main(){
    char frase[TAM];
    int i,j;
    printf("ingresa una frase");
    gets(frase);
    printf("frase: %s",frase);
    for(i=0,j=0;frase[i]!='\0';i++){
        if(frase[i]!=32){
            frase[j]=frase[i];
            j++;
        }
    }
    frase[j]=0;
    puts(frase);
    return 0;

}