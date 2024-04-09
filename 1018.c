#include <stdio.h>

int qtdNotas (int dinheiro, int nota)
{
    return (dinheiro - (dinheiro % nota)) / nota;
}

int main()
{
    int dinheiro, qtdNotas[7];
    scanf("%d", &dinheiro);

    printf("%d\n", dinheiro);

    if (dinheiro < 0 || dinheiro > 1000000) { return 1; }

    qtdNotas[0] = notas(dinheiro, 100);
    dinheiro = dinheiro % 100; 
    qtdNotas[1] = notas(dinheiro, 50);
    dinheiro = dinheiro % 50;
    qtdNotas[2] = notas(dinheiro, 20);
    dinheiro = dinheiro % 20;
    qtdNotas[3] = notas(dinheiro, 10);
    dinheiro = dinheiro % 10;
    qtdNotas[4] = notas(dinheiro, 5);
    dinheiro = dinheiro % 5; 
    qtdNotas[5] = notas(dinheiro, 2);
    dinheiro = dinheiro % 2;
    qtdNotas[6] = notas(dinheiro, 1);

    printf("%d nota(s) de R$ 100,00\n", qtdNotas[0]);
    printf("%d nota(s) de R$ 50,00\n", qtdNotas[1]);
    printf("%d nota(s) de R$ 20,00\n", qtdNotas[2]);
    printf("%d nota(s) de R$ 10,00\n", qtdNotas[3]);
    printf("%d nota(s) de R$ 5,00\n", qtdNotas[4]);
    printf("%d nota(s) de R$ 2,00\n", qtdNotas[5]);
    printf("%d nota(s) de R$ 1,00\n", qtdNotas[6]);
    
    return 0;
}