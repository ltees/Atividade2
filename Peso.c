#include <stdio.h>


main(){

    //receber o peso e informar se é menor que 60kg

    int peso;
    char nome[40];

    printf("Digite seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite seu peso:");
    scanf("%d", &peso);

    if(peso >= 60){
        printf("%s, você pesa mais que 60kg, nome");
        printf("\nSeu peso é %d", peso);

    }else{
        printf("%s, Você pesa menos que 60kg",nome);
    }

}