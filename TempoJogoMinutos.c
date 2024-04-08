#include <stdio.h>

void calculoTempo (int horaInicial, int minInicial, int horaFinal, int minFinal) 
{
    int horas = horaFinal - horaInicial;
    int minutos = minFinal - minInicial;

    if (minutos < 0)
    {
        horas--;
        minutos = 60 + minutos;
    }
    if (horas < 0)
    {
        horas = 24 + horas;
    }
    if (horas == 0 && minutos == 0)
    {
        horas = 24;
        minutos = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
}


int main()
{
    int horaInicial, minInicial, horaFinal, minFinal;
    scanf("%d %d %d %d", &horaInicial, &minInicial, &horaFinal, &minFinal);

    calculoTempo(horaInicial, minInicial, horaFinal, minFinal);

    return 0;
}