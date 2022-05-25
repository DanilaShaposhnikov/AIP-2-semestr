#include <iostream>
#include <cmath>

using namespace std;
/*
y = 2x - 10, если x > 3
y = 10, если x = 3
y = (2*x+1)^2 - 1, если x < 3
*/
void func(float &x,float &y){
    cout<<"Argument X =  ";
    cin>>x;
    if (x>3){
        y= 2*x-10;
        cout << " Y = " << y << endl;
    }

    if (x<3){
        y= (2*x+1)*(2*x+1)-1;
        cout << " Y = " << y << endl;
    }
    if (x==3){
        y=10;
        cout << " Y = " << y << endl;
    }
}

int main()
{
    float x,y;
    func(x,y);

    return 0;
}
