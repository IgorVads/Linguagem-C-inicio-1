#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
int x, y, o;
printf("Informe um n�mero inteiro: ");
scanf("%i",&x);
printf("Informe outro n�mero inteiro: ");
scanf("%i",&y);

printf("\n1 - ADI��O\n");
printf("2 - SUBTRA��O\n");
printf("3 - MULTIPLICA��O\n");
printf("4 - DIVIS�O\n\n");
printf("Informe a opera��o: ");
scanf("%i", &o);  
printf("\n================================\n");

switch (o){
     
case 1:
	printf("A adi��o de %i mais %i �: %i\n", x, y, (x + y));
	     break;
     
case 2:
	printf("A subtra��o de %i menos %i �: %i\n", x, y, (x - y));
	     break;
     
case 3:
	printf("A multiplica��o de %i por %i � de: %i\n", x, y, (x * y));
	     break;
     
case 4:
	if(y != 0) {
				printf("A divis�o de %i por %i � de: %i\n", x, y, (x / y));
			} 
else {
	printf("Erro: Divis�o por zero n�o � possivel!\n");
}
 break;

default: 
    printf("N�o foi encontrado o c�digo informado!\n");
         break;
}
return(0);
}
