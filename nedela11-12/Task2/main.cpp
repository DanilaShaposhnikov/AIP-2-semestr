#include <iostream>

/*Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
мнимая части. Объявите два числа и получите их значения от пользователя.
Напишите функцию, которая будет складывать комплексные числа.
*/

struct Nums{
    float a,b,c,d;
};

void ComplexNumbers(float a, float b,float c, float d){
    float x = a + b;//обычное
    float y = c + d;//комплексное
    std::cout<<"sumComplexnumbers = "<<x<<" + " << y<< "i"<< "\t";
}

using namespace std;

int main()
{
    Nums Complex1,Complex2;
    Complex1.a = 55;
    Complex1.b = 78;
    Complex2.a = 16;
    Complex2.b = 33;

    Complex1.c = 72;
    Complex1.d = 38;
    Complex2.c = 24;
    Complex2.d = 34;
    ComplexNumbers(Complex1.a,Complex1.b,Complex1.c,Complex1.d);
    ComplexNumbers(Complex2.a,Complex2.b,Complex2.c,Complex2.d);

    return 0;
}
