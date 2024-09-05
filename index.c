#include <stdio.h>

int main()
{

    // declaracao de variaveis
    float saldo_medio, credito;

    printf("Informe o saldo medio: ");
    scanf("%f", &saldo_medio);

    // verificar a faixa do saldo

    if (saldo_medio<500)
    {
        printf("Nenhum valor de credito! ");
    }
    else if (saldo_medio>=500 && saldo_medio < 800)
    {
        credito = saldo_medio * 0.25;
    }
    else if (saldo_medio >= 800 && saldo_medio <1000)
    {
        credito = saldo_medio* 0.30;
    }
    else {
        credito = saldo_medio * 0.40;
    }
     printf("Valor do credito  eh %.2f\n", credito);
    

    return 0;
}
