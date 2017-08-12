#include <stdio.h>
#include <string.h>

int main(void){

    char numero[10], numeroCopy[10];
    int i, j=1;

    printf("Valida e corrige número de telefone\n");
    printf("Telefone: ");
    fgets(numero, 10, stdin);

    if(numero[0]!='3'){

        numeroCopy[0]='3';
        if(numero[3] != '-'){
            printf("Telefone possui 7 digitos e não possui e traço separador.\nVou acrescentar o traco separador e o digito tres na frente.\n");
            for(i = 0 ; i < 7 ; i++){
                if(i == 3){
                    numeroCopy[j] = '-';
                    j++;
                }
                numeroCopy[j] = numero[i];
                j++;
            }
        }else{
            printf("Telefone possui 7 digitos.\nVou acrescentar o digito tres na frente");
            for(i = 0 ; i < 8 ; i++){
                numeroCopy[j] = numero[i];
                j++;
            }

        }

    }else{
        if(numero[4] !='-'){
            printf("Número nao possui o traço separador. Vou acresccentar traço separador");
            j=0;
            for(i=0 ; i<8 ; i++){
                if(i=4){
                    numeroCopy[j]='-';
                    j++;
                }

                numeroCopy[j]=numero[i];
                j++;
            }
        }


    }
    numeroCopy[9]='\0';

    printf("\nNumero Corrigido: %s\n", numeroCopy);

    return 0;
}
