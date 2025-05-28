#include <iostream>

void escrever(std::string x){
    std::cout << "Parametro passado foi - >"<<x<<std::endl;
}
int soma(float x1, float x2){

    return (x1+x2);
}
int main(){
    std::cout <<"Digite um numero: ";
    int x1,x2;
    std::cin >>x1;
    std::cout << "digite o segundo numero: ";
    std::cin >> x2;
    std::cout << "Soma de "<<x1<<" + "<<x2<<" == " <<soma(x1,x2)<<std::endl;
    escrever("Este texto foi passado por parametro");

}