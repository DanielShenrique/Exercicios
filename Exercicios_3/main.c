#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"");

    Exercicio4();
    return 0;
}

int Exercicio1(){

    int val1, val2;

    printf("Digite os valores->");

    scanf("%i %i", &val1, &val2);

    if(val1 % val2 == 0){
        printf("\nÉ divisivel");
    }else{
        printf("\nNão é divisível");
    }

    return 0;
}

int Exercicio2(){

    int val1, val2, val3 ,val4;

    printf("Digite os valores->");

    scanf("%i %i %i %i", &val1, &val2, &val3, &val4);

    if((val1 == val2) % 2 != 0 || (val1 == val3) % 2 != 0 || (val1 == val4) % 2 != 0|| (val2 == val3) % 2 != 0 || (val2 == val4) % 2 != 0|| (val3 == val4) % 2 != 0){
        printf("Há");
    }else{
        printf("Não há");
    }


    return 0;
}


int Exercicio3(){

    int cot;
    double val, mG, prodVal, n;


    prodVal = 1.0;
    n = 0.0;

    do{
        scanf("%lf", &val);
        prodVal *= val;
        n++;
        scanf("%i", &cot);

    }while(cot == 1);

    n = n-1;
    
    printf("%.1lf\n", prodVal);

    mG = pow(prodVal, 1.0/n);

    printf("%.1lf", mG);
  return 0;
}

int Exercicio4(){

    int val1, val2, raz, dif, cot;

    do{
        printf("\ndigite o valor1-> ");
        scanf("%i", &val1);
        printf("\ndigite o valor2-> ");
        scanf("%i", &val2);

        raz = val1/val2;
        printf("%i\n", raz);
        dif = val2 - val1;
        printf("%i\n4", dif);

        printf("1 para continuar, 0 para acabar");
        scanf("%i", &cot);

    }while(cot == 1);


  return 0;
}
