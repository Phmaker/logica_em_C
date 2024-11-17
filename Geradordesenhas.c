#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//crio uma função 
void gerarSenha(int comprimento) {
    
    //Declaro os tipos de caracteres que ira conter nessa senha
    char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    int tamanho = sizeof(caracteres) - 1;

   //Crio o gerador de senha usando a logica do FOR
    printf("Senha gerada: ");
	
    for (int i = 0; i < comprimento; i++) {
        printf("%c", caracteres[rand() % tamanho]);
    }
    printf("\n");
}


//Crio minha fução main
int main() {
	
    setlocale(LC_ALL, "Portuguese");
	
    int comprimento;

    // Inicializo o gerador
    srand(time(0));


	//Peço ao usuario para digitar o tamanho da sua senha desejada e logo em seguida salvo ela em uma variavel
    printf("Digite o comprimento da senha desejada: ");
    scanf("%d", &comprimento);

    // Chamo a função que declarei no void para iniciar o gerador 
    gerarSenha(comprimento);


	//Utilizo para a tela ficar congelada, Substituindo o system("pause")
    printf("Digite qualquer tecla...");
    getchar();
    
    return 0;
}
