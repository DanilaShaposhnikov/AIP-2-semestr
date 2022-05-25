#include <iostream>
#include <cmath>

using namespace std;

int Quarter (double x, double y) {
    if ((x > 0) && (y > 0)) return 1;
    if ((x < 0) && (y > 0)) return 2;
    if ((x < 0) && (y < 0)) return 3;
    if ((x > 0) && (y < 0)) return 4;
}

int main (){
    cout << Quarter (1.0, 2.0)   <<endl;
    cout << Quarter (-5.0, 3.0)  <<endl;
    cout << Quarter (-2.0, -2.0) <<endl;

    return 0;
}
