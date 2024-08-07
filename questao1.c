#include<stdio.h>
int main(){
 int numero1, numero2;
  // Exige dois números para concluir a conta
 printf("Escolha dois números inteiros: \n");
 scanf("%d %d", &numero1, &numero2);

 int soma = numero1 + numero2;
    printf("A soma é: %d\n", soma);
    

    return 0;
}