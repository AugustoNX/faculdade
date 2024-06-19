#include <stdio.h> 

int main(){
    int ano, sexo, mulheres, experiencia, maiorcin, anosexp, total;
    float porcentagem, mulheresFloat;
    printf("Use 1- Masculino, 2- Feminino");
    ano = 2000;
    maiorcin = 0;
    mulheres = 0;
    anosexp = 0;
    total = 0;
    while(ano < 2010){
        printf("\nEm que ano nasceu?");
        scanf("%i", &ano);
        if (ano > 2010) {
            break;
        }
        printf("Qual seu sexo? ");
        scanf("%i", &sexo);
        printf("Quantos anos de experiencia?");
        scanf("%i", &experiencia);
        
        if(ano <= 1974){
            maiorcin++;
        }
        if(sexo == 2){
            mulheres++;
        }
        if(experiencia >= 5){
            anosexp++;
        }
        total++;
    }
    mulheresFloat = mulheres;
    porcentagem = (mulheresFloat / total) *100;
    
    printf("\n participaram %i pessoas maiores de 50 ", maiorcin);
    printf("\n participaram %.1f%% mulheres ", porcentagem);
    printf("\n %i pessoas tem mais de 5 anos de experiencia ", anosexp);
}
