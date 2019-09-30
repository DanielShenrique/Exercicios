#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numX;

    printf("Número de exercício-> ");
    scanf("%i", &numX);
    printf("==========================================\n");

    if(numX == 1){
        Exercice_1();
    }
    else if(numX == 2){
        Exercice_2();
    }
    else if(numX == 3){
        Exercice_3();
    }else{
        printf("\nNúmero do exercício não encontrado\n");
    }

    return 0;
}

int Exercice_1(){

    int n1, n2, n3;
    float media;

    printf("Escolha três números -> ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (float)(n1 + n2 + n3)/3;

    printf("A media é -> %.2f", media);

    return 0;
}

int Exercice_2(){

    int n1, n2;

    float som, sub, mult, div;

    printf("Escolha dois números -> ");
    scanf("%i %i", &n1, &n2);

    som = (float)n1 + n2;
    sub = (float)n1 - n2;
    mult = (float)n1 * n2;
    div = (float)n1 / n2;

    printf("=======================================\n");

    printf("\tSoma -> %.1f \n", som);
    printf("\tSubtração -> %.1f \n", sub);
    printf("\tMultiplicação -> %.1f \n", mult);
    printf("\tDivisão -> %.1f \n", div);

    return 0;
}

int Exercice_3(){
    float const CT = 0.05;

    float sal;
    float coms;
    int numCar;
    float valTot;

    printf("Diga o salário-> ");
    scanf("%f", &sal);
    printf("\nDiga a comissão dele-> ");
    scanf("%f", &coms);
    printf("\nDiga o número de carros vendidos->");
    scanf("%i", &numCar);

    printf("====================================================");

    valTot = sal + (coms * numCar) * CT;

    printf("\n\nEste é o salário total-> %.2f", valTot);

}


