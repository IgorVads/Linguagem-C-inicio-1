#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float x;
printf("Digite um n�mero: ");
scanf("%f", &x);

printf("O cubo �: %.1f ", pow(x,3));
return(0);
}
