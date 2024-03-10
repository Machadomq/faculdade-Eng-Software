
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num = 5;
    int palpite;
    int fim;

    printf("Tente adivinhar um numero de 1 a 10:");
    scanf("%i", &palpite);

    while (fim != 1){
        if (palpite == num)
        {
            printf("Voce adivinhou");
            fim = 1;
        }
        else if (palpite != num)
        {
            printf("Voce errou o numero");
            printf("Tente novamente:");
            scanf("%i", &palpite);
        }
    }

    return 0;
}