#include<stdio.h> 

void main(){ 

int salario, conta1, conta2, sobra; 

printf("digite o salario: "); 

scanf("%i", &salario); 

printf("digite o valor da 1 conta: "); 

scanf("%i", &conta1); 

printf("digite o valor da 2 conta: "); 

scanf("%i", &conta2); 

conta1 = conta1 + conta1*0.02; 

conta2 = conta2 + conta2*0.02; 

sobra = salario - (conta1 + conta2); 

printf("apos pagar a conta sobrara: %i", sobra); 

} 