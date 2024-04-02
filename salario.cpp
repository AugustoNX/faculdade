#include<stdio.h> 

void main( ){ 

float salarioB, gratificacao, imposto; 

printf("Digite seu salario: "); 

scanf("%f", &salarioB); 

gratificacao = salarioB*0.05 + salarioB; 

imposto = salarioB - salarioB*0.07; 

printf("O salario com gratificação: %.2f, e com imposto: %.2f", 		gratificacao, imposto); 

} 