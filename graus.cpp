#include<stdio.h>
main(){
 float grausC, grausF;
    printf("digite os graus Celsius: ");
    scanf("%f", &grausC);
    grausF = grausC*1.8 + 32;
    printf("%.1f", grausF);
}