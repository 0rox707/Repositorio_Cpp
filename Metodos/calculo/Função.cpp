#include <iostream>
#include <cmath>
class Função
{
private:
    double a, b, c, d, x1, x2;

public:
    //---- set ----
    void set_a(double xa)
    {
        this->a = xa;
    }
    void set_b(double xb)
    {
        this->b = xb;
    }
    void set_c(double xc)
    {
        this->c = xc;
    }
    void set_x1(double x1)
    {
        this->x1 = x1;
    }
    void set_x2(double x2)
    {
        this->x2 = x2;
    }
    void set_d(double d)
    {
        this->d = d;
    }
    //----- get ----
    double get_a()
    {
        return this->a;
    }
    double get_b()
    {
        return this->b;
    }
    double get_c()
    {
        return this->c;
    }
    double get_d()
    {
        return this->d;
    }
    double get_x1()
    {
        return this->x1;
    }
    double get_x2()
    {
        return this->x2;
    }

    //---- metodos ----
    void defFunção(double xa, double xb, double xc)
    {
        set_a(xa);
        set_b(xb);
        set_c(xc);
    }
    void verFução(){
        std::cout << "x1 == "<< x1 << " x2 == " << x2 << std::endl;
        if(x1>0 || x2>=0){
            std::string per;
            std::cin >> per;
            bool fler;
            if(per =="x1"|| per =="X1"|| per =="1"){
                fler=true;
            }else if(per =="x2"|| per =="X2"|| per =="2"){
                fler=false;
            }
            std::cout << "f(x) ==  " + std::to_string(a) + "x²" << ((b < 0) ? (" " + std::to_string(b) + "x") :
            ((b == 0) ? ("") : (" + " + std::to_string(b)))) << ((c < 0) ? (" " + std::to_string(c) + std::to_string((fler)?get_x1():get_x2())) :
            ((c == 0) ? ("") : (" + " + std::to_string(c)))) << std::endl;
        }else{
            // std::cout<< "1) x¹ == "+std::to_string(x1)+"\n2) x² == "+std::to_string(x2) << "\nGostaria de usar qual numero: ";
            
            std::cout << "f(x) ==  " + std::to_string(a) + "x²" << ((b < 0) ? (" " + std::to_string(b) + "x") :
            ((b == 0) ? ("") : (" + " + std::to_string(b)))) << ((c < 0) ? (" " + std::to_string(c) + "x") :
            ((c == 0) ? ("") : (" + " + std::to_string(c)))) << std::endl;
        }
    }

    void calkDelta(){
        set_d((pow(get_b(),(long)2.0)) - (4 * get_a() * get_c()));
        std::cout << "∆ == (" + (std::to_string(get_b())) + "²) - (4*" + std::to_string(get_a()) + "*" + std::to_string(get_c()) + ") == " << (get_d()) << std::endl;
    }
    void calkX(){
        if(get_d()>0){
            set_x1(((-1*get_b())+(sqrt(get_d())))/(2*get_a()));
            set_x2(((-1*get_b())-(sqrt(get_d())))/(2*get_a()));
            std::cout << "x¹ == (" + (std::to_string(-1 * (get_b()))) + " + Ʋ"+std::to_string(get_d())+
            ") /(2 * "+std::to_string(get_a())+") == "+std::to_string(x1) << std::endl;
            std::cout << "x² == (" + (std::to_string(-1 * (get_b()))) + " - Ʋ"+std::to_string(get_d())+
            ") /(2 * "+std::to_string(get_a())+") == "+std::to_string(x2) << std::endl;
        }else if(get_d()==0){
            set_x2(((-1*get_b())-(sqrt(get_d())))/(2*get_a()));
            std::cout << "x¹ e x² == (" + (std::to_string(-1 * (get_b()))) + " - Ʋ"+std::to_string(get_d())+
            ") /(2 * "+std::to_string(get_a())+") == "+std::to_string(x2) << std::endl;
        }else{
            std::cout<<"x não possue raizes reais!"<<std::endl;
        }
    }

};

int main()
{
    int a,b,c;
    Função f;
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    std::cout << "Digite o valor de c: ";
    std::cin >> c;

    f.defFunção(a,b,c);
    std::cout<<"-------------"<<std::endl;
    f.verFução();
    std::cout<<"-------------"<<std::endl;
    f.calkDelta();
    std::cout<<"-------------"<<std::endl;
    f.calkX();
    std::cout<<"-------------"<<std::endl;

    return 0;
}