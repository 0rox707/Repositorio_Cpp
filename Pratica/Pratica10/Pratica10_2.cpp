#include "Pratica10_3.h"
#include <iostream>

class Pratica10_2{
    public:
    int numero;
    std::string texto;

    virtual void metodoTeste(int valTeste){
        std::cout << "Metodo teste\nvalTeste"<<valTeste << std::endl;
    }

    
};
int main(int argc, const char** argv) {
    Pratica10_3 obs;
    
    return 0;
}