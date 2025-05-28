#include "Aluno.h"
#include <string>
#include <iostream>
void Aluno::setNome(std::string nome){
    this->nome=nome;
}
void Aluno::setCurso(std::string curso){
    this->curso=curso;
}
void Aluno::setIdade(int idade){
    this->idade=idade;
}
void Aluno::setMatrigula(int matricula){
    this->matricula=matricula;
}
std::string Aluno::getNome(){
    return this -> nome;
}
std::string Aluno::getCurso(){
    return this -> curso;
}
int Aluno::getMatricula(){
    return this -> matricula;
}
int Aluno::getIdade(){
    return this -> idade;
}
Aluno::Aluno(std::string nome,int idade,int matricula ,std::string curso){
    this->nome=nome;
    this->idade=idade;
    this->curso=curso;
    this->matricula=matricula;
}
void Aluno::info(){
    std::cout << "| Aluno: "<< this->nome<<
    " | Matricula: "<<this -> matricula <<
    " | Idade: " <<this-> idade<<
    " | Curso: "<< this -> curso<<" |"<< std::endl;
}
std::string Aluno::infoString(){
    return "| Aluno: " + this->nome+
    " | Idade: "+std::to_string(this-> idade)+
    " | Matricula: "+ std::to_string( this -> matricula)+
    " | Curso: "+ this -> curso+" |";
}