#include <stdio.h>

int main(){
    int idade = 0;
    float altura = 0;
    char nome[20] = "";

    printf("digite seu nome\n");
    scanf("%s", nome);
    printf("ola jovem %s\n", nome);
    printf("digite sua idade e altura\n");
    scanf("%d %f", &idade, &altura);
    printf("então seu nome é %s e você tem %d e %.2f de altura", nome, idade, altura);
    return 0;
}