#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int n, a, s;
printf("Informe um n�mero inteiro: ");
scanf("%i", &n);
a = n - 1;
s = n + 1;
printf("%i � o antecessor de %i e o sucessor � %i " ,a, n, s);
return(0);
}
