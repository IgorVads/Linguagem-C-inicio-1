#include<stdio.h>
#include<locale.h>

#define PI 3.14

int main(){
    setlocale(LC_ALL, "Portuguese");
float r, a;
printf("Informe o raio da circunfer�ncia: ");
scanf("%f", &r);
a = PI * (r * r);
printf ("A �rea da circunfer�ncia � de: %.2f", a);
return(0);
}

