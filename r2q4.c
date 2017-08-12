#include <stdio.h>

int eh_divisivel(int a, int b){

    int eh_divisel = 1;

    if(a % b != 0){
        eh_divisel = 0;
    }

    return eh_divisel;
}
int eh_primo(int n){

    int i, eh_primo = 1;

    if(n == 1 || n == 2){
        return eh_primo;
    }

    for(i = 2 ; i < n/2 ; i++){
        if(eh_divisivel(n,i)){
            return eh_primo = 0;
        }
    }

    return eh_primo;

}
int main(void){

    int n;


    printf("Digite um numero: ");
    scanf("%d", &n);


    if(eh_primo(n)){
        printf("\tO numero %d eh primo!\n", n);
    }else{
        printf("\tO numero %d nao eh primo!\n", n);
    }

    return 0;
}
