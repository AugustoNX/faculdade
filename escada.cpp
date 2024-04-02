#include<stdio.h> 

main(){ 

int degrau, altura, total;

printf("qual a altura que deseja alcançar? "); 

scanf("%i", &altura); 

printf("qual o tamanho dos degraus? "); 

scanf("%i", &degrau); 

total = altura / degrau; 

printf("voce devera subir %i degraus", total); 

} 