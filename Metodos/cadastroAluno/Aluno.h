#ifndef ALUNO_H
#define ALUNO_H
#include <string>
#include <iostream>
class Aluno{
    private:
    std::string nome,curso;
    int idade,matricula;

    public: 
    //====== get ======
    int getMatricula();
    int getIdade();
    std::string getNome();
    std::string getCurso();
    //====== set ======
    void setIdade(int idade);
    void setMatrigula(int matrucula);
    void setNome(std::string nome);
    void setCurso(std::string curso);
    //====== contrutor ======
    Aluno(std::string nome,int idade,int matricula,std::string curso);
    //====== metodos ======
    void info();
    std::string infoString();
};
#endif