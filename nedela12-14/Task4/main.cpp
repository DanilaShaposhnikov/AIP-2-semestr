#include <iostream>
#include<array>

// Посчитать количество элементов массива, больших нуля

using namespace std;

void task(){
    int sum1;
    std::array<int,10>nums;
        for(int i = 0; i<10;i++){
            nums[i]=rand()%100;
            std::cout<<nums[i]<<"\t";

}
        for(int i = 0; i<10;i++){
        sum1=0;
        if(nums[i]>0)
        sum1++;
        std::cout<<"nums ="<<sum1;
}

}

int main()
{
    task();
    return 0;
}
