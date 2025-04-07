#include <stdio.h>

// Declarações das funções
void movertorre(int movimentacao);
void moverBispo(int movimentacao);
void moverRainha(int movimentacao);
void moverCavalo();
void moverBispoLoops();

int main(){

   printf("\nMovimento da torre (recursivo):\n");
   movertorre(5);

   printf("\nMovimento do Bispo (recursivo):\n");
   moverBispo(5);

   printf("\nMovimento do Bispo (loops aninhados):\n");
   moverBispoLoops();

   printf("\nMovimento da rainha (recursivo):\n");
   moverRainha(8);

   printf("\nMovimento do Cavalo (Loops complexo):\n");


int i;

printf("Movimentos da torre\n");


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

   // Implentações das funções
   void movertorre(int movimentacao) {
      if (movimentacao <= 0) return;
      printf("Direita - movimento %d\n", 6 - movimentacao);
      movertorre(movimentacao - 1);
   }

   void moverBispo(int movimentacao) {
      if (movimentacao <= 0) return;
      printf("Cima, Direita - Casa %d\n", 6 - movimentacao);
   }
   void moverRainha(int movimentacao) {
      if (movimentacao <= 0) return;
      printf("Esquerda - movimentacao %d\n", 9 - movimentacao);
   }
   void moverCavalo() {
      int cima, direita;

      for (cima = 1; cima <= 2; cima++) {
         if (cima == 3) break;
         printf("Cima\n");

         for (direita = 1; direita <= 1; ) {
            if (cima < 2) {
               direita++;
               continue;
            }
            printf("Direita\n");
            direita++;
         }
      }
   }

void moverBispoLoops () {
   int vertical = 1, horizontal = 1;

   while (vertical <= 5) {
      for (horizontal = 1; horizontal <= 1; horizontal++) {
      printf ("Cima, Direita - movimentacao %d\n", vertical);
   }
   vertical++;
  }
}



