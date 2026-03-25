//Exemplo de Insertion sort
#include <iostream>
#include <vector>

int main(){
    std::vector<int> suaLista; //estamos declarando um vetor, porque ele é dinâmico
    int numero; //variavel que vamos usar para adicionar valores no vetor
    char resposta; // y ou n
    bool bandeira = true; //para sair do loop

        while(bandeira){
            std::cout << "Adicione um elemento a sua lista: \n";
            std::cin >> numero;
            suaLista.push_back(numero); //observe que, o comando é diferente para adicionar ao vetor

            std::cout << "Deseja continuar? [y]/[n] \n";

            while(bandeira){ //aquele while simples para restringir a y ou n
                std::cin >> resposta;
                if (resposta == 'n'){
                    bandeira= false; //se for n sai dos dois loops
                }
                else if (resposta == 'y'){
                    break; //se for sim, sai só desse
                }
                else{
                    std::cout << "Por favor, insira um valor valido. \n";
                } //inválido volta para o começo desse loop
            }
        }

    std::cout << "Veja a magica acontecer: \n";
    for (int i=0; i < suaLista.size(); i++){ //exibindo a lista inicialmente
        std::cout << suaLista[i] << " ";
    }
    std::cout << "\n";

    //INSERTION SORT!!!
    for (int i=1; i < suaLista.size(); i++){  //definimos um for que começa pelo segundo elemnto da lista
        int pivot = suaLista[i]; //temos um pivo que assume o valor de i, no primeiro caso, o segundo elemento
        int j = i; //j recebe o valor do indice, no rimeiro caso 1
        while (j > 0 && suaLista[j-1] > pivot){ //enquanto indice for maior que 0, e o valor de j-1 for maior que o pivot
            suaLista[j] = suaLista[j-1]; //o valor de j(i) recebe o valor da posição anterior
            j = j-1; //j(i) agora é o valor anterior, no caso um posição a menos
        }
        suaLista[j] = pivot; //conseguimos chegar no menor valor, o valor que paramos recebe o valor do pivot que armazenamos la atras

        for (int i=0; i < suaLista.size(); i++){ //codigo para exebir nosso vetor a cada mudança, para acompanharmos as mudanças
            std::cout << suaLista[i] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n Sua lista pos insertion sort: \n"; //gran finalle

    for (int i=0; i < suaLista.size(); i++){
        std::cout << suaLista[i] << " ";
    }

    return 0;
}