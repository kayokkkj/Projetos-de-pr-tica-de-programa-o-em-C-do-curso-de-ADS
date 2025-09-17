#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    
    int opcao,resp;
    double saldo = 1580.9 , depositar, sacar,saque,depositar_att;
    
    do {
    system("clear");
    printf("\n== menu de opcoes == ");
    printf("\n");
    printf("\n1- ver saldo     |");
    printf("\n2- depositar     |");
    printf("\n3- sacar         |");
    printf("\n4- sair          |");
    printf("\n------------------");
   
    printf("\nescolha uma opcao -> ");
    scanf("%i",&opcao);
    
    
    
      switch(opcao) {
        
        
        
       case 1: 
         saldo = 1580.9;
        printf("\nseu saldo -> R$%.2lf",saldo);
       break;
     
     
     
       case 2: 
         depositar = 00.00;
         printf("\nseu saldo atual -> R$%.2lf",saldo);
         printf("\ndigite o valor que quer depositar -> R$");
         scanf("%lf",&depositar_att);
         depositar = depositar_att + saldo;
         printf("\nvalor depositado -> R$%.2lf",depositar_att);
         printf("\nsaldo atualizado -> R$%.2lf",depositar);
       break;  
        
       
       
        
       case 3: 
         sacar = 00.00;
         printf("\nseu saldo atual -> R$%.2lf",saldo);
         printf("\ndigite um valor pra sacar -> R$");
         scanf("%lf",&sacar);
        
        
          if (sacar > 1580.9){
             printf("\nsaldo insulficiente | saque nao realizado!!! ");
         }
          
            else if (sacar <= 50) {
                printf("\nsaque nao realizado | valor minimo -> R$50");
           }  
          
             else if (sacar <= saldo) {
                saque = saldo - sacar;
                printf("\nvalor retirado -> R$%.2lf",sacar);
                printf("\nsaldo atualizado -> R$%.2lf | saque realizado com sucesso",saque);
            }
          break;    
       
       
       
   
        case 4:
         printf("\nencerrando o sistema...");
          break;
           default:
            printf("opcao invalida, encerrando o sistema...");
   
        
    }
     printf("\n----------------------------------------------");
     printf("\ndigite 4 para encerrar o progama | digite 1 para continuar:");
     printf("\nescolha uma opcao -> ");
     scanf("%i",&resp);
   } while (resp != 4 );
    
    
    printf("\nencerrando sistema...");
    
    
    
    return 0;
}


