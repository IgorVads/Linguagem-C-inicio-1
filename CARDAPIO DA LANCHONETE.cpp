#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

int n, q;

printf("***********CARD�PIO LANCHONETE***********\n");
printf("|C�DIGO | ESPECIFICA��O | PRE�O UNIT�RIO|\n");
printf("|  100  |CACHORRO QUENTE|      08.00    |\n");
printf("|  101  |     BAURU     |      09.00    |\n");
printf("|  102  |    X-SALADA   |      10.00    |\n");
printf("|  103  |   HAMB�RGUER  |      12.00    |\n");
printf("|  104  |  REFRIGERANTE |      03.00    |\n");

printf("Informe o c�digo do produto desejado: ");
scanf("%i", &n);

printf("Informe a quantidade que deseja comprar: ");
scanf("%i", &q);

switch (n){
	
case 100:
	printf("O valor a ser pago ser� de: %i.00 reais", (8 * q));
	     break;
    
case 101:
	printf("O valor a ser pago ser� de: %i.00 reais", (9 * q));
	     break;
    
case 102:
	printf("O valor a ser pago ser� de: %i.00 reais", (10 * q));
	     break;
	
case 103:
    printf("O valor a ser pago ser� de: %i.00 reais", (12 * q));
	     break;
    
case 104:
	  printf("O valor a ser pago ser� de: %i.00 reais", (3* q));
	     break;
    
default: 
    printf("O c�digo informado � invalido!");
         break;
}
return(0);
}
