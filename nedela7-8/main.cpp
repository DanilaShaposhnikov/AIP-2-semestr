#include <iostream>
#include <cmath>
using namespace std;

int main()
{
/*
    //Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
    //равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
    int n;
    cin>>n;
    for(int i=0; i < n+1; i++){
    for(int j=0; j < i; j++)
    cout << 0;
    cout << endl;
}
    cout << endl;
    return 0;
*/

/*
    //Протабулировать функцию (шаг и диапазон задаёт пользователь):
    //y = (-3+x)^2 + 2x+5
    int d;
    int n;
    int x;
    float y;
    cout<<"Vvedite n(diapazon), d(shag) , x (argument):   ";
    cin>>n>>d>>x;
    for(int i = 0; i < n; i+=d ){
    y = ((-3+x)*(-3+x))+(2*x)+5;
    x= x+1;
    cout<<"\t"<<x<<"\t"<<y<<endl;
}
    return 0;
*/

/*
    //Протабулировать функцию (шаг и диапазон задаёт пользователь):
    //y = sqrt(2+4*(x*x))+(6*x)+sin(8*x+11)
    int d;
    int n;
    int x;
    float y;
    cout<<"Vvedite n(diapazon), d(shag) , x (argument):   ";
    cin>>n>>d>>x;
    for(int i = 0; i < n; i+=d ){
    y = sqrt(2+4*(x*x))+(6*x)+sin(8*x+11);
    x= x+1;
    cout<<"\t"<<x<<"\t"<<y<<endl;
}
    return 0;
*/

/*
    //Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
    //Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
    //Ш указываются пользователем (считываются с клавиатуры или из файла).
    int h;
    int m;
    int s;
    int f;
    cout<<"Vvedite h(Nachalo otceta), m(kones otceta), s(shag): ";
    cin>>h>>m>>s;
    cout<< h <<"  ";
    for(int i = h; i < m; i+=s){
    h=h+s;
    cout<< h <<"  " ;
}
    return 0;
*/


}
