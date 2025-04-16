#include <stdio.h> 

int main()
{
    int numero1, numero2;
    char operacao;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("Digite a operacao (+, -, *, /)");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero:");
    scanf("%d", &numero2);

    if (operacao == '/' && numero2 == 0) {
    printf("nao e possivel dividir por zero");
    return 0;
    }
    
    switch (operacao)
    {
    case '+':
        printf("Resultado: %d\n", numero1 + numero2);
        break;

    case '-':
        printf("Resultado: %d\n", numero1 - numero2);
        break;

    case '*':
        printf("Resultado: %d\n", numero1 * numero2);
        break;

    case '/':
        printf("Resultado: %d\n", numero1 / numero2);
        break;
        default:
        printf("Operacao invalida");
    }

    return 0;
}