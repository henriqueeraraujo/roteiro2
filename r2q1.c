#include <stdio.h>

int main(void){

    int horas, minutos;

    printf("Digite a hora para convercao (hh:mm): ");
    scanf("%d : %d", &horas, &minutos);
    if(horas > 23 || minutos > 59){
        printf("\tERRO : hora invalida\n");
        return-3;
    }

    if(horas <= 11){
        if(horas == 0){
            printf("\tRelogio : %d:%d A.M.\n", horas+12, minutos);
            return 1;
        }

        printf("\tRelogio : %d:%d A.M.\n", horas, minutos);

        return 2;
    }else{
        if(horas == 12){
            printf("\tRelogio : %d:%d P.M.\n", horas, minutos);
            return -2;
        }
        printf("\tRelogio : %d:%d P.M.\n", horas-12, minutos);


    }


    return 0;
}
