#include <stdio.h>

int main()
{
    int anos, meses, dias;

    printf("Digite a idade da pessoa em anos, meses e dias: ");
    scanf("%d", &anos);
    dias = anos*365;
    meses = anos*12;
    printf("Você tem %d anos ou %d meses ou %d dias", anos, meses, dias);
}