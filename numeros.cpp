#include <iostream>
#include <vector>
#include <string>

//C++ é FORTEMENTE TIPADO, e aqui vão alguns tipos
//int = 0
//unsigned int = apenas naturais
//float = 0.0f
//double = 0.0
//bool = False | True
//char = 'a' charactere
//str = "cadeia de caracteres" 

int main(){
    int x = 0;
    //Declaramos a variável x, SEMPRE INFORMAR SEU TIPO

    x = 10;
    //x RECEBE um novo valor e substitui o anterior

    x = 10+20;
    //x recebe o valor de 10 + 20, substituindo o anterior

    x += 10;
    //SOMAMOS 10 ao último valor de x

    x -= 20;
    //DIMINUÍMOS 20 ao último valor de x

    x /= 10;
    //DIVIDIMOS o valor de x por 10

    x *= 30;
    //MUTIPLICAMOS o valor de x por 30

    std::cout << x << "\n";

    system("pause");

    return 0;
}