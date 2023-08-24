#include <stdio.h>


main(){

    //receber altura e informar se é maior que 1.8

    double altura;
    char nome[40];

    printf("Digite seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite sua altura:");
    scanf("%lf", &altura);

    if(altura >= 1.8){
        printf("%s, você é maior que 1.8, nome");
        printf("\nSua altura é %d", altura);

    }else{
        printf("%s, Você é menor que 1.8",nome);
    }

    

}