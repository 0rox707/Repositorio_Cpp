#include <iostream>
#include <array>
#include <vector>
class Texto{
    public: 
    //  --------- invertTexto -----------
    std::string invertTexto(std::string txt){
        std::string texto="";
        int cont=(txt.size()-1);
        while (true){
            if(cont < 0){
                break;
            }
            texto+=txt[cont];
            cont--;
        }        
        return texto;
    }
    // ----------- invertVetor (int) -------- 
    std::vector<int> invertVetor(std::vector<int> veto){
        std::vector<int> retorno;
        for(int i=veto.size()-1;i>=0;i--){
            retorno.push_back(veto[i]);
            
        }
        return retorno;
    }
    // ----------- invertVetor (std::string) -------- 
    std::vector<std::string> invertVetor(std::vector<std::string> veto){
        std::vector<std::string> retorno;
        for(int i=veto.size()-1;i>=0;i--){
            retorno.push_back(veto[i]);
            
        }
        return retorno;
    }
    
    // ------------- split ----------
    std::vector<std::string> split(std::string frase,char caracter){
        std::vector<std::string> retorno;
        std::string palavra="";
        for (int i=0;i<(frase.size());i++){
            if(frase.at(i)==caracter){
                retorno.push_back(palavra);
                palavra="";
            }else{
                palavra+=frase.at(i);
            }
            if(frase.size()==(i+1)){
                palavra+=frase.at(i);
                retorno.push_back(palavra);
            }
        }
        return retorno;
    }

    // ----------- encripht ---------
    void encripht(std::string txt){

        
    }
};

int main(){
    Texto t;
    std::cout<<"__________________________\n";
    // std::vector<std::string>  vex= t.split("Ola Mundo! Como esta? Bem né o coiso",' ');
    std::vector<std::string> vetInt =t.invertVetor({"Primeiro","Ola","Mortis"});
    
    for(std::string i: vetInt){
        std::cout<< "numero: "<<i<<std::endl;
    }
    std::cout<<"Fim"<<std::endl;
    return 0;
}