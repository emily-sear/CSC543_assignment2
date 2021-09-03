#include "SparseMatrix.hpp"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int **matrix = new int*[4];
    for(int i = 0; i < 4; i++)
    {
        matrix[i] = new int[5];
    }

    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 3;
    matrix[0][3] = 0;
    matrix[0][4] = 4;

    matrix[1][0] = 0;
    matrix[1][1] = 0;
    matrix[1][2] = 5;
    matrix[1][3] = 7;
    matrix[1][4] = 0;

    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 0;
    matrix[2][3] = 0;
    matrix[2][4] = 0;

    matrix[3][0] = 0;
    matrix[3][1] = 2;
    matrix[3][2] = 6;
    matrix[3][3] = 0;
    matrix[3][4] = 0;



    SparseMatrix* twoDArray = new SparseMatrix (matrix, 4, 5);
    twoDArray->changeSparseIntoArray();
    twoDArray->printArray();
    int** ogMatrix = twoDArray->changeArrayIntoMatrix();

    for(int m = 0; m < 4; m++)
    {
        for(int n = 0; n < 5; n++)
        {
            cout << ogMatrix[m][n] << " ";
        }
        cout << " " << endl;
    }

}