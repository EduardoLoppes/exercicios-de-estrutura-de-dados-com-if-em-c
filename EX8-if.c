#include <stdio.h>

    int main(){
    int n1, n2, n3;
    printf("Digite um numero positivo: ");
    scanf("%d", &n1);
    printf("Digite um segundo numero positivo: ");
    scanf("%d", &n2);
    printf("Digite um terceiro numero positivo: ");
    scanf("%d", &n3);
    if (n1 > n2 && n2 > n3);
        printf("%d%d%d", n1, n2, n3);
    else if (n1 > n3 && n3 > n2)
        printf("%d%d%d", n1, n3, n3);
    else if (n2 > n1 && n1 > n3)
        printf("%d%d%d", n2, n1, n3);
    else if (n2 > n3 && n3 > n1)
        printf("%d%d%d", n2, n3, n1);
    else if (n3 > n1 && n1 > n2)
        printf("%d%d%d", n3, n1, n2);
    else
        printf("%d%d%d", n3, n2, n1);
}