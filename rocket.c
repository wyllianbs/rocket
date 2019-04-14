/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
   Fonte: http://CodingForSpeed.com 
*/
#include <stdio.h>
#include <unistd.h> // para a função usleep
const char rocketstr[] = // string contendo o desenho do foguete
"           _\n\
          /^\\\n\
          |-|\n\
          | |\n\
          |U|\n\
          |F|\n\
          |S|\n\
          |C|\n\
         /| |\\\n\
        / | | \\\n\
       |  | |  |\n\
        `-\"\"\"-`\n\
";
int main(void){
  for(int i = 0; i < 50; i ++){
    printf("\n");           // movendo de baixo para cima no terminal
  }
  printf("%s",rocketstr);   // imprime uma única vez
  int j = 200000;           // tempo de espera para o movimento
  for(int i = 0; i < 50; i ++){
    usleep(j);              // função para pausar (microssegundos)
    j = (int)(j * 0.9);     // diminui o tempo de pausa à medida que sobe 
    printf("\n");           // move o foguete para cima
  }
  return(0);
}
// f=rocket; gcc -o $f $f.c -Wall; ./$f; rm $f
