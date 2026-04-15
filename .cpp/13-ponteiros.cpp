#include <iostream>

struct No {
    int valor;
    No* proximo;
};

void imprimirLista(No* n) {
    while (n != nullptr) {
        std::cout << n->valor << " -> ";
        n = n->proximo; // Move para o próximo nó
    }
    std::cout << "NULL" << std::endl;
}

int main (){
    int x;
    int y;
    std::cout << "digite um valor para x" << "\n";
    std::cin >> x;
    std::cout << "digite um valor para y" << "\n";
    std::cin >> y;
    No* header = new No();
    No* segundo = new No();

    header->valor = x;
    header->proximo = segundo;

    segundo->valor = y;
    segundo->proximo = nullptr;

    imprimirLista(header);
}