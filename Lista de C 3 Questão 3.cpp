#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, idade;
    for (i = 0; i < 10; i++){

    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    
    if(idade < 18){
	printf("Voc� � menor de idade!\n\n");
    }
    else{
	printf("Voc� � maior de idade!\n\n");
    }
    }
return(0);
}
