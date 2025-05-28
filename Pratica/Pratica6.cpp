#include <iostream>
int main(){
    std::cout << "Digite uma opção de 1 a 3."<<std::endl;
    int valor;
    std::cin >>valor;
    switch (valor){
    case 1:
        std::cout<<"Voce digitou 1"<<std::endl;
        break;
    case 2: 
        std::cout<<"Voce digitou 2"<<std::endl;
        break;
    case 3: 
        std::cout<<"Voce digitou 3"<<std::endl;
        break;
    default:
        std::cout << "Opção invalida!"<<std::endl;
        break;
    }
}