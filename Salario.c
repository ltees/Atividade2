#include <stdio.h>


main(){

    //receber o salario e informar se ganha mais que um salario minimo

    int salario;
    char nome[30];

    printf("Digite seu nome:");
    fgets(nome, 30, stdin);

    printf("\nDigite seu salario:");
    scanf("%d", &salario);

    if(salario >= 1320){
        printf("%s, você ganha mais que um salario minimo, nome");
        printf("\nSeu salario é %d", salario);

    }else{
        printf("%s, Você ganha menos que um salario minimo",nome);
    }

}