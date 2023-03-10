#include "vetor_dinamico.h"
#include <stdio.h>
#include <stdlib.h> 

void menu_vetor_dinamico() { 
   
   printf("--- CONSTRUIR UM MENU COM AS OPERAÇÕES ---\n\n");
  
   int operacao = 1;
  
   while (operacao < 10 && operacao > 0) {
      
      printf("---------------------------------------\n");
      printf("        TAD e VETORES DINÂMICOS        \n");
      printf("---------------------------------------\n");
      printf("01 - Criar Vetor Dinâmico\n");
      printf("10 - Sair\n");
      
      printf("Escolha uma operação:  ");
      int numero_parametros = (scanf("%d", &operacao)); // retornam o número de conversões realizada com sucesso. 
      if (numero_parametros != 1) {
         printf("Problemas na entrada de dados");
      }   
            
      switch (operacao)       {
      case 1:
         printf("Você escolheu a operação 01\n");
         //criar_vetor_dinamico();
         break;
      case 10:
         printf("Você escolheu a operação 10\n");
         break;   
      default:
         break;
      }         
   } 
}

int main() { 
    
    printf("--- VAMOS UTILIZAR NOSSO TAD ---\n\n");

    //menu_vetor_dinamico();

    int tamanho = 10;

    bool ordenado = false; 

    Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(tamanho, ordenado);

    //vetor_dinamico->tamanho = 10; //não tem acesso direto aos dados.
    //vetor_dinamico->dados[0] = 50; //não tem acesso direto aos dados.
    
    imprimir_vetor_dinamico(vetor_dinamico);

    adicionar_vetor_dinamico(vetor_dinamico, 30);
    adicionar_vetor_dinamico(vetor_dinamico, 10);
    adicionar_vetor_dinamico(vetor_dinamico, 20);

    imprimir_vetor_dinamico(vetor_dinamico);
  
    destruir_vetor_dinamico(&vetor_dinamico);

    return 0;
}