#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
int x, y;
printf("Informe um n�mero inteiro: ");
scanf("%i", &x);
printf("Informe outro n�mero inteiro: ");
scanf("%i", &y);

if (y == 0){
	printf("Erro: Divis�o por zero n�o � possivel!");
}
else if(x % y == 0 ){
	printf("� divisivel!");
}
else{
	printf("N�o � divisivel!");
}
return(0);
}
