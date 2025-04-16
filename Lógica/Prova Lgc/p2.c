#include <stdio.h> 

int main()
{
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade > 0) {
        if (idade < 12) {
            printf("Voce e uma crianca\n");
        } 
        else if (idade <= 17) {
            printf("Voce e um(a) adolescente\n");
            } 
        else if (idade <= 59) {
            printf("voce e um(a) adulto(a)\n");
        } 
        else {
            printf("Voce e um(a) idoso(a)");
        }
    } else {
        printf("Idade invalida. Digite um valor maior que zero.\n");
    }
    return 0;
}