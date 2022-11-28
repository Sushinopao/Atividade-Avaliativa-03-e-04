#include <stdio.h>
#include <stdlib.h>

void selecao(int Vet[],int n){

    int Menor, aux; //declarando as variavéis menos e aux

    for(int i=0;i<n-1;i++){ //esse laço for é um contador que vai do indice 0 até ao indice 8 do vetor

        Menor=i; //a variavel Menor recebe o valor da variavel i

        for(int j=i+1 ; j<n ; j++){ //esse laço for é um contador que vai da posição 0 até a posição 9 do vetor

            if(Vet[Menor] > Vet[j]) //se o valor que estiver no indice[Menor] for maior que o valor que estiver no indice[j]

                Menor=j; // a variavel Menor vai receber o valor da variavel j

        }

        if(i!=Menor){ // se a variavel i for diferente da variavel Menor a troca de posições no vetor será feita

            aux=Vet[i]; //aqui a variavel auxiliar recebe o valor que está no indice [i] do vetor

            Vet[i]=Vet[Menor]; //o valor que está no indice [i] recebe o valor que está no indice [Menor] do vetor

            Vet[Menor]=aux; // e o valor que está no indice [Menor] do vetor recebe o valor da variavel aux
        }
        }
    }

int main(){

    int n=10;

    int Vetor[] = {3,6,5,1,2,8,7,9,4,10};

    printf("Sem o SelectionSort:\n");//Sem o SelectionSort

    for(int x = 0; x < n; x++){
        printf("%4d",Vetor[x]);
    }


    selecao(Vetor,n);

    printf("\n\n\n");

    printf("Mostrando o resultado do algoritmo ordenado por SelectionSort:\n"); //mostrando o resultado do algoritmo ordenado por SelectionSort

    for(int i=0;i<n;i++){
        printf("%4d",Vetor[i]);
    }

    printf("\n\n\n");

    system("pause");
    return 0;
}