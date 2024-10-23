// Online C compiler to run C program online
#include <stdio.h>
int main() {
    printf("**********************\n");
    printf("*Jogo da adivinhação** \n");
    printf("**********************\n");
    
    int numerosecreto = 42;
    // armazenar chute
    int chute;                                                                              
       printf("Qual è o seu chute: \n ");
       
     scanf("%d",&chute);
    printf("seu chute foi %d \n",chute);
    
    if (chute == numerosecreto){
        printf("Você acertou! \n"); 
    }else{
        printf("Você errou! \n");
    }
    }