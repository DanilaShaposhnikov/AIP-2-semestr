#include <iostream>
#include<array>

//Вычислить сумму элементов массива: больших 9,меньших 20, меньших 3,
using namespace std;

void task(){
    int sum1,sum2,sum3;
    std::array<int,10>nums;
        for(int i = 0; i<8;i++){
            nums[i]=rand();
            std::cout<<nums[i]<<" --- ";
        }
            std::cout<<std::endl;
            sum1 = nums[1]+nums[2]+nums[3]+nums[4]+nums[5]+nums[6]+nums[7]+nums[8];
            std::cout<<"Sum>9 = "<<sum1<<std::endl;

            sum2 =0;
            std::cout<<"Sum<20 = "<<sum2<<std::endl;

            sum3 =0;
            std::cout<<"Sum<3 = "<<sum3<<std::endl;

}
int main()
{
    task();
    return 0;
}
