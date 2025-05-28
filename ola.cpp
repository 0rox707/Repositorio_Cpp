#include <iostream>


int main()
{
    // std::cout <<"Imprime um valor na tela"
    // "E utilizado para vinslizar uma str epular linha"; std::endl 
    std::cout << "Hola mundo" << std::endl;
    std::cout << "Digite seu nome" << std::endl;
    // std::string val = "Conteudo da val";

    std::string nome =  "joao";
    std::cout << "Ola "<<nome<<"! Bem vindo"<< std::endl;

    std::cout << "\nPara executar precisa colocar o seginte comando ' g++ nomeArquivo.cpp -o nomeArquivo'\n" << std::endl;
    
    std::cout << "Digite um numero: " << std::endl;
    int num,num1;
    std::cin >>num;
    std::cout << "Digite outro numero: "<< std::endl;
    std::cin >> num1;

    std::cout << "A soma desses numeros e " << (num+num1)<< std::endl;
    return 0;


}
