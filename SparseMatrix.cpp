#include "SparseMatrix.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

SparseMatrix::SparseMatrix(int** matrix, int amtOfRows, int amtOfColumns)
{
    this->originalMatrix = matrix;
    this->rowLength = amtOfRows;
    this->columnLength = amtOfColumns;
    this->nonZeros = this->findNonZeros();
    this->array = new int*[3];
    for(int i = 0; i < this->nonZeros; i++)
    {
        this->array[i] = new int[this->nonZeros];
    }
}

int** SparseMatrix::changeArrayIntoMatrix()
{
    return originalMatrix;
}

void SparseMatrix::changeSparseIntoArray()
{
    int count = 0;
    for(int i = 0; i < rowLength; i++)
    {
        for(int j = 0; j < columnLength; j++)
        {
            if(originalMatrix[i][j] != 0)
            {
                this->array[0][count] = i;
                this->array[1][count] = j;
                this->array[2][count]= this->originalMatrix[i][j];
                count++;
            }
        }
    }
}

int SparseMatrix::findNonZeros()
{
    int count = 0;
    for(int i = 0; i < rowLength; i++)
    {
        for(int j = 0; j < columnLength; j++)
        {
            if(originalMatrix[i][j] != 0)
            {
                count++;
            }
        }
    }

    return count;
}

void SparseMatrix::printArray()
{
    for(int i = 0; i < this->nonZeros; i++)
    {
        cout << array[0][i] << endl;
        cout << array[1][i] << endl;
        cout << array[2][i] << endl;
        cout << "```````" << endl;
    }
}