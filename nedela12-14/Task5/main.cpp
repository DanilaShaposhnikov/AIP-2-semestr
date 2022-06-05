#include <iostream>
#include<array>

// Вычислить сумму нечётных/чётных элементов массива

using namespace std;

void task(){
    int nums[8]={1,2,3,4,5,6,7,8};
    int sumchet=0;
    int Neg=0;
    for(int i = 0; i<8;i++){
        if(nums[i]%2==0){
            sumchet= nums[1]+nums[3]+nums[5]+nums[7];
        }
       else if(nums[i]%2==1){
            Neg= nums[0]+nums[2]+nums[4]+nums[6];
        }
    }
    std::cout<<"sum2 = "<<Neg <<" ---- sum1 = "<<sumchet<<std::endl;
}

int main()
{
    task();
    return 0;
}
