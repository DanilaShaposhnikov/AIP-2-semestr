#include <iostream>
#include<array>

//Сгенерировать массив со случайными числами в диапазоне: [0,100]
using namespace std;

void task1(){
    array<int,100>nums;
    for(int i = 0; i<100;i++){
        nums[i]=rand()%101;
        std::cout<<nums[i]<<endl;
    }
}

int main()
{
    task1();
    return 0;
}
