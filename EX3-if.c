#include <stdio.h>

int main(){
int idade;
printf("Digite a idade: ");
scanf("%d",&idade);
if(idade < 8) printf("infantil A");
else if(idade < 11) printf("infantil B");
else if(idade < 14) printf("juvenil A");
else if(idade < 18) printf("juvenil B");
else printf("Adulto\n");
}