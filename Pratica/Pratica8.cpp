#include <iostream>
#include <array>
#include <vector>
class Pratica8{
    public:
        


};
int main(){


    std::array<int, 4> teste={5,7,4,1};
    int teste3[5];
    


        std::cout<< "Tamanho teste: "<<teste.size()<<
        "\nPrimeiro elemrnto: "<<teste.front()<<
        "\nUltimo elemento: "<< teste.back()<<
        "\nPosição [2]: "<<teste.at(2)<<std::endl;
        teste.fill(79);
    
    std::cout<< "=============\nTamanho teste: "<<teste.size()<<
    "\nPrimeiro elemrnto: "<<teste.front()<<
    "\nUltimo elemento: "<< teste.back()<<
    "\nPosição [2]: "<<teste.at(7)<<std::endl;
    
    std::vector<int> vetor = {1, 2, 3, 4, 5};

    vetor.push_back(33);
    vetor.pop_back();
    //vetor.clear();
    std::cout<<"Tamanho do vetor: "<<vetor.size()<<std::endl;
    vetor.resize(7);
    std::cout<<"Tamanho do vetor: "<<vetor.size()<<std::endl;
    if(vetor.empty()){
        std::cout<<"O vetor esta vazio"<<std::endl;
    }else{
        for( int i : vetor){
            std::cout<<i<<std::endl;
        }
    }
    // clang++ -std=c++14 -o teste Pratica8.cpp
    // ./teste
            
    return 0;
}