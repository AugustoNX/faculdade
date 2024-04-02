#include<stdio.h> 

void main(){ 

int custo, convite, total; 

printf("digite o custo do espetaculo: "); 

scanf("%i", &custo); 

printf("digite o custo do convite: "); 

scanf("%i", &convite); 

total = custo / convite; 

printf("voce devera vender %i convites", total); 

} 