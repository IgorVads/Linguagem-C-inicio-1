#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

float n1, n2, n3, ma;
int i;

    for (i = 0; i < 10; i++){
	
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3); 

    ma = (n1+n2+n3)/3;

    printf("A m�dia do aluno(a) �: %.2f\n\n", m, ma);

    if (ma >= 9){
	printf("O conceito � A\n\n");
}
    else if (ma >= 7 && ma < 9){
	printf("O conceito � B\n\n");
}
    else if(ma >= 6 && ma < 7){
	printf("O conceito � C\n\n");
}
    else if (ma >= 4 && ma < 6){
	printf("O conceito � D\n\n");
}
    else {
	printf("O conceito � E\n\n");
}
}
return(0);

}
