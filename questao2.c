#include<stdio.h>
int main(){
int numero1, numero2, produto;

    // exige ao usuário que insira o primeiro número
printf("Digite o primeiro número inteiro: ");
 scanf("%d", &numero1);

    // exige ao usuário que insira o segundo número
printf("Digite o segundo número inteiro: ");
 scanf("%d", &numero2);

    // Multiplica o produto dos dois números
    produto = numero1 * numero2;

    // mostra o resultado
printf("O produto de %d e %d é %d.\n", numero1, numero2, produto);


return 0;
}