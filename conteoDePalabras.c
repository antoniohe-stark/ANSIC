#include<stdio.h> 
#include<string.h>
int main(){
    char cad[101];
    int i=0, cp=0;
    gets(cad);

    for(;i<=strlen(cad);i++){
        if(cad[i]!=32 && cad[i]!=0  ){
            cp++; 
            for(; cad[i]!=32 && i<=strlen(cad);i++);
        }
    }
    printf("%d",cp);

    return 0;
}
