/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador = 0;
    while (1) {
    printf("Contador: %d\n", contador);
    contador++;

 char nome[50]; 
 int idade, numero_camisa; 
 float peso, altura; 
    char posicao; 
 
 printf("=== Sistema Cadastro ===\n\n");
 
 printf("Digite o nome: ");
 scanf("%49s", nome); 
    
 printf("Digite sua idade: ");
 scanf("%d", &idade);

 printf("Digite sua altura (em metros): ");
 scanf("%f", &altura);

 printf("Digite seu peso (em kg): ");
 scanf("%f", &peso); 
    
 printf("Digite a posicao (G - goleiro, Z - zagueiro, M - meio, A - atacante): ");
 scanf(" %c", &posicao); 

 printf("Digite o numero da camisa: ");
 scanf("%d", &numero_camisa); 
 printf("\n=== Dados Cadastrados ===\n");
 printf("Nome: %s\n", nome);
 printf("Idade: %d anos\n", idade);
 printf("Altura: %.2f metros\n", altura);
 printf("Peso: %.2f kg\n", peso);
 printf("Posicao: %c\n", posicao);
 printf("Numero da camisa: %d\n", numero_camisa);
    if (contador >= 5) { 
   break;
    }
    }
 printf("Loop interrompido!\n");
    return 0;
    
}