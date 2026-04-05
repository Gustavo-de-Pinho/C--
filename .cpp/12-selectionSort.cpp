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

    //selection SOrt!!!
    for (int i=0; i < suaLista.size()-1; i++){  //definimos um for que vai rodar n-2 vezes (n sendo o tamanho da lista)(não precisamos ajeitar o último elemento pq ele já está ajeitado)
        int min = i; //uma mváriavel q representa o menor numero, começa recebendo o indice atual
        
        for(int j= i+1; j < suaLista.size(); j++){ //começamos do 1, porque o 0 já é selecionado no começo
            if (suaLista[j] < suaLista[min]){ //se j for menor que o min(menor valor), ele assume essa posiçãp
                min = j;
            }
        }

        int temp = suaLista[i];
        suaLista[i] = suaLista[min]; //trocando posições
        suaLista[min] = temp; //isso aqui tanto faz na verdade, o min vai trocar depois de novo

        for (int k=0; k < suaLista.size(); k++){ //codigo para exebir nosso vetor a cada mudança, para acompanharmos as mudanças
            std::cout << suaLista[k] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n Sua lista pos selection sort: \n"; //gran finalle

    for (int i=0; i < suaLista.size(); i++){
        std::cout << suaLista[i] << " ";
    }

    return 0;
}