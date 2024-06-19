#include<stdio.h>
void main(){
float salarioM, quiloWatts, consumo, reais, desconto;
printf("digite o valor de um salario minimo: ");
scanf("%f", &salarioM);
printf("Qual o consumo de quiloWatts: ");
scanf("%f", &consumo);
quiloWatts = salarioM /5;
reais = quiloWatts * consumo;
desconto = reais - reais*0.15;
printf("O valor de cada quiloWatts: R$%.2f, Valor a ser pago:
R$%.2f, O valor com 15 de desconto: R$%.2f", quiloWatts, reais,
desconto);
}
