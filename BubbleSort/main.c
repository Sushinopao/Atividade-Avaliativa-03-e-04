#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10 //definindo um tamanho
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[TAM]; //declarando o vetor com tamanho já defindo lá em cima

    int i, aux, contador; //declarando as váriaveis i, aux, contador

    wprintf(L"Entre com dez números para preencher o array, e pressione enter após digitar cada um:\n");//pedindo para o usuário digitar os valores

    for (i = 0; i < TAM; i++) { // i recebe 0, e enquanto i for menor que 10, ele acresce seu valor, isso funciona para i percorrer e gravar do indice 0 até o indice 9 do nosso vetor

        scanf("%d", &numeros[i]);//esse laço for é pra gravarmos cada valor que o usuário digitou corretamente nos indices do vetor

    }

    printf("Ordem atual dos itens no array:\n");//mostrando a ordem em que o usuário digitou os números

    for (i = 0; i < TAM; i++) {

        printf("%4d", numeros[i]);

    }

    // Algoritmo de ordenação Bubblesort:

    for (contador = 1; contador < TAM; contador++) {//esse laço for é um contador que vai de 1 até 9, porque o ultimo valor do vetor não se compara com os demais

        for (i = 0; i < TAM - 1; i++) { //esse laço for faz referencia as posições do vetor, e por isso ela vai de 0 até 8, a penultima posição dos indices vetor, porque nós só vamos comparar os valores até o penultimo indice, como foi dito na linha de cima, não comparamos o ultimo valor

            if (numeros[i] > numeros[i + 1]) { // aqui já é o metodo de trocar o valor, se o vetor numeros na posição i(posição do indice que ele estiver no momento) for maior que o seu indice sucessor, a troca será feita


                aux = numeros[i]; //Aqui a variavel auxiliar recebe o valor da que está no indice[i] do vetor numeros

                numeros[i] = numeros[i + 1]; // o indice[i] do vetor numeros na posição que será trocado recebe o seu sucessor

                numeros[i + 1] = aux; // e seu sucessor recebe o valor que estava em numeros[i] através da variavel aux

            }
        }
    }

    printf("\nElementos do array em ordem crescente:\n");//mostrando o resultado do algoritmo ordenado por bubblesort

    for (i = 0; i < TAM; i++) {

        printf("%4d", numeros[i]);

    }
    printf("\n");
    return 0;
}
