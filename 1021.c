#include <stdio.h>

int qtdNotasMoedas (int dinheiro, int nota)
{
    return (dinheiro - (dinheiro % nota)) / nota;
}

int main()
{
    double dinheiroInput;
    scanf("%lf", &dinheiroInput);

    if (dinheiroInput < 0 || dinheiroInput > 1000000) { return 1; }

    int dinheiro = (int) dinheiroInput;
    int decimal = (dinheiroInput - dinheiro) * 100;

    int qtdNotas[6], qtdMoedas[6];
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

    dinheiro = (dinheiro * 100) + decimal;

    qtdMoedas[0] = notas(dinheiro, 100);
    dinheiro = dinheiro % 100; 
    qtdMoedas[1] = notas(dinheiro, 50);
    dinheiro = dinheiro % 50;
    qtdMoedas[2] = notas(dinheiro, 25);
    dinheiro = dinheiro % 25;
    qtdMoedas[3] = notas(dinheiro, 10);
    dinheiro = dinheiro % 10;
    qtdMoedas[4] = notas(dinheiro, 5);
    dinheiro = dinheiro % 5; 
    qtdMoedas[5] = notas(dinheiro, 1);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qtdNotas[0]);
    printf("%d nota(s) de R$ 50.00\n", qtdNotas[1]);
    printf("%d nota(s) de R$ 20.00\n", qtdNotas[2]);
    printf("%d nota(s) de R$ 10.00\n", qtdNotas[3]);
    printf("%d nota(s) de R$ 5.00\n", qtdNotas[4]);
    printf("%d nota(s) de R$ 2.00\n", qtdNotas[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qtdMoedas[0]);
    printf("%d moeda(s) de R$ 0.50\n", qtdMoedas[1]);
    printf("%d moeda(s) de R$ 0.25\n", qtdMoedas[2]);
    printf("%d moeda(s) de R$ 0.10\n", qtdMoedas[3]);
    printf("%d moeda(s) de R$ 0.05\n", qtdMoedas[4]);
    printf("%d moeda(s) de R$ 0.01\n", qtdMoedas[5]);
    
    return 0;
}