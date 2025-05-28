#include <iostream>

int main(){
    std::cout<< "Digite sua idade:" ;
    int idade;
    std::cin >>idade;
    std::cout << "Voçe tem " << idade << ". Voce e "<< ((idade >17)? "adulto":((idade>= 12)?"adolecente":"Criança")) << std::endl;

}