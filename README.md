# Curso IEFP - UFCD 0810 - Programação em C/C++ Avançada


## Formação do IEFP da Ação: 23328 - Programador de Informática 

Lista de exercícios e tarefas que tivemos de fazer durante as aulas
Os códigos estão divididos por Aulas ex.: Aula1, Aula2, ...
Sempre que houver enunciados, estarão juntamente com o código.

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
    - Tarefa 1 da Aula 2 - Versão do formador
    - ex1 functions array - Foram criadas diversas função para análise e cálculo de notas de alunos armazenadas no array
        - função para recolher, mostrar, alterar, médias, aprovado, reprovado e melhores notas.
    - Tarefa 2 - Recolha dos valores de vendas das Filiais da Empresa
        - código: functions-array-T02.c
        - Tarefa indidual, enunciado no código.

- Aula 4 - Funções e Arrays
    - Tarefa 2 da Aula 3 - Versão do Formador
        - código: functions-T02-correcao-form.c
    - Tarefa 3 - Clínica com Registo de Marcações
        - código: functions-T03.c
        - O Formador fez o ponto 1 do menu de opções (Realizar Marcações)
        - Minha tarefa, construir o ponto 2 (Marcação de Urgência) e ponto 3 (Eliminar Marcação)

- Aula 5 - Strings
    - Tarefa 3 da Aula 4 - Versão do Formador
    - Strings - utilizando para entrada o scanf para comparar com o gets, strings-ex1.c
    - Strings - utilizando para entrada o gets, strings-ex2.c
    - Jogo Quiz - História de Portugal - matrizes e strings

- Aula 6 - Strings
    - Continuando com a implementação do jogo Quiz
    - Struct - Estruta - estrutura-ex1.c parte2
    - Comparação entre o Struct e as matrizes - estrutura-ex1.c final
    - Tarefa 04 com struct - Gestão de Funcionários v1 - struct-t04.c

- Aula 7 - Strings
    - Tarefa 04 com struct - Gestão de Funcionários Solução Formador - struct-t04-formador.c
        - Utilizando uma nova função de comparação strcmp(dado1, dado2)
    - Ponteiros de memória, ponteiros-ex1.c
    - Escrita de ficheiros, cria um ficheiro com um número - fopen, file-write-ex2.c
    - Leitura de ficheiros lê o número adicionado ao ficheiro criado anteriormente - fscanf, file-read-ex3.c
    - Estrutura de ficheiros, escrita e leitura - file-struct-ext4.c , file-struct_read-ext5.c
    - Tarefa 5 - Adiciona a opção de escrita e leitura do ficheiro ao programa da Tarefa 4  - struct-file-t05.c
- Aula 8 - Introdu��o ao C++
    - C�digo exemplo para leitura e escrita em C++ , cmais_ex1.cpp