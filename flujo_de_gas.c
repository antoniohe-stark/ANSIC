#include<stdio.h>

int main(){
    float phi, k, pe_po;
    scanf("%f %f", &k, &pe_po);
    phi = sqrt(k/(k-1))* sqrt(pow(pe_po, 2/k) -  pow(pe_po, (k+1)/k))   ; 

    printf("%.4f",phi);
    return 0;

}