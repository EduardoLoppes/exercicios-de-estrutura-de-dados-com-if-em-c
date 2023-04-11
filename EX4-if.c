#include <stdio.h>

int main(){
int codigo, quantidade;
float preco;
printf ("Digite o código do produto:");
scanf ("%d", &codigo);
if (codigo>=100 && codigo<= 105)
{
printf ("Digite a quantidade:");
scanf ("%d", &quantidade);
if (codigo==100 || codigo==103)
preco=quantidade*1.2;
else if (codigo==101 || codigo==104)
preco=quantidade*1.3;
else if (codigo==102)
preco=quantidade*1.5;
else if (codigo==105)
preco=quantidade *1.0;
printf ("Total a pagar: %.2f", preco);}
else printf ("Código inválido.");
}