#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    //дз первая неделя В4
    //N 1
    cout<<"    *****"<<endl
        <<"   **   **"<<endl
        <<"   **   **"<<endl
        <<"   **   **"<<endl
        <<"  *********"<<endl
        <<"  **     **"<<endl;

    //N 2d
    float a,b,s,p;
    cin>>a>>b;
    //площадь
    s=(a*b)/2;
    //периметр
    p=(a+b)*2;
    cout <<"Square "<< s <<" Perimetr "<< p;

    //N 7
    float num,x,n;
    cin>>num;
    x=pow(num,2);
    n=pow(num,3);
    cout <<"Number^2= "<< x <<" Number^3= "<< n;

    //дз вторая неделя
    //N 8D
    float num1, x;
    x= -2.34;
    num1=(fabs(x-5)-sin(x))/3+sqrt((x*x)+2014)*cos(2*x)-3;
    cout <<"num1= "<< num1;

    //N 9D
    float a,b,c;
    cin>>a;
    b=a+273.15;
    c=(a*1.8)+32;
    cout <<"Celsi= "<< a <<" Kelvin= "<< b <<" Farengeite= "<< c;

}
