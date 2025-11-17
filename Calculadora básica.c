/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main(void) {
    int opcao;
    double a, b, resultado;

    while (1) {
 printf("\n=== Calculadora Básica ===\n");
 printf("1) Adicao (a + b)\n");
 printf("2) Subtracao (a - b)\n");
 printf("3) Multiplicacao (a * b)\n");
 printf("4) Divisao (a / b)\n");
 printf("0) Sair\n");
 printf("Escolha uma opcao: ");
 if   (scanf("%d", &opcao) != 1) {
 int c;
 while ((c = getchar()) != '\n' && c != EOF) {}
 printf("Entrada invalida. Tente novamente.\n");
 continue;
 }

  if (opcao == 0) {
  printf("Saindo...\n");
  break;
 }

 if (opcao >= 1 && opcao <= 4) {
 printf("Digite o primeiro numero (a): ");
 if (scanf("%lf", &a) != 1) { printf("Entrada invalida.\n"); break; }
 printf("Digite o segundo numero (b): ");
 if (scanf("%lf", &b) != 1) { printf("Entrada invalida.\n"); break; }

 switch (opcao) {
 case 1:
 resultado = a + b;
 printf("Resultado: %.10g\n", resultado);
 break;
 case 2:
 resultado = a - b;
 printf("Resultado: %.10g\n", resultado);
 break;
 case 3:
 resultado = a * b;
 printf("Resultado: %.10g\n", resultado);
 break;
 case 4:
 if (b == 0.0) {
 printf("Erro: divisao por zero.\n");
 } else {
 resultado = a / b;
 printf("Resultado: %.10g\n", resultado);
 }
 break;
 }
 } else if (opcao == 5) {
 long long ai, bi;
 printf("Obs: resto usa valores inteiros.\n");
 printf("Digite o primeiro numero inteiro (a): ");
 if (scanf("%lld", &ai) != 1) { printf("Entrada invalida.\n"); break; }
 printf("Digite o segundo numero inteiro (b): ");
 if (scanf("%lld", &bi) != 1) { printf("Entrada invalida.\n"); break; }
 if (bi == 0) {
 printf("Erro: divisao por zero.\n");
 } else {
 printf("Resto: %lld\n", ai % bi);
 }
 } else {
 printf("Opcao invalida. Tente novamente.\n");
 }
 int ch;
 while ((ch = getchar()) != '\n' && ch != EOF) {}
    }

    return 0;
}
