#include <iostream>

int main(){
    std::cout << "Variaveis"<< std::endl ;
    int idade= 2;
    float altura= 1.60f;
    char caracter = 'a';
    std::string nome;
    std::cin>>nome;
    bool verdade = true;
    std::cout << "Idade: " << idade << "\nAltura: "<< altura << "\nCaracter: "<<caracter<< "\nNome: " << nome << "Verdade: " << verdade << std::endl;

    std::string teste1="Teste";
    std::string teste2="Teste";
    if(teste1==teste2){
        std::cout<< "Verdade"<<std::endl;
    }else{
        std::cout<< "Falso"<<std::endl;
    }
    return 0;

}