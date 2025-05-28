#include <iostream>

class AbsPratica9{
    public:
    virtual void metodoabs()=0;
    //virtual idica que o metodo pode ser sobrescrevido! 
    //oque indica o metodo abstrato e o = 0;

};
class FilhPratica : public AbsPratica9{
    public:
        void metodoabs() override {
            std::cout << "metodo sobre-escrito de uma instanciação estatica.\n";
        }
        void metodoabs2(){
            std::cout << "Metodo não sobre-escrito de uma estanciação dinamica\n";
        }
        FilhPratica(){
            std::cout<<"Metodo contrutor?!\n";
        }
};
int main(){
    FilhPratica fp;
    fp.metodoabs();

    FilhPratica* fp2= new FilhPratica();
    fp2->metodoabs2();
    delete fp2;    
    return 0;
}