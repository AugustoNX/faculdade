#include <stdio.h>;

int main() {
    int i, cotacao, quant;
    
    struct moedas {
        float dolar, peso, dinar, franco, libra, euro;
    };
    struct moedas cota;

    printf("Digite a cotação do Dólar: ");
    scanf("%f", &cota.dolar);

    printf("Digite a cotação do Peso: ");
    scanf("%f", &cota.peso);

    printf("Digite a cotação do Dinar: ");
    scanf("%f", &cota.dinar);

    printf("Digite a cotação do Franco: ");
    scanf("%f", &cota.franco);

    printf("Digite a cotação da Libra: ");
    scanf("%f", &cota.libra);

    printf("Digite a cotação do Euro: ");
    scanf("%f", &cota.euro);

    do {
        printf("\nQual moeda gostaria de fazer a cotação? (ou 0 para sair)\n");
        scanf("%i", &cotacao);

        if (cotacao == 0) {
            break;
        }

        printf("Quantos reais você quer converter? \n");
        scanf("%i", &quant);

        switch (cotacao) {
            case 1:
                printf("%.2f reais equivalem a %.2f dólares.\n", (float)quant, quant * cota.dolar);
                break;
            case 2:
                printf("%.2f reais equivalem a %.2f pesos.\n", (float)quant, quant * cota.peso);
                break;
            case 3:
                printf("%.2f reais equivalem a %.2f dinares.\n", (float)quant, quant * cota.dinar);
                break;
            case 4:
                printf("%.2f reais equivalem a %.2f francos.\n", (float)quant, quant * cota.franco);
                break;
            case 5:
                printf("%.2f reais equivalem a %.2f libras.\n", (float)quant, quant * cota.libra);
                break;
            case 6:
                printf("%.2f reais equivalem a %.2f euros.\n", (float)quant, quant * cota.euro);
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (cotacao != 0);
}
