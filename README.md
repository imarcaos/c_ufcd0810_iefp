# Curso IEFP - UFCD 0810 - Programação em C/C++ Avançada


## Formação do IEFP da Ação: 23328 - Programador de Informática 

Lista de exercícios e tarefas que tivemos de fazer durante as aulas

- Aula 1 - Continuação da UFCD 0809 - Programação em C/C++ Fundamentos
    - Exercício sobre Matrizes

- Aula 2 - Introdução às Funções
    - ex1 functions
        - funções do tipo void não retorna valores.
        - funções não void retorna um valor.
    - ex2 functions
    - ex3 functions - invocar funções no ínicio do código com a função no fim do código
    - ex4 functions - exercício parecido com o anterior, levando nome da função e variáveis iguais para ver que não influênciam no código
    - ex5 functions - Executando a função diretamente no ínicio do código
    - ex6 functions - Função soma com passagens de 2 variáveis no escopo
    - ex7 functions - Criar 4 funções não void para devolver a soma, subtração, multiplicação e divisão de 2 números inteiros.
        - utilização do Switch Case e função char com fflush (windows.h)
    - ex8 function - Criar 4 funções não void para devolver a soma, subtração, multiplicação e divisão de 2 números decimais.
                    - Neste código foi implementado a mudança das chamadas da função, (já tinha feito no anterior) logo está igual.
    - ex9 function - Armazenar 10 números inteiros aleatórios num vector. Criar uma menu para gerar os números e listar os mesmos recorrendo as funções.
        - utilização de uma função para gerar um menu, utilização do "Do While" e Sleep
    - Tarefa 1 para entregar no Teams (Tarefa individual):
        1. Exercício 1 - Crie uma função em C, do tipo void, que receba a nota final de um aluno (entre 0 e 20) e esc
            ?Aprovado? (Se maior do que 12), ?Exame? (Entre 10 e 12), ?Reprovado? (Se menor do que 10).
        2. Exercício 2 - Crie uma função em C, do tipo void, que receba um valor float e uma percentagem de desconto e
            apresente o valor do desconto.
        3. Exercício 3 - Crie uma função em C, do tipo void, que receba um número entre 0 e 50 e devolva a informação se o
            número é par ou ímpar.
        4. Exercício 4 - Crie uma função em C, do tipo void, que receba 3 números e apresente o maior.
        5. Exercício 5 - Crie uma função em C, do tipo void, que receba um caracter. Valida se é F/f ou M/m e escreve
            feminino ou masculino ou inválido.
        6. Nota: Crie um menu de escolha para as funções anteriores.

- Aula 3 - Funções e Arrays
    - Tarefa 1 da Aula 2 - correção do formador
    - ex1 functions array - Foram criadas diversas função para análise e cálculo de notas de alunos armazenadas no array
        - função para recolher, mostrar, alterar, médias, aprovado, reprovado e melhores notas.
    - Tarefa 2 - Recolha dos valores de vendas das Filiais da Empresa (Tarefa Individual):
        1. Determinada empresa pretende desenvolver um programa em C que lhe permita realizar a recolha do total das vendas realizadas nas suas 3 filiais em 2023. Crie uma estrutura de arrays(tabelas) para recolha e manipulação dos dados.
        2. Considere as seguintes opções:
            - Recolha de dados.
            - Listagem de dados.
            - Listagem de dados com total final.
            - Listar a filial com maior venda.
            - Terminar o programa.

        3. Nota: Utilize (arrays)
        Possível Layout:
        ------------------------------------------------------------------------------------------------------------------------
        Empresa VendeTudo, S.A.
        Vendas (2023)

        Menu
        ------------------------------------------------------------------------------------------------------------------------
        1 ? Recolha de dados.
        2 - Listagem de dados.
        3 - Listagem de dados com total final.
        4 ? Listar a filial com maior venda.
        9 - Terminar o programa.

    