#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
int x, y, l, m;
printf("Digite um n�mero: ");
scanf("%i", &x);
printf("Digite outro n�mero: ");
scanf("%i", &y);

l = x * 2;
m = y * 3;

printf("\nO dobro de %i �: %i", x, l);
printf("\nO triplo de %i �: %i", y, m);
return(0);
}
