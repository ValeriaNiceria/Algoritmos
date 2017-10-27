#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioB;
    int tempoA;
    char sexo;

    printf("\n---- Calculando Remuneração do Funcionário -----"
            "\n-----------------------------------------------\n");

    printf("\n Qual o sexo do funcionário(a)? "
            "\nDigite M para Masculino e F para feminino: ");
    scanf("%c", &sexo);

    printf("\n Informe o valor do sálario bruto do funcionário(a): R$ ");
    scanf("%f", &salarioB);

    printf("\n Quantos anos de trabalho o funcionário(a) possui: ");
    scanf("%d",&tempoA);


    if(salarioB > 700) {
        salarioB -= (salarioB * 0.12);
    }else if(salarioB > 450){
        salarioB -= (salarioB * 0.08);
    }else if(salarioB > 200){
            salarioB -= (salarioB * 0.03);
    }

    if((sexo == 'M')||(sexo == 'm')){
        if(salarioB > 500){
            if(tempoA > 3){
                salarioB += 30;
            }else{
                salarioB += 20;
            }
        }else{
            if(tempoA > 4){
                salarioB += 35; 
            }else{
                salarioB += 23;
            }
        }
    }else if((sexo == 'F')||(sexo == 'f')){
        if(salarioB > 500){
            if(tempoA > 3){
                salarioB += 40;
            }else{
                salarioB += 25;
            }
        }else{
            if(tempoA > 4){
                salarioB += 33; 
            }else{
                salarioB += 28;
            }
        }
    }


    if(salarioB > 600){
        printf("\n Funcionário BEM REMUNERADO! Salário de: R$ %f", salarioB);
        printf("\n \n");
    }else if(salarioB > 350){
        printf("\n Funcionário com REMUNERAÇÃO NORMAL! Salário de: R$ %f", salarioB);
        printf("\n \n");
    }else{
        printf("\n Funcionário MAL REMUNERADO! Salário de: R$ %f", salarioB);
        printf("\n \n");
    }

    return 0;

    //gcc -c programa.c
    //gcc programa.o -o programa
    //./programa 
}