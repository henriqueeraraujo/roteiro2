#include <stdio.h>
#include <stdlib.h>

int main(void){

    char sexo[10];
    float altura[10], tAlturaFeminina = 0, tAlturaMasculina = 0;
    int i, nMulheres=0 , nHomens=0 , maior=0, menor = 0;

    for(i = 0 ; i < 10 ; i++){
        printf("Digite a Altura e o Sexo do individuo #%d: ", i+1);
        scanf("%f %c%*c", &altura[i], &sexo[i]);

    }

    for(i = 0 ; i<10 ; i++){
        if(sexo[i]=='F'||sexo[i]=='f'){
            nMulheres++;
            tAlturaFeminina += altura[i];

            if(altura[maior] < altura[i]){
                maior = i;
            }
            if(altura[menor] > altura[i]){
                menor = i;
            }
        }else{
            nHomens++;
            tAlturaMasculina += altura[i];
            if(altura[maior] < altura[i]){
                maior = i;
            }
            if(altura[menor] > altura[i]){
                menor = i;
            }
        }
    }

    printf("\nMaior Altura: %0.2f \tSexo: %c\n", altura[maior], sexo[maior]);
    printf("Menor Altura: %0.2f \tSexo: %c\n", altura[menor], sexo[menor]);
    printf("Media de altura dos individuos do sexo feminino: %0.2f\n", tAlturaFeminina/nMulheres);
    printf("Media de altura dos individuos do sexo Masculino: %0.2f\n", tAlturaMasculina/nHomens);
    printf("Numeros de Mulheres: %d\n", nMulheres);
    printf("Numeros de Homens: %d\n", nHomens);


    return 0;
}
