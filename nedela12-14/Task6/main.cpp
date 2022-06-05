#include <iostream>
#include<array>

//Создать новый массив из двух других массивов путём операций над элементами
//массивов:деления

void task(){
    int a[10] = { -7, 20, 69, 25, 88, 50, 84, 40, -4, 75 };
    int b[10] = { 16, -12, 33, 65, 15, -36, 12, 3, -30, 4 };
    int y[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for (int i = 0; i < 10; i++){
             y[i] = a[i]/b[i];
            }

        for (int i = 0; i < 10; i++)
           std::cout << y[i] << " ";

 }
using namespace std;

int main()
{
    task();
    return 0;
}
