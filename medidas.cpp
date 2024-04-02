#include<stdio.h> 

void main(){ 

float pes, polegadas, jardas, milhas; 

printf("Digite a medida em pes: "); 

scanf("%f", &pes); 

polegadas = pes * 12; 

jardas = pes / 3; 

milhas = jardas / 1760  ; 

printf("%.0f pes = %.0f polegas, %.2f jardas, %.3f milhas", pes, 		polegadas, jardas, milhas); 

} 