#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
printf("Informe um n�mero: ");
scanf("%i", &n);

if (n > 0){
	printf("%i � positivo!", n);
}
else if(n < 0){
	printf("%i � negativo!", n);
}
else{
	printf("0 � neutro!", n);
}
return(0);
}
