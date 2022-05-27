#include <iostream>

//Создайте структуру, которая хранит время: часы, минуты, секунды.
//Написать функцию, которая ведёт подсчёт числа секунд между двумя
//моментами времени.

struct Time{
    int Hours;
};

void DifferenceTime(int  h1,  int  h2){
    float y = h1 - h2;
    float minute=y*60;
    float secunde=min*60;
    std::cout<<"Hours = "<<y<<std::endl;
    std::cout<<"Min = "<<minute<<std::endl;
    std::cout<<"Sec = "<<secunde<<std::endl;
}

using namespace std;

int main()
{
    Time h1,h2;
    h1.Hours = 8;
    h2.Hours = 4;

    DifferenceTime(h1.Hours,h2.Hours);

    return 0;
}
