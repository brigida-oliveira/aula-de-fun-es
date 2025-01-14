#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
    return x+y;
}


int main()
{
    int a, b, resposta;
    printf("## Vamos somar! :D ##\n\n");

    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);

    printf("Digite o segundo numero:\n");
    scanf("%d", &b);

    resposta = soma(a, b);

    printf("Resultado: %d\n", resposta);
    return 0;
}
