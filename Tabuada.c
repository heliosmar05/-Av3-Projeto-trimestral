/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

 int main() {
    int n;
 while (1) {  // loop infinito
 printf("\nDigite um numero para ver a tabuada:");
   
 if (scanf("%d", &n) != 1) {
 printf("Entrada invalida. Encerrando...\n");
   break;
}

 printf("\n=== Tabuada do %d ===\n", n);

 for (int i = 1; i <= 10; i++) {
 printf("%d x %d = %d\n", n, i, n * i);
 }

 printf("=======================\n");
    }

    return 0;
}

