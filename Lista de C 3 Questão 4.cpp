#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, cont = 0;
    printf("Os n�meros divis�veis por 2 no intervalo de 10 a 50 s�o:\n");
    for(i = 10; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%i\n", i);
            cont++;
        }
    }
    printf("O total de n�meros exibidos foi: %i\n", cont);
    return (0);
}
