#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct reg {
   int         conteudo;
   struct reg *prox;
} celula;

typedef struct reg celula;
struct reg {
   int     conteudo; 
   celula *prox;
};
typedef struct celula celula;
struct celula {
   int     conteudo;
   celula *prox;
}
int main (void){

   printf ("sizeof (celula) = %d\n",   
   sizeof (celula));
   return EXIT_SUCCESS;
}
