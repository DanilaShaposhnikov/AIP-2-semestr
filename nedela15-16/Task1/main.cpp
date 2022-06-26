#include <iostream>
#include <array>

/*
Преобразовать матрицу: элементы строки, в которой находится минимальный
элемент матрицы, заменить нулями.
*/

using namespace std;

void Matrix(){
    const int cols = 3; //столбцы
    const int rows = 3; //строки
    int mat[rows][cols];

    srand(0);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j]=rand()%50;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
             std::cout<<mat[i][j]<<" ";
        std::cout<<endl;
}
    int min=mat[0][0];
    int mr=0, mc=0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if(mat[i][j]<min){
                min=mat[i][j];
                mr=i;
                mc=j;
            }
    for(int i = 0; i<rows; i++)
        mat[i][mc] = 0;

    std::cout << min << " " << mr << " " << mc << endl;
    std::cout << endl;

    for(int i = 0; i<rows; i++) {
    for(int j = 0; j<cols; j++)
        std::cout << mat[i][j] << "\t";
    std::cout << endl;


}
}
int main()
{
    Matrix();
    return 0;
}
