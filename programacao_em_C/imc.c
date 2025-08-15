#include <stdio.h>
 
float seu_imc(float peso, float altura){
    return peso / (altura * altura);
}

int main(){
    float altura, peso, resul;
    printf("vamos saber seu IMC\n");
    printf("digite abaixo seu peso e altura\n");
    scanf("peso %f %f", &peso, &altura);
    resul = seu_imc(peso, altura);
    printf("seu IMC é: %.2f\n", resul);
    return 0;
}