#include <iostream>

/*Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о самом точном датчике.
*/
struct Sensor{
     float max;//максимум(у.ед)
     float min;//минимум(у.ед)
     float po; //погрешность(у.ед)
     float v;// скорость (м/с)
 }MK1,MK2,MK3;

using namespace std;

 void Gabarit(Sensor e, float y){
     if(e.po <= y ){
         std::cout<<"Maximum="<<"\t"<<e.max <<" ed ,";
         std::cout<<"Minimum="<<"\t"<<e.min <<" ed ,";
         std::cout<<"Pogreshnost="<<"\t"<<e.po <<" ed ,";
         std::cout<<"Speed="<<"\t"<<e.v <<"m/sec";
     }


 }
int main()
{
    Sensor MK1,MK2,MK3;
    MK1.max = 128;
    MK1.min = 1;
    MK1.po = 8;
    MK1.v = 61;

    MK2.max= 65;
    MK2.min = 1;
    MK2.po = 5;
    MK2.v = 38;

    MK3.max= 37;
    MK3.min= 1;
    MK3.po = 4;
    MK3.v = 57;

    Gabarit(MK3, 5);
    return 0;
}
