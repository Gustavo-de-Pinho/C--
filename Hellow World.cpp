#include <iostream> //Precisamos obrigatoriamente importar essa biblioteca aqui
#include <vector>
#include <string>

//C++ não roda sem um main
int main(){
    std::cout << "Olá Mundo!" << std::endl;
    //std é da binlioteca iostream, e cout é o chamado OUTPUT
    //<< é basicamente um recebe, e string SEMPRE aspas dupla
    //std::endl é fim da linha, enter basicamente. MAS podemos
    //representar por "\n" que nem no python também :)

    std::cin.get();
    //Rodar esse código no seco, vai só abrir a janela e fechar.
    //Por issso usamos esse código para ele esperar até clicarmos

    return 0;
}