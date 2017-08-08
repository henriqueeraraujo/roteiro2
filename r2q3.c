#include <stdio.h>

void xxx(int n){
    int i, j;

    for(i = 1; i <= n; i++){

        for(j = 1 ; j <= i ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

}
int main(void){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\n");

    xxx(n);

    printf("\n");

    return 0;
}
