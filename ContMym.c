#include<stdio.h>
int main(){

    char cad[101];
    int i=0,cont=0;
    fgets(cad,100,stdin);

    for(i=0;cad[i]!=0;i++){
        if(cad[i]=='a' || cad[i]=='e'||cad[i]=='i'||cad[i]=='o'||cad[i]=='u'||cad[i]=='A'||cad[i]=='E'||cad[i]=='I'||cad[i]=='O'||cad[i]=='U'){
            cont++;
        } 
    }

    printf("%d",cont );   

    return 0;
}
