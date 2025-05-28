#include <iostream>
int main(){
    std::cout << "-----------\nNota de aluno\n----------\nDigite a 1° nota: ";
    int nota1,nota2;
    std::cin >> nota1;
    std::cout << "Digite a 2° nota: ";
    std::cin>>nota2;
    std::cout << "Media do aluno: "<< nota1 << " + "<<nota2<<" / 2 == "<< ((nota1+nota2)/2)<<std::endl;
    if (((nota1+nota2)/2)>=7){
        std::cout <<"O aluno esta provado"<<std::endl;
    }else{
        std::cout << "O aluno esta reprovado"<<std::endl;
    }
    
    return 0;
}