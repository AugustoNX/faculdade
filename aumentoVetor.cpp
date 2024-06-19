#include <stdio.h>
int main(){
    int i;
	struct funcionario {
	     float salario;
	};
	funcionario equipe[15];
	for(i = 0; i < 15; i++){
		printf("digite o seu salario: ");
		scanf("%f", &equipe[i].salario);
		if(equipe[i].salario < 900.00){
			equipe[i].salario *= 1.3;
		}
	}
	for(i = 0; i < 15; i++){
		printf("\nO novo salario do %i: %.2f", i, equipe[i].salario);
	}
}
