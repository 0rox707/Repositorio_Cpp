#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str =  " abcdefghijklmnopqrstuvwxyz",
                code = "_%$&*+§@#~[]{}-()!=<>;,|'§:";
    
    std::string txt, crip, decrip;

    std::getline(std::cin, txt);
    size_t pos = 0;
    
    for(auto idx = 0; idx < txt.length(); idx++)
    {
        pos = str.find(txt[idx]);
        //std::cout << "Char: " << txt[idx] << " pos: " << pos << " Chip: " << code[pos] << std::endl;
        crip += code[pos];
    }    

    std::cout << crip << std::endl;

    for(auto &chr : crip)
    {
        pos = crip.find(chr);
        //std::cout << "Char: " << chr << " pos: " << pos << " Txt: " << txt[pos] << std::endl;
        decrip += txt[pos];
    }   

std::cout << decrip << std::endl;

    return 0;

}