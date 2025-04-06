#include <stdio.h>

void movertorre (int movimentação) {
    if(movimentação > 0) {
       printf("Direita\n");
       movertorre(movimentação - 1);
    }
 }
  void moverbispodiagonal (int movimentação) {
    if(movimentação > 0) {
       printf("Cima, direita\n");
       moverbispodiagonal(movimentação - 1);
    }
  }
 
  void moverrainha (int movimentação) {
    if(movimentação > 0) {
       printf("Esquerda\n");
       moverrainha (movimentação - 1);
    }
  }

int main(){

int i;

printf("Movimentos da torre\n");
movertorre(5);

printf("Digite o numero de casas para torre andar para direita: ");
scanf("%d", &i);
// movimentação pra direita em 5 casas com a torre

for ( int i = 0; i < 5; i++)
{
   printf("Direita\n");
}

printf("---------------------------\n");

printf("Digite o numero de casas para torre andar para esquerda: ");
scanf("%d", &i);

for ( int i = 0; i < 5; i++)
{
   printf("Esquerda\n");
}

printf("---------------------------\n");

// Movimentação pra cima em 5 casas com a torre

printf("Digite o numero de casas para torre andar para cima: ");
scanf("%d", &i);

for( int i = 0; i < 5; i++)
{
   printf("cima\n");
}

printf("---------------------------\n");

 // Movimentação pra baixo em 5 casas com a torre

 printf("Digite o numero de casas para torre andar para baixo: ");
 scanf("%d", &i);

for( int i = 0; i < 5; i++)
{
   printf("baixo\n");
}

printf("---------------------------\n");

printf("Movimentos do bispo");
moverbispodiagonal(5);

 // Movimentação para diagonais em 5 casas com o bispo

do
{
   printf("Digite o numero de casas para bispo andar: ");
   scanf("%d", &i);
   if ( i % 2 != 0)
   {
      printf("Cima, esquerda\n");
   }
   else
   {
      printf("Cima, direita\n");
   }



} while (i % 2 == 0);

printf("---------------------------\n");

printf("Movimentos da rainha\n");

// Movimentação pra direita em 8 casas com a rainha

printf("Digite o numero de casas para a rainha andar pra direita: ");
 scanf("%d", &i);

while (i < 8)
{
   printf("Direita\n");
   i++;
}

printf("---------------------------\n");
moverrainha(8);

// Movimentação pra esquerda em 8 casas com a rainha

printf("Digite o numero de casas para a rainha andar pra esquerda: ");
 scanf("%d", &i);

while (i < 8)
{
   printf("Esquerda\n");
   i++;
}

printf("---------------------------\n");

// Movimentação pra cima 8 casas com a rainha

printf("Digite o numero de casas para a rainha andar pra cima: ");
 scanf("%d", &i);

while (i < 8)
{
   printf("Cima\n");
   i++;
}

printf("---------------------------\n");

// Movimentação pra baixo 8 casas com a rainha

printf("Digite o numero de casas para a rainha andar pra baixo: ");
 scanf("%d", &i);

while (i < 8)
{
   printf("Baixo\n");
   i++;
}

printf("---------------------------\n");

// Movimentação pra diagonal 8 casas com a rainha

printf("Digite o numero de casas para a rainha andar: ");
 scanf("%d", &i);

while (i < 8)
{
   printf("Cima, Direita\n");
   i++;
}

printf("---------------------------\n");

// Movimentação pra diagonal 8 casas com a rainha

printf("Digite o numero de casas para a rainha andar: ");
 scanf("%d", &i);

while (i < 8)
{
   printf("Cima, Esquerda\n");
   i++;
}

// Cavalo: Move-se em L (for + while)
printf("\nMovimento do Cavalo:\n");
for (int i = 1; i <= 2; i++) {
    printf("Cima\n");
}
int j = 1;
while (j <= 1) {
    printf("Direita\n");
    j++;

}


return 0;
}

   






