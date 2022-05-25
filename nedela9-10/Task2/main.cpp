#include <iostream>
#include <cmath>

using namespace std;

//а в переменную Y - максимальное из этих значений
//(X и Y - вещественные параметры, являющиеся одновременно входными и выходными).
//Используя четыре вызова этой процедуры,
//найти минимальное и максимальное из данных чисел A, B, C, D.

void Minmax(double& X,double& Y);

void Minmax(double& X,double& Y){
    if (X>Y){
    X=X+Y;
    Y=X-Y;
    X=X-Y;
}
    cout <<"max="<< X <<endl;
    cout <<"min="<< Y <<endl;
}
int main(){

    double A,B,C,D;

    cout <<"A= ";
    cin>>A;
    cout <<"B= ";
    cin>>B;
    cout <<"C= ";
    cin>>C;
    cout <<"D= ";
    cin>>D;

    Minmax(A,B);
    Minmax(C,D);
    Minmax(B,D);
    Minmax(C,A);

}
