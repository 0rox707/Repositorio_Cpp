#include <iostream>
int main(){
    std::cout <<"Digite seu nome: ";
    std::string nome;
    std::getline(std::cin,nome);
    int idade;
    std::cout <<"Digite sua idade: ";
    std::cin >> idade;
    std::cout<< "Voçe tem "<< idade <<"! seja bem vindo "<<nome<<std::endl;
}