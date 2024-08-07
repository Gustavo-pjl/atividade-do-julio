#include<stdio.h>


int main() {
    int numero1, numero2, numero3;
    printf("Digite o primeiro valor");
    scanf("%d", &numero1);
    printf("Digite o segundo valor");
    scanf("%d", &numero2);
    printf("Digite o terceiro valor");
    scanf("%d", &numero3);



    float soma=  (numero1 + numero2 + numero3)/3;
    printf("O resultado é %f", soma);

    return 0;
}