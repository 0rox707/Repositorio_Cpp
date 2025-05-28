#include "Aluno.h"
#include <iostream>
#include <vector>
#include <cstdlib>
std::vector<Aluno*> listaAluno={
    new Aluno("Ana",20,111,"Psico"),
    new Aluno("Leticia",21,203,"matematica"),
    new Aluno("Paulo",21,102,"SPI")
};
void cadastrarAluno(){
    std::cout << "Nome: " << std::endl;
    std::string nome;
    std::getline(std::cin,nome);
    std::cout << "Idade: " << std::endl;
    int idade;
    std::cin >> idade;
    std::cin.ignore();
    std::cout << "Matricula: " << std::endl;
    int matricula;
    std::cin >> matricula;
    std::cin.ignore();
    std::cout << "Curso: " << std::endl;
    std::string curso;
    std::getline(std::cin,curso);
        listaAluno.push_back(new Aluno(nome,idade,matricula,curso));
    
}
bool alunoExiste(int matricula){
    for(Aluno* var : listaAluno)
    {
        if(var->getMatricula()==matricula){
            return true;
        }
    }
    return false;
}
void ExcluirAluno(){
    std::cout << "Qual aluno remover: " ;
    int matricula;
    std::cin>>matricula;
    if(alunoExiste(matricula)){
        for(int i=0;i<(listaAluno.size());i++){
            if(listaAluno[i]->getMatricula()==matricula){
                std::cout << "Removendo o aluno: \n"<<listaAluno[i]->infoString() << std::endl;
                delete listaAluno[i];
                listaAluno.erase(listaAluno.begin()+i);
                break;
            }
        }
    }else{
        std::cout << "Aluno não existe." << std::endl;
    }
}
void procurarAluno(){
    std::cout << "Qual aluno procurar: " << std::endl;
    int matri;
    std::cin>>matri;
    for(Aluno* i:listaAluno){
        if(i->getMatricula()==matri){
            std::cout << "Aluno encontrado: " << std::endl;
            i->info();
        }
    }
}
void listaAlunos(){
    for(Aluno* i: listaAluno){
        std::cout << i->infoString() << std::endl;
    }
}
int main(int argc, const char** argv) {
    std::string menu="1) Cadastrar aluno.\n2) Remover aluno.\n3) Procurar aluno.\n4) Lista de aluno.\n0) Exit";
    while (true){
        std::cout << menu << std::endl;
        int esco;
        std::cin >> esco;
        std::cin.ignore();
        std::cout << "===============" << std::endl;
        switch (esco){
            case 1:
            cadastrarAluno();
            break;
            case 2:
            if (listaAluno.empty()){
                std::cout << "Não possue alunos cadastrador." << std::endl;
                break;
            }
            ExcluirAluno();
            std::cout << "===============" << std::endl;
            break;
            case 3:
            if (listaAluno.empty()){
                std::cout << "Não possue alunos cadastrador." << std::endl;
                break;
            }
            procurarAluno();
            std::cout << "===============" << std::endl;
            break;
            case 4:
            if (listaAluno.empty()){
                std::cout << "Não possue alunos cadastrador." << std::endl;
                break;
            }
            listaAlunos();
            std::cout << "===============" << std::endl;
            break;
        case 0: 
            exit(0);
            std::cout << "finalizando" << std::endl;
            
        default:
            std::cout << "Opção invalida!" << std::endl;
            break;
        }
    
    }
    return 0;
}



