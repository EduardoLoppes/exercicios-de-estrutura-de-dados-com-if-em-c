#include <stdio.h>

int main() {
    int num1, num2, num3, menor, maior;
    printf("Digite tres valores: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    menor = num1;
    maior = num1;
    if(menor > num2)
        menor = num2;
    if(menor > num3)
        menor = num3;
    if(maior < num2)
        maior = num2;
    if(maior < num3)
        maior = num3;
    printf("Menor: %d\tMaior: %d\n", menor, maior);
}