#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    Exercicio2();
    return 0;
}

int Exercicio1(){

    int val;

    printf("Valor do número-> ");

    scanf("%i", &val);

    if(val % 2 != 0){
        printf("É impar");
    }

    return 0;
}

int Exercicio2(){

    int val1, val2, val3, val4;

    printf("Digite os valores-> ");

    scanf("%i %i %i %i", &val1, &val2, &val3, &val4);

    if(val1 == val2 || val1 == val3 || val1 == val4|| val2 == val3 || val2 == val4|| val3 == val4){
        printf("São pares iguais");
    }else{
        printf("Não tem nenhum");
    }

    return 0;
}
