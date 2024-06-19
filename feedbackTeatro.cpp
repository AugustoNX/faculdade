#include <stdio.h>

main() {
    int opniao, gostou, ngostou, total;
    float porcentagem, gostaram;
    gostou = 0;
    ngostou = 0;
    total = 0;
    
    printf("registre 1-se gostou ou 2-se não gostou");
    opniao = 1;
    while(opniao == 1 || opniao == 2){
        printf("\n digite sua opnião: ");
        scanf("%i", &opniao);
        if(opniao == 1){
            gostou++;
        }
        if(opniao == 2){
            ngostou++;
        }
        total = gostou + ngostou;
    }

    // tive que criar a variável GOSTARAM pois estava dando um erro
    // na hora do calculo da porcentagem pelo fato do gostou ser um int
    gostaram = gostou;
    porcentagem = ( gostaram / total) * 100;
    
    
    printf("gostaram: %i \n", gostou);
    printf("não gostaram: %i \n", ngostou);
    printf("total: %i \n", total);
    printf("%.2f%% de pessoas gostaram", porcentagem);
}
