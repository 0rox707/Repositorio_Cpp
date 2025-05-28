#include <iostream>


int main() {
    int numero = 20;

    // 1. Declare um ponteiro para inteiro chamado 'ponteiroNumero'
    // 2. Atribua a esse ponteiro o endereço da variável 'numero'
    int *nomeroPonteiro = &numero;
    
    // 3. Mostre na tela:
    //    - o valor de 'numero'
    //    - o endereço de 'numero'
    //    - o conteúdo de 'ponteiroNumero'
    //    - o valor apontado por 'ponteiroNumero'
    std::cout << "Valor nomero: "<<numero<<"\nnumero endereço: "<<&numero<<"\nConteudo do numeroPonteiro: "<<nomeroPonteiro<<"\nnumeroPonteiro conteudo: "<<*nomeroPonteiro<<std::endl; 
    return 0;
}
