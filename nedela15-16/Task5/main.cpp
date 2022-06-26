#include <iostream>
#include<array>

using namespace std;

/*
Реализовать сложение, вычитание, умножение, транспонирование матриц
(разрешается фиксированный размер матриц).
*/

int const rows = 2; //строки
int const cols = 2; //столбцы

void plusMatrix(){
int mat1[rows][cols];
int mat2[rows][cols];

for (int i = 0; i < rows; i++)
         for (int j = 0; j < cols; j++)
             mat1[i][j] = rand()%10;

for (int i = 0; i < rows; i++)
         for (int j = 0; j < cols; j++)
             mat2[i][j] = rand()%20;

std::cout<<"1-st Matrix"<<std::endl;
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            std::cout<<mat1[i][j] <<" ";
    std::cout<<std::endl;
}
std::cout<<"2-nd Matrix"<<std::endl;
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            std::cout<<mat2[i][j] <<" ";
    std::cout<<std::endl;
}
std::cout<<"Result sum Matrix 1 and 2"<<std::endl;
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            mat1[i][j]+=mat2[i][j];
    }
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            std::cout<<mat1[i][j] <<" ";
    std::cout<<std::endl;
}
}

void minusMatrix(){
    int mat1[rows][cols];
    int mat2[rows][cols];

    for (int i = 0; i < rows; i++) // цикл по строкам
             for (int j = 0; j < cols; j++) // цикл по столбцам
                 mat1[i][j] = rand()%10;

    for (int i = 0; i < rows; i++) // цикл по строкам
             for (int j = 0; j < cols; j++) // цикл по столбцам
                 mat2[i][j] = rand()%20;

    std::cout<<"1-st Matrix"<<std::endl;
    for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++)
                std::cout<<mat1[i][j] <<" ";
        std::cout<<std::endl;
    }
    std::cout<<"2-nd Matrix"<<std::endl;
    for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++)
                std::cout<<mat2[i][j] <<" ";
        std::cout<<std::endl;
    }
std::cout<<"Result minus Matrix 1 and 2"<<std::endl;
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            mat1[i][j]-=mat2[i][j];
    }
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            std::cout<<mat1[i][j] <<" ";
    std::cout<<std::endl;
}
}

void matrixXmatrix(){
    int mat1[rows][cols];
    int mat2[rows][cols];

    for (int i = 0; i < rows; i++)
             for (int j = 0; j < cols; j++)
                 mat1[i][j] = rand()%10;

    for (int i = 0; i < rows; i++)
             for (int j = 0; j < cols; j++)
                 mat2[i][j] = rand()%15;

    std::cout<<"1-st Matrix"<<std::endl;
    for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++)
                 std::cout<<mat1[i][j] <<" ";
            std::cout<<std::endl;
    }
    std::cout<<"2-nd Matrix"<<std::endl;
    for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++)
                 std::cout<<mat2[i][j] <<" ";
            std::cout<<std::endl;
    }
std::cout<<"Result * Matrix 1 and 2"<<std::endl;
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            mat1[i][j]*=mat2[i][j];
    }
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
             std::cout<<mat1[i][j] <<" ";
        std::cout<<std::endl;
}
}

void transpMatrix(){
    int mat1[rows][cols];
    int mat2[rows][cols];

    for (int i = 0; i < rows; i++)
             for (int j = 0; j < cols; j++)
                 mat1[i][j] = rand()%15;

    for (int i = 0; i < rows; i++)
             for (int j = 0; j < cols; j++)
                 mat2[i][j] = rand()%30;

    std::cout<<"1-st Matrix"<<std::endl;
    for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++)
                 std::cout<<mat1[i][j] <<" ";
            std::cout<<std::endl;
    }
    std::cout<<"2-nd Matrix"<<std::endl;
    for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++)
                 std::cout<<mat2[i][j] <<" ";
            std::cout<<std::endl;
    }
std::cout<<"Result Transp Matrix 1 and 2"<<std::endl;
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            mat1[i][j]=mat1[j][i];
    }
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
             std::cout<<mat1[j][i] <<" ";
        std::cout<<std::endl;
}

std::cout<<std::endl;

for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            mat2[i][j]=mat2[j][i];
    }
for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
             std::cout<<mat2[j][i] <<" ";
        std::cout<<std::endl;
}

}
int main()
{
   // plusMatrix();
   // minusMatrix();
   // matrixXmatrix();
    transpMatrix();
    return 0;
}
