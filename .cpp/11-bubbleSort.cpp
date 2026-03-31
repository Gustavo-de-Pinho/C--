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

    //bubble SORT!!!
    for (int i=0; i < suaLista.size()-1; i++){  //definimos um for que vai rodar n-1 vezes (n sendo o tamanho da lista)
        for(int j=0; j < suaLista.size()-1-i; j++){ //agora definimos um for que sempre vai começar do primeiro e vai rodando sempre um n-1-i vezes. Porque conforme a lista vai se ajeitando, os maiores vão ficando no final, e não precisamos rever duas vezes
            if (suaLista[j] > suaLista[j + 1]){ //se o j for maior que da frente dele, troca e vai pra frente.
                int temp = suaLista[j];
                suaLista[j] = suaLista[j+1];
                suaLista[j+1] = temp;
            }
        }
        for (int k=0; k < suaLista.size(); k++){ //codigo para exebir nosso vetor a cada mudança, para acompanharmos as mudanças
            std::cout << suaLista[k] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n Sua lista pos bubble sort: \n"; //gran finalle

    for (int i=0; i < suaLista.size(); i++){
        std::cout << suaLista[i] << " ";
    }

    return 0;
}