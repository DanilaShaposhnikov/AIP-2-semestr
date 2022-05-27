#include <iostream>

/*
Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом тяжёлом роботе.
*/

struct Robot{
     float h;//высота(м)
     float l;//длина(м)
     float g; //ширина(м)
     float m;//масса(кг)
     float v;//максимальная скорость (м/с)
 }MK0,MK1,MK2;

using namespace std;

 void Gabarite(Robot t, float x){
     if(t.m >= x ){
         std::cout<<t.h <<" m ,";
         std::cout<<t.l <<" m , ";
         std::cout<<t.g <<" m ,";
         std::cout<<t.m <<" kg ,";
         std::cout<<t.v <<" m/sec ";
     }


 }
int main()
{
    Robot MK0,MK1,MK2;
    MK0.h = 12;
    MK0.l = 27;
    MK0.g = 64;
    MK0.m = 250;
    MK0.v = 4;

    MK1.h = 8;
    MK1.l = 9;
    MK1.g = 1;
    MK1.m = 12;
    MK1.v = 12;

    MK2.h = 1;
    MK2.l = 1;
    MK2.g = 1;
    MK2.m = 3;
    MK2.v = 20;

    Gabarite(MK0, 60);
    return 0;
}
