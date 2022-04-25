#include <iostream>
#include <cmath>

using namespace std;

int main(){
/*
  //y = 3x - 7, если x > 1
  //y = 3, если x = 1
  //y = 3 * |x+2| - 7, если x < 1


    float x,y;
    cout <<"enter the number of x= ";
    cin >>x;
    if (x>1){
    y=(3*x)-7;
}
    else
    if(x==1){
    y=3;
}
    if (x<1){
     y=(3*abs(x+2))-7;
}


    cout <<"Result = "<<y<<endl;

    return 0;
*/

/*
   //y = (2+x)^2 + 7, если x > -8
  //y = 5, если x = -8
  //y = |2 * x-1| - 1, если x < -8

    float x,y;
    cout <<"enter the number of x= ";
    cin >>x;
    if (x> -8){
    y = (2+x)*(2+x) +7;
}
    else
    if(x== -8){
    y=5;
}
    if (x< -8){
    y=abs(2*(x-1))-1;
}


    cout <<"Result = "<<y<<endl;

    return 0;
*/

/*
    //задача №2 Г (парабола и две перпендекулярные прямые проходящие через начало координат )
       const float r = 1;
       float x,y;
       cout<<"Enter the 'x' and 'y'";
       cin >>x>>y;
       float l = abs(x);
       float g =-(abs(x));
       if ((y<=((x*x)+2) && y>=-x) && (y = (x*x)+2))
           cout<<"Yes, it hit";
       else
           cout << "No, you miss";

       return 0;
*/

/*
    //задача №3 Г (окружность ограниченная осью X)
    const float r = 1; //радиус окружности
       float x,y;
       cout<<"Enter the 'x' and 'y':  " ;
       cin >>x>>y;
       float l = sqrt(x*x+y*y);
       bool area1 = (x>0) && (y<1);
       bool area2 = (x>0) && (y<0);
       bool area3 = (x<0 && x>1) && (y<1 && y>0);
       bool area4 = (x>=0 && x<=0.3) && (y<=0.3 && y>=0);
       if ((1<r) && (area1 || area2 || area3 ||area4))
           cout<<"Yes, it hit";
       else
           cout << "No, you miss";

       return 0;
*/

/*
    //Пользователь вводит день месяца.
    //Вывести на экран день недели. Считаем, что 1-е
    //число месяца это вторник
        int x;
        cout<<"Enter the date of the month  ";
        cin>>x;
        switch (x)
        {
        case 1:printf("vtornik");break;         //первая неделя
        case 2:printf("sreda");break;
        case 3:printf("chetverg");break;
        case 4:printf("pyatniza");break;
        case 5:printf("subbota");break;
        case 6:printf("voskresenie");break;
        case 7:printf("ponedelnik");break;

        case 8:printf("vtornik");break;         //вторая неделя
        case 9:printf("sreda");break;
        case 10:printf("chetverg");break;
        case 11:printf("pyatniza");break;
        case 12:printf("subbota");break;
        case 13:printf("voskresenie");break;
        case 14:printf("ponedelnik");break;

        case 15:printf("vtornik");break;        //третья неделя
        case 16:printf("sreda");break;
        case 17:printf("chetverg");break;
        case 18:printf("pyatniza");break;
        case 19:printf("subbota");break;
        case 20:printf("voskresenie");break;
        case 21:printf("ponedelnik");break;

        case 22:printf("vtornik");break;        //четвёртая
        case 23:printf("sreda");break;
        case 24:printf("chetverg");break;
        case 25:printf("pyatniza");break;
        case 26:printf("subbota");break;
        case 27:printf("voskresenie");break;
        case 28:printf("ponedelnik");break;

        case 29:printf("subbota");break;        //остаток(29-31 дня месяца)
        case 30:printf("voskresenie");break;
        case 31:printf("ponedelnik");break;
        }
        return 0;
*/
}

