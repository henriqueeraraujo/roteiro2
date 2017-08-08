#include <stdio.h>

void xx(int n){
    int i, j;

    for(i = 1; i <= n; i++){

        for(j = 1 ; j <= i ; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

}

int main(void){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\n");

    xx(n);

    printf("\n");

    return 0;
}
