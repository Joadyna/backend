// EXERCICIO 5
#include <stdio.h>

#define NUMERO_MAX_ALUNOS 40
#define NUMERO_MAX_ESTOQUE 500
#define VALOR_PI 3.1415926535
#define ANO_ATUAL 2026

int main()
{

    int alunos = 40;
    int produtos = 500;
    double resultado = 3.1415926535;
    int ano = 2026;

    if (alunos > NUMERO_MAX_ALUNOS)
        printf("Excesso de alunos!\n");

    if (produtos > NUMERO_MAX_ESTOQUE)
        printf("Estoque Cheio!\n");

    if (resultado == VALOR_PI)
        printf("Este é o valor de PI!\n");

    if (ano <= ANO_ATUAL)
        printf("Este ano já se foi!\n");

    return 0;
}
// EXERCICIO 6
#include <stdio.h>

typedef unsigned char byte;
typedef int inteiro;
typedef float real;

int main()
{
    byte idade = 20;
    inteiro quantidade = 10;
    real nota = 8.5;

    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Nota: %.1f\n", nota);

    return 0;
}

// EXERCICIO 7
#include <stdio.h>

int main()
{
    printf("char: %zu bytes\n", sizeof(char));
    printf("short: %zu bytes\n", sizeof(short));
    printf("int: %zu bytes\n", sizeof(int));
    printf("long: %zu bytes\n", sizeof(long));
    printf("long long: %zu bytes\n", sizeof(long long));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));

    return 0;
}

// EXERCICIO 8
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);

    return 0;
}

// EXERCICIO 9
#include <stdio.h>
#include <stdint.h>

#define IDADE_MINIMA 0
#define NOTA_MINIMA 0.0
#define NOTA_MAXIMA 10.0

typedef uint8_t idade_t;

int main()
{
    idade_t idade = 19;
    int32_t matricula = 123456;
    float nota = 8.5;

    printf("=== Cadastro do Aluno ===\n");
    printf("Idade: %u anos\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Nota: %.1f\n", nota);

    return 0;
}