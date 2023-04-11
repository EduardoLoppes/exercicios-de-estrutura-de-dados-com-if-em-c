#include <stdio.h>

int main() {
    int anos, meses, dias, total;

    printf("Digite a idade da pessoa em anos, meses e dias: ");
    scanf("%d%d%d", &anos, &meses, &dias);
    
    total = anos*365 + meses*30 + dias;
    
    printf("A sua idade em dias é %d\n", total);
}