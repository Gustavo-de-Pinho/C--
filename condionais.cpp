#include <iostream> //Precisamos obrigatoriamente importar essa biblioteca aqui
#include <vector>
#include <string>

//C++ não roda sem um main
int main(){
    //precisamos declarar x
    int x = 0;

    std::cout << "excolha um número ";
    //c input definimor que vamos substituir x por uma entrada
    std::cin >> x;

    // Se x maior que 0, output uma mensagem
    if (x > 0) {
        std::cout << "x é positivo" << "\n";
    }
    // e se x = 0, sai uma outra mensagem
    else if (x == 0){
        std::cout << "x é zero" << "\n";
    }
    //e se nenhum dos casos, uma outra mensagem
    else{
        std::cout << "x é negativo" << "\n";
    }

    return 0;
}