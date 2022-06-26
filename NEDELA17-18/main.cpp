#include <iostream>
#include <string>

/*
проверить соответствие открывающихся и закрывающихся фигурных
скобок {и}. Результат проверки вывести на экран и
записать в виде фразы в текстовый файл.
*/

void strcol(){
    std::string str1;
    std::cout<<"Vvedi strok^_^  "<<std::endl;
    getline(cin,str1);
    int t = 0,g=0;
    for(int c = 0;c<str1.size();c++){
        if(str1[c] =='{')
            t++,g++;
        if(str1[c] =='}')
            t++,g--;
        if(g<0)
            break;
    }
    if(g==0)
        std::cout<<"result: "<<t<<"\n";
    else std::cout<<"Syntax not OK";
}

int main()
{
    strcol();
    return 0;
}
