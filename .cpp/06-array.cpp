#include <iostream>
#include <vector>
#include <string> //isso aqui vai ser bem importante

int main(){
    char myChar = 'a';
    //vetor estático
    char myArray[11] = "0123456789";
    //Por que 11 espaços, se há 10 caracteres? O último caractere
    //é reservado para o \0 que identifica o final de um array

    std::string myString = "Teste";
    myString = "Nao é mais teste";
    //Criamos uma string a partir de uma biblioteca, e isso dá mais
    //liberdade para criar e modificar a string livrimente

    myString += " definitivamente";
    //Até concatenar é possivel
    
    std::cout << myString << std::endl;

    system("pause");

    return 0;
}