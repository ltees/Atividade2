#include <stdio.h>


main(){
   
    //receber a idade e informar se o usuario é maior de idade

    int idade;
    char nome[15];

    printf("Digite o seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite sua idade:");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("%s, você é maior de idade, nome");
        printf("\nSua idade é %d", idade);

    }else{
        printf("%s, você é menor de idade", nome);
    }

    printf("\ncontinua...");

}
