#include <iostream>
#include <vector>
#include <string> //isso aqui vai ser bem importante

int main(){
    char myChar = 'a';
    char myArray[11] = "0123456789";
    //Por que 11 espaços, se há 10 caracteres? O último caractere
    //é reservado para o \0 que identifica o final de um array

    std::string myString = "Teste";
    myString = "Nao é mais teste";

    myString += " definitivamente";

    

    system("pause");

    return 0;
}