#include <iostream>
int main(){
    std::cout <<"Pratica de laço de repetição\n-------\n1° laço: while: " << std::endl; 
    int condição=0;

    while(condição<=5){
        std::cout << "while -> Contador: "<< condição<< std::endl;
        condição++;
    }

    do
    {
        std::cout << "do-while -> Contador: "<< condição<< std::endl;
        condição++;
    } while (condição<9);
    
    for(int contfor=0;contfor<5;contfor++){
        std::cout << "for -> Contfor: "<< contfor<< std::endl;
    }



}