// UFCD 0810 - Aula 2 - 26/03/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Criar 4 fun��es n�o void para devolver a soma, subtra��o, multiplica��o
e divis�o de 2 n�meros inteiros.
*/

float soma(float x, float y);
float subtracao(float x, float y);
float multiplicacao(float x, float y);
float divisao(float x, float y);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    //----------------------

    float x, y;
    char operacao;
    printf("Digite o 1� n�mero: ");
    scanf("%f", &x);
    printf("\nDigite o 2� n�mero: ");
    scanf("%f", &y);

    fflush(stdin);
    printf("\nDigite a opera��o (+) (-) (*) (/): ");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case '+':
        printf("\nA soma de %.2f com %.2f �: %.2f.", x, y, soma(x, y));
        break;
    case '-':
        printf("\nA subtra��o de %.2f com %.2f �: %.2f.", x, y, subtracao(x, y));
        break;
    case '*':
        printf("\nA multiplica��o de %.2f com %.2f �: %.2f.", x, y, multiplicacao(x, y));
        break;
    case '/':
        printf("\nA divis�o de %.2f com %.2f �: %.2f.", x, y, divisao(x, y));
        break;
    default:
        break;
    }

    return 0;
}

float soma(float x, float y)
{
    return (x + y);
}
float subtracao(float x, float y)
{
    return (x - y);
}
float multiplicacao(float x, float y)
{
    return (x * y);
}
float divisao(float x, float y)
{
    return (x / y);
}